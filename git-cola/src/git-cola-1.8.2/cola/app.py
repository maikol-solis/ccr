# Copyright (C) 2009, 2010, 2011, 2012, 2013
# David Aguilar <davvid@gmail.com>
"""Provides the main() routine and ColaApplicaiton"""

import glob
import optparse
import os
import signal
import sys
import subprocess

# Make homebrew work by default
if sys.platform == 'darwin':
    version_info = sys.version_info
    python_version = '%s.%s' % (version_info.major, version_info.minor)
    homebrew_mods = '/usr/local/lib/python%s/site-packages' % python_version
    if os.path.isdir(homebrew_mods):
        sys.path.append(homebrew_mods)

try:
    from PyQt4 import QtGui
    from PyQt4 import QtCore
    from PyQt4.QtCore import SIGNAL
except ImportError:
    sys.stderr.write('Sorry, you do not seem to have PyQt4 installed.\n')
    sys.stderr.write('Please install it before using git-cola.\n')
    sys.stderr.write('e.g.: sudo apt-get install python-qt4\n')
    sys.exit(-1)


# Import cola modules
import cola
from cola import compat
from cola import core
from cola import git
from cola import inotify
from cola import i18n
from cola import qtcompat
from cola import qtutils
from cola import resources
from cola import utils
from cola import version
from cola.decorators import memoize
from cola.interaction import Interaction
from cola.main.view import MainView
from cola.widgets import cfgactions
from cola.widgets import startup


def setup_environment():
    # Spoof an X11 display for SSH
    os.environ.setdefault('DISPLAY', ':0')

    # Setup the path so that git finds us when we run 'git cola'
    path_entries = os.environ.get('PATH').split(os.pathsep)
    bindir = os.path.dirname(os.path.abspath(__file__))
    path_entries.insert(0, bindir)
    path = os.pathsep.join(path_entries)
    compat.putenv('PATH', path)

    # We don't ever want a pager
    compat.putenv('GIT_PAGER', '')

    # Setup *SSH_ASKPASS
    git_askpass = os.getenv('GIT_ASKPASS')
    ssh_askpass = os.getenv('SSH_ASKPASS')
    if git_askpass:
        askpass = git_askpass
    elif ssh_askpass:
        askpass = ssh_askpass
    elif sys.platform == 'darwin':
        askpass = resources.share('bin', 'ssh-askpass-darwin')
    else:
        askpass = resources.share('bin', 'ssh-askpass')

    compat.putenv('GIT_ASKPASS', askpass)
    compat.putenv('SSH_ASKPASS', askpass)

    # --- >8 --- >8 ---
    # Git v1.7.10 Release Notes
    # =========================
    #
    # Compatibility Notes
    # -------------------
    #
    #  * From this release on, the "git merge" command in an interactive
    #   session will start an editor when it automatically resolves the
    #   merge for the user to explain the resulting commit, just like the
    #   "git commit" command does when it wasn't given a commit message.
    #
    #   If you have a script that runs "git merge" and keeps its standard
    #   input and output attached to the user's terminal, and if you do not
    #   want the user to explain the resulting merge commits, you can
    #   export GIT_MERGE_AUTOEDIT environment variable set to "no", like
    #   this:
    #
    #        #!/bin/sh
    #        GIT_MERGE_AUTOEDIT=no
    #        export GIT_MERGE_AUTOEDIT
    #
    #   to disable this behavior (if you want your users to explain their
    #   merge commits, you do not have to do anything).  Alternatively, you
    #   can give the "--no-edit" option to individual invocations of the
    #   "git merge" command if you know everybody who uses your script has
    #   Git v1.7.8 or newer.
    # --- >8 --- >8 ---
    # Longer-term: Use `git merge --no-commit` so that we always
    # have a chance to explain our merges.
    compat.putenv('GIT_MERGE_AUTOEDIT', 'no')


@memoize
def instance(argv):
    return QtGui.QApplication(list(argv))


# style note: we use camelCase here since we're masquerading a Qt class
class ColaApplication(object):
    """The main cola application

    ColaApplication handles i18n of user-visible data
    """

    def __init__(self, argv, locale=None, gui=True):
        cfgactions.install()
        i18n.install(locale)
        qtcompat.install()
        qtutils.install()

        # Add the default style dir so that we find our icons
        icon_dir = resources.icon_dir()
        qtcompat.add_search_path(os.path.basename(icon_dir), icon_dir)

        if gui:
            self._app = instance(tuple(argv))
            self._app.setWindowIcon(qtutils.git_icon())
        else:
            self._app = QtCore.QCoreApplication(argv)

        self._app.setStyleSheet("""
            QMainWindow::separator {
                width: 3px;
                height: 3px;
            }
            QMainWindow::separator:hover {
                background: white;
            }
            """)

    def activeWindow(self):
        """Wrap activeWindow()"""
        return self._app.activeWindow()

    def exec_(self):
        """Wrap exec_()"""
        return self._app.exec_()


def parse_args(context):
    # TODO switch to argparse, bundle it for win32?
    args = sys.argv[1:]
    builtins = set(('archive',
                    'branch',
                    'browse',
                    'classic',
                    'config',
                    'dag',
                    'diff',
                    'fetch',
                    'grep',
                    'merge',
                    'pull',
                    'push',
                    'remote',
                    'stash',
                    'search',
                    'tag'))
    if context in ('git-dag', 'dag'):
        context = 'dag'
        usage = 'git dag [options]'
    elif args and args[0] in builtins:
        context = args.pop(0)
        sys.argv = sys.argv[0:1] + args
        usage = 'git cola %s [options]' % context
    else:
        usage = ('git cola [sub-command] [options]\n'
                 '\n'
                 'Sub-commands:\n\t' +
                 '\n\t'.join(sorted(builtins)))

    parser = optparse.OptionParser(usage=usage)

    # We also accept 'git cola version'
    parser.add_option('-v', '--version',
                      help='Show cola version',
                      dest='version',
                      default=False,
                      action='store_true')

    # Specifies a git repository to open
    parser.add_option('-r', '--repo',
                      help='Specifies the path to a git repository.',
                      dest='repo',
                      metavar='PATH',
                      default=os.getcwd())

    # Specifies that we should prompt for a repository at startup
    parser.add_option('--prompt',
                      help='Prompt for a repository before starting the main GUI.',
                      dest='prompt',
                      action='store_true',
                      default=False)

    # Used on Windows for adding 'git' to the path
    parser.add_option('-g', '--git-path',
                      help='Specifies the path to the git binary',
                      dest='git',
                      metavar='PATH',
                      default='')

    if context == 'dag':
        parser.add_option('-c', '--count',
                          help='Number of commits to display.',
                          dest='count',
                          type='int',
                          default=1000)

    opts, args = parser.parse_args()
    return opts, args, context


def process_args(opts, args):
    if opts.version or (args and args[0] == 'version'):
        # Accept 'git cola --version' or 'git cola version'
        print('cola version %s' % version.version())
        sys.exit(0)

    if opts.git:
        # Adds git to the PATH.  This is needed on Windows.
        path_entries = os.environ.get('PATH', '').split(os.pathsep)
        path_entries.insert(0, os.path.dirname(opts.git))
        compat.putenv('PATH', os.pathsep.join(path_entries))

    # Bail out if --repo is not a directory
    repo = os.path.realpath(opts.repo)
    if not os.path.isdir(repo):
        sys.stderr.write("fatal: '%s' is not a directory.  "
                         'Consider supplying -r <path>.\n' % repo)
        sys.exit(-1)

    # We do everything relative to the repo root
    os.chdir(opts.repo)
    return repo


def main(context):
    """Parses the command-line arguments and starts git-cola
    """
    setup_environment()
    opts, args, context = parse_args(context)
    repo = process_args(opts, args)

    # Allow Ctrl-C to exit
    signal.signal(signal.SIGINT, signal.SIG_DFL)

    # Initialize the app
    app = ColaApplication(sys.argv)

    # Ensure that we're working in a valid git repository.
    # If not, try to find one.  When found, chdir there.
    model = cola.model()
    valid = model.set_worktree(repo) and not opts.prompt
    while not valid:
        startup_dlg = startup.StartupDialog(app.activeWindow())
        gitdir = startup_dlg.find_git_repo()
        if not gitdir:
            sys.exit(-1)
        valid = model.set_worktree(gitdir)

    # Finally, go to the root of the git repo
    os.chdir(model.git.worktree())

    # Show the GUI
    if context == 'archive':
        from cola.widgets.archive import GitArchiveDialog
        model.update_status()
        view = GitArchiveDialog(model.currentbranch)
    elif context == 'branch':
        from cola.widgets.createbranch import create_new_branch
        view = create_new_branch()
    elif context in ('git-dag', 'dag'):
        from cola.dag import git_dag
        view = git_dag(model, opts=opts, args=args)
    elif context in ('classic', 'browse'):
        from cola.classic import cola_classic
        view = cola_classic(update=False)
    elif context == 'config':
        from cola.prefs import preferences
        view = preferences()
    elif context == 'diff':
        from cola.difftool import diff_expression
        while args and args[0] == '--':
            args.pop(0)
        expr = subprocess.list2cmdline(map(core.decode, args))
        view = diff_expression(None, expr, create_widget=True)
    elif context == 'fetch':
        # TODO: the calls to update_status() can be done asynchronously
        # by hooking into the message_updated notification.
        from cola.widgets import remote
        model.update_status()
        view = remote.fetch()
    elif context == 'grep':
        from cola.widgets import grep
        view = grep.run_grep(parent=None)
    elif context == 'merge':
        from cola.merge import view
        model.update_status()
        view = view.MergeView(model, parent=None)
    elif context == 'pull':
        from cola.widgets import remote
        model.update_status()
        view = remote.pull()
    elif context == 'push':
        from cola.widgets import remote
        model.update_status()
        view = remote.push()
    elif context == 'remote':
        from cola.widgets import editremotes
        view = editremotes.edit()
    elif context == 'search':
        from cola.widgets.search import search
        view = search()
    elif context == 'stash':
        from cola.stash import stash
        model.update_status()
        view = stash()
    elif context == 'tag':
        from cola.widgets.createtag import create_tag
        view = create_tag()
    else:
        view = MainView(model, qtutils.active_window())

    # Make sure that we start out on top
    view.show()
    view.raise_()

    # Scan for the first time
    task = _start_update_thread(model)

    # Start the inotify thread
    inotify.start()

    msg_timer = QtCore.QTimer()
    msg_timer.setSingleShot(True)
    msg_timer.connect(msg_timer, SIGNAL('timeout()'), _send_msg)
    msg_timer.start(0)

    # Start the event loop
    result = app.exec_()

    # All done, cleanup
    inotify.stop()
    QtCore.QThreadPool.globalInstance().waitForDone()

    pattern = utils.tmp_file_pattern()
    for filename in glob.glob(pattern):
        os.unlink(filename)
    sys.exit(result)

    return view, task


def _start_update_thread(model):
    """Update the model in the background

    git-cola should startup as quickly as possible.

    """
    class UpdateTask(QtCore.QRunnable):
        def run(self):
            model.update_status(update_index=True)

    # Hold onto a reference to prevent PyQt from dereferencing
    task = UpdateTask()
    QtCore.QThreadPool.globalInstance().start(task)

    return task


def _send_msg():
    if git.GIT_COLA_TRACE == 'trace':
        msg = ('info: Trace enabled.  '
               'Many of commands reported with "trace" use git\'s stable '
               '"plumbing" API and are not intended for typical '
               'day-to-day use.  Here be dragons')
        Interaction.log(msg)
