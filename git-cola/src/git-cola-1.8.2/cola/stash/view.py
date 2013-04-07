"""Provides the StashView dialog."""

from PyQt4 import QtCore
from PyQt4 import QtGui
from PyQt4.QtCore import SIGNAL

from cola import cmds
from cola import qt
from cola import qtutils
from cola import utils
from cola.i18n import N_
from cola.stash.model import ApplyStash, SaveStash, DropStash
from cola.widgets import defs
from cola.widgets.text import DiffTextEdit
from cola.widgets.standard import Dialog


class StashView(Dialog):
    def __init__(self, model, parent=None):
        Dialog.__init__(self, parent=parent)
        self.setAttribute(QtCore.Qt.WA_MacMetalStyle)
        self.model = model
        self.stashes = []
        self.revids = []
        self.names = []

        self.setWindowModality(QtCore.Qt.WindowModal)
        self.setWindowTitle(N_('Stash'))
        if parent:
            self.resize(parent.width(), 420)
        else:
            self.resize(700, 420)

        self.stash_list = QtGui.QListWidget(self)
        self.stash_text = DiffTextEdit(self)

        self.button_apply =\
            self.toolbutton(N_('Apply'),
                            N_('Apply the selected stash'),
                            qtutils.apply_icon())
        self.button_save =\
            self.toolbutton(N_('Save'),
                            N_('Save modified state to new stash'),
                            qtutils.save_icon())
        self.button_drop = \
            self.toolbutton(N_('Drop'),
                            N_('Drop the selected stash'),
                            qtutils.discard_icon())
        self.button_close = \
            self.pushbutton(N_('Close'),
                            N_('Close'), qtutils.close_icon())

        self.keep_index = QtGui.QCheckBox(self)
        self.keep_index.setText(N_('Keep Index'))
        self.keep_index.setChecked(True)

        # Arrange layouts
        self.main_layt = QtGui.QVBoxLayout()
        self.main_layt.setMargin(defs.margin)
        self.main_layt.setSpacing(defs.spacing)

        self.btn_layt = QtGui.QHBoxLayout()
        self.btn_layt.setMargin(0)
        self.btn_layt.setSpacing(defs.spacing)

        self.splitter = QtGui.QSplitter()
        self.splitter.setHandleWidth(defs.handle_width)
        self.splitter.setOrientation(QtCore.Qt.Horizontal)
        self.splitter.setChildrenCollapsible(True)
        self.splitter.setStretchFactor(0, 1)
        self.splitter.setStretchFactor(1, 1)
        self.splitter.insertWidget(0, self.stash_list)
        self.splitter.insertWidget(1, self.stash_text)

        self.btn_layt.addWidget(self.button_save)
        self.btn_layt.addWidget(self.button_apply)
        self.btn_layt.addWidget(self.button_drop)
        self.btn_layt.addWidget(self.keep_index)
        self.btn_layt.addStretch()
        self.btn_layt.addWidget(self.button_close)

        self.main_layt.addWidget(self.splitter)
        self.main_layt.addLayout(self.btn_layt)
        self.setLayout(self.main_layt)

        self.splitter.setSizes([self.width()/3, self.width()*2/3])

        self.update_from_model()
        self.update_actions()

        self.setTabOrder(self.button_save, self.button_apply)
        self.setTabOrder(self.button_apply, self.button_drop)
        self.setTabOrder(self.button_drop, self.keep_index)
        self.setTabOrder(self.keep_index, self.button_close)

        self.connect(self.stash_list, SIGNAL('itemSelectionChanged()'),
                     self.item_selected)

        qtutils.connect_button(self.button_apply, self.stash_apply)
        qtutils.connect_button(self.button_save, self.stash_save)
        qtutils.connect_button(self.button_drop, self.stash_drop)
        qtutils.connect_button(self.button_close, self.close)

    def close(self):
        self.accept()
        cmds.do(cmds.Rescan)

    def toolbutton(self, text, tooltip, icon):
        return qt.create_toolbutton(text=text, tooltip=tooltip, icon=icon)

    def pushbutton(self, text, tooltip, icon):
        btn = QtGui.QPushButton(self)
        btn.setText(text)
        btn.setToolTip(tooltip)
        btn.setIcon(icon)
        return btn

    def selected_stash(self):
        """Returns the stash name of the currently selected stash
        """
        list_widget = self.stash_list
        stash_list = self.revids
        return qtutils.selected_item(list_widget, stash_list)

    def selected_name(self):
        list_widget = self.stash_list
        stash_list = self.names
        return qtutils.selected_item(list_widget, stash_list)

    def item_selected(self):
        """Shows the current stash in the main view."""
        self.update_actions()
        selection = self.selected_stash()
        if not selection:
            return
        diff_text = self.model.stash_diff(selection)
        self.stash_text.setPlainText(diff_text)

    def update_actions(self):
        has_changes = self.model.has_stashable_changes()
        has_stash = bool(self.selected_stash())
        self.button_save.setEnabled(has_changes)
        self.button_apply.setEnabled(has_stash)
        self.button_drop.setEnabled(has_stash)

    def update_from_model(self):
        """Initiates git queries on the model and updates the view
        """
        stashes, revids, names = self.model.stash_info()
        self.stashes = stashes
        self.revids = revids
        self.names = names

        self.stash_list.clear()
        self.stash_list.addItems(self.stashes)

    def stash_apply(self):
        """Applies the currently selected stash
        """
        selection = self.selected_stash()
        if not selection:
            return
        index = self.keep_index.isChecked()
        cmds.do(ApplyStash, selection, index)
        self.accept()
        cmds.do(cmds.Rescan)

    def stash_save(self):
        """Saves the worktree in a stash

        This prompts the user for a stash name and creates
        a git stash named accordingly.

        """
        stash_name, ok = qtutils.prompt(N_('Save Stash'),
                                        N_('Enter a name for the stash'))
        if not ok or not stash_name:
            return
        # Sanitize the stash name
        stash_name = utils.sanitize(stash_name)
        if stash_name in self.names:
            qtutils.critical(N_('Error: Stash exists'),
                             N_('A stash named "%s" already exists') % stash_name)
            return

        keep_index = self.keep_index.isChecked()
        cmds.do(SaveStash, stash_name, keep_index)
        self.accept()
        cmds.do(cmds.Rescan)

    def stash_drop(self):
        """Drops the currently selected stash
        """
        selection = self.selected_stash()
        name = self.selected_name()
        if not selection:
            return
        if not qtutils.confirm(N_('Drop Stash?'),
                               N_('Recovering a dropped stash is not possible.'),
                               N_('Drop the "%s" stash?') % name,
                               N_('Drop Stash'),
                               default=True,
                               icon=qtutils.discard_icon()):
            return
        cmds.do(DropStash, selection)
        self.update_from_model()
        self.stash_text.setPlainText('')
