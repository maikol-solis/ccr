import os
import sys
import errno
import subprocess
import threading

from cola import core
from cola.decorators import memoize
from cola.interaction import Interaction


INDEX_LOCK = threading.Lock()
GIT_COLA_TRACE = os.getenv('GIT_COLA_TRACE', '')


def dashify(string):
    return string.replace('_', '-')


def is_git_dir(d):
    """From git's setup.c:is_git_directory()."""
    if (os.path.isdir(d)
            and os.path.isdir(os.path.join(d, 'objects'))
            and os.path.isdir(os.path.join(d, 'refs'))):
        headref = os.path.join(d, 'HEAD')
        return (os.path.isfile(headref)
                or (os.path.islink(headref)
                and os.readlink(headref).startswith('refs')))

    return is_git_file(d)


def is_git_file(f):
    return os.path.isfile(f) and '.git' == os.path.basename(f)


def is_git_worktree(d):
    return is_git_dir(os.path.join(d, '.git'))


def read_git_file(f):
    if f is None:
        return None
    if is_git_file(f):
        fh = open(f)
        data = core.decode(core.read(fh)).rstrip()
        fh.close()
        if data.startswith('gitdir: '):
            return core.decode(data[len('gitdir: '):])
    return None


class Git(object):
    """
    The Git class manages communication with the Git binary
    """
    def __init__(self):
        self._git_cwd = None #: The working directory used by execute()
        self._worktree = None
        self._git_file_path = None
        self.set_worktree(os.getcwd())

    def set_worktree(self, path):
        self._git_dir = path
        self._git_file_path = None
        self._worktree = None
        self.worktree()

    def worktree(self):
        if self._worktree:
            return self._worktree
        self.git_dir()
        if self._git_dir:
            curdir = self._git_dir
        else:
            curdir = os.getcwd()

        if is_git_dir(os.path.join(curdir, '.git')):
            return curdir

        # Handle bare repositories
        if (len(os.path.basename(curdir)) > 4
                and curdir.endswith('.git')):
            return curdir
        if 'GIT_WORK_TREE' in os.environ:
            self._worktree = os.getenv('GIT_WORK_TREE')
        if not self._worktree or not os.path.isdir(self._worktree):
            if self._git_dir:
                gitparent = os.path.join(os.path.abspath(self._git_dir), '..')
                self._worktree = os.path.abspath(gitparent)
                self.set_cwd(self._worktree)
        return self._worktree

    def is_valid(self):
        return self._git_dir and is_git_dir(self._git_dir)

    def git_path(self, *paths):
        if self._git_file_path is None:
            return os.path.join(self.git_dir(), *paths)
        else:
            return os.path.join(self._git_file_path, *paths)

    def git_dir(self):
        if self.is_valid():
            return self._git_dir
        if 'GIT_DIR' in os.environ:
            self._git_dir = os.getenv('GIT_DIR')
        if self._git_dir:
            curpath = os.path.abspath(self._git_dir)
        else:
            curpath = os.path.abspath(os.getcwd())
        # Search for a .git directory
        while curpath:
            if is_git_dir(curpath):
                self._git_dir = curpath
                break
            gitpath = os.path.join(curpath, '.git')
            if is_git_dir(gitpath):
                self._git_dir = gitpath
                break
            curpath, dummy = os.path.split(curpath)
            if not dummy:
                break
        self._git_file_path = read_git_file(self._git_dir)
        return self._git_dir

    def set_cwd(self, path):
        """Sets the current directory."""
        self._git_cwd = path

    def __getattr__(self, name):
        if name[:1] == '_':
            raise AttributeError(name)
        return lambda *args, **kwargs: self._call_process(name, *args, **kwargs)

    @staticmethod
    def execute(command,
                cwd=None,
                istream=None,
                with_exceptions=False,
                with_raw_output=False,
                with_status=False,
                with_stderr=False,
                cola_trace=GIT_COLA_TRACE):
        """
        Execute a command and returns its output

        ``command``
            The command argument list to execute

        ``istream``
            Readable filehandle passed to subprocess.Popen.

        ``cwd``
            The working directory when running commands.
            Default: os.getcwd()

        ``with_status``
            Whether to return a (status, unicode(output)) tuple.

        ``with_stderr``
            Whether to include stderr in the output stream

        ``with_exceptions``
            Whether to raise an exception when git returns a non-zero status.

        ``with_raw_output``
            Whether to avoid stripping off trailing whitespace.

        Returns
            unicode(stdout)                     # Default
            unicode(stdout+stderr)              # with_stderr=True
            tuple(int(status), unicode(output)) # with_status=True

        """

        # Allow the user to have the command executed in their working dir.
        if not cwd:
            cwd = os.getcwd()

        extra = {}
        if sys.platform == 'win32':
            command = map(replace_carot, command)
            extra = {'shell': True}

        # Start the process
        # Guard against thread-unsafe .git/index.lock files
        INDEX_LOCK.acquire()
        # Some systems (e.g. darwin) interrupt system calls
        count = 0
        while count < 13:
            try:
                proc = subprocess.Popen(command,
                                        cwd=cwd,
                                        stdin=istream,
                                        stderr=subprocess.PIPE,
                                        stdout=subprocess.PIPE,
                                        **extra)
                # Wait for the process to return
                out, err = proc.communicate()
                status = proc.returncode
                break
            except OSError, e:
                if e.errno == errno.EINTR or e.errno == errno.ENOMEM:
                    count += 1
                    continue
                INDEX_LOCK.release()
                raise
            except:
                INDEX_LOCK.release()
                raise
        # Let the next thread in
        INDEX_LOCK.release()
        output = with_stderr and (out+err) or out
        if not with_raw_output:
            output = output.rstrip('\n')

        if cola_trace == 'trace':
            msg = 'trace: ' + subprocess.list2cmdline(command)
            Interaction.log_status(status, msg, '')
        elif cola_trace == 'full':
            if output:
                print("%s -> %d: '%s'" % (command, status, output))
            else:
                print("%s -> %d" % (command, status))
        elif cola_trace:
            print(' '.join(command))

        # Allow access to the command's status code
        if with_status:
            return (status, output)
        else:
            return output

    def transform_kwargs(self, **kwargs):
        """
        Transforms Python style kwargs into git command line options.
        """
        args = []
        for k, v in kwargs.items():
            if len(k) == 1:
                if v is True:
                    args.append("-%s" % k)
                elif type(v) is not bool:
                    args.append("-%s%s" % (k, v))
            else:
                if v is True:
                    args.append("--%s" % dashify(k))
                elif type(v) is not bool:
                    args.append("--%s=%s" % (dashify(k), v))
        return args

    def _call_process(self, cmd, *args, **kwargs):
        """
        Run the given git command with the specified arguments and return
        the result as a String

        ``cmd``
            is the command

        ``args``
            is the list of arguments

        ``kwargs``
            is a dict of keyword arguments.
            This function accepts the same optional keyword arguments
            as execute().

        Examples
            git.rev_list('master', max_count=10, header=True)

        Returns
            Same as execute()

        """

        # Handle optional arguments prior to calling transform_kwargs
        # otherwise they'll end up in args, which is bad.
        _kwargs = dict(cwd=self._git_cwd)
        execute_kwargs = ('cwd', 'istream',
                          'with_exceptions',
                          'with_raw_output',
                          'with_status',
                          'with_stderr')

        for kwarg in execute_kwargs:
            if kwarg in kwargs:
                _kwargs[kwarg] = kwargs.pop(kwarg)

        # Prepare the argument list
        opt_args = self.transform_kwargs(**kwargs)
        ext_args = map(core.encode, args)
        args = opt_args + ext_args

        call = ['git', dashify(cmd)]
        call.extend(args)

        return self.execute(call, **_kwargs)


def replace_carot(cmd_arg):
    """
    Guard against the windows command shell.

    In the Windows shell, a carat character (^) may be used for
    line continuation.  To guard against this, escape the carat
    by using two of them.

    http://technet.microsoft.com/en-us/library/cc723564.aspx

    """
    return cmd_arg.replace('^', '^^')


@memoize
def instance():
    """Return the Git singleton"""
    return Git()


git = instance()
"""
Git command singleton

>>> from cola.git import git
>>> 'git' == git.version()[:3].lower()
True

"""
