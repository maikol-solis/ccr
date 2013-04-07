"""Provides BookmarksDialog."""
import os
import sys

from PyQt4 import QtGui
from PyQt4.QtCore import Qt
from PyQt4.QtCore import SIGNAL

from cola import core
from cola import qtutils
from cola import settings
from cola import utils
from cola.i18n import N_
from cola.interaction import Interaction
from cola.widgets import defs
from cola.widgets import standard


def manage_bookmarks():
    dlg = BookmarksDialog(qtutils.active_window())
    dlg.show()
    dlg.exec_()
    return dlg


class BookmarksDialog(standard.Dialog):
    def __init__(self, parent):
        standard.Dialog.__init__(self, parent)
        self.model = settings.Settings()

        self.resize(494, 238)
        self.setWindowTitle(N_('Bookmarks'))
        self.setWindowModality(Qt.WindowModal)
        self.layt = QtGui.QVBoxLayout(self)
        self.layt.setMargin(defs.margin)
        self.layt.setSpacing(defs.spacing)

        self.bookmarks = QtGui.QListWidget(self)
        self.bookmarks.setAlternatingRowColors(True)
        self.bookmarks.setSelectionMode(QtGui.QAbstractItemView
                                             .ExtendedSelection)

        self.layt.addWidget(self.bookmarks)
        self.button_layout = QtGui.QHBoxLayout()

        self.open_button = QtGui.QPushButton(self)
        self.open_button.setText(N_('Open'))
        self.open_button.setIcon(qtutils.open_icon())
        self.open_button.setEnabled(False)
        self.button_layout.addWidget(self.open_button)

        self.add_button = QtGui.QPushButton(self)
        self.add_button.setText(N_('Add'))
        self.add_button.setIcon(qtutils.icon('add.svg'))
        self.button_layout.addWidget(self.add_button)

        self.delete_button = QtGui.QPushButton(self)
        self.delete_button.setText(N_('Delete'))
        self.delete_button.setIcon(qtutils.discard_icon())
        self.delete_button.setEnabled(False)
        self.button_layout.addWidget(self.delete_button)
        self.button_layout.addStretch()

        self.save_button = QtGui.QPushButton(self)
        self.save_button.setText(N_('Save'))
        self.save_button.setIcon(qtutils.save_icon())
        self.save_button.setEnabled(False)
        self.button_layout.addWidget(self.save_button)

        self.close_button = QtGui.QPushButton(self)
        self.close_button.setText(N_('Close'))
        self.button_layout.addWidget(self.close_button)

        self.layt.addLayout(self.button_layout)

        self.connect(self.bookmarks, SIGNAL('itemSelectionChanged()'),
                     self.item_selection_changed)

        qtutils.connect_button(self.open_button, self.open_repo)
        qtutils.connect_button(self.add_button, self.add)
        qtutils.connect_button(self.delete_button, self.delete)
        qtutils.connect_button(self.save_button, self.save)
        qtutils.connect_button(self.close_button, self.accept)

        self.update_bookmarks()

    def update_bookmarks(self):
        self.bookmarks.clear()
        self.bookmarks.addItems(self.model.bookmarks)

    def selection(self):
        return qtutils.selection_list(self.bookmarks, self.model.bookmarks)

    def item_selection_changed(self):
        has_selection = bool(self.selection())
        self.open_button.setEnabled(has_selection)
        self.delete_button.setEnabled(has_selection)

    def save(self):
        """Saves the bookmarks settings and exits"""
        self.model.save()
        Interaction.information(N_('Bookmarks Saved'),
                                N_('Successfully saved bookmarks'))
        self.save_button.setEnabled(False)

    def add(self):
        path, ok = qtutils.prompt(N_('Path to git repository'),
                                  title=N_('Enter Git Repository'),
                                  text=core.decode(os.getcwd()))
        if not ok:
            return
        self.model.bookmarks.append(path)
        self.update_bookmarks()
        self.save()

    def open_repo(self):
        """Opens a new git-cola session on a bookmark"""
        for repo in self.selection():
            utils.fork([sys.executable, sys.argv[0], '--repo', repo])

    def delete(self):
        """Removes a bookmark from the bookmarks list"""
        selection = self.selection()
        if not selection:
            return
        for repo in selection:
            self.model.remove_bookmark(repo)
        self.update_bookmarks()
        self.save_button.setEnabled(True)
