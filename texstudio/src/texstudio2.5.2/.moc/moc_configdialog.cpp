/****************************************************************************
** Meta object code from reading C++ file 'configdialog.h'
**
** Created: Sat Apr 6 13:28:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShortcutComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ShortcutComboBox[] = {
    "ShortcutComboBox\0"
};

void ShortcutComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShortcutComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShortcutComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ShortcutComboBox,
      qt_meta_data_ShortcutComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutComboBox))
        return static_cast<void*>(const_cast< ShortcutComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int ShortcutComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ShortcutDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ShortcutDelegate[] = {
    "ShortcutDelegate\0\0item,column\0"
    "treeWidgetItemClicked(QTreeWidgetItem*,int)\0"
};

void ShortcutDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShortcutDelegate *_t = static_cast<ShortcutDelegate *>(_o);
        switch (_id) {
        case 0: _t->treeWidgetItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShortcutDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShortcutDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_ShortcutDelegate,
      qt_meta_data_ShortcutDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutDelegate))
        return static_cast<void*>(const_cast< ShortcutDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int ShortcutDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ConfigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   14,   13,   13, 0x0a,
     122,   94,   77,   13, 0x08,
     166,  153,   77,   13, 0x28,
     200,  192,   13,   13, 0x08,
     232,  192,   13,   13, 0x08,
     307,  274,  269,   13, 0x08,
     381,  353,  269,   13, 0x28,
     440,  422,  269,   13, 0x28,
     473,   13,   13,   13, 0x08,
     491,   13,   13,   13, 0x08,
     513,   13,   13,   13, 0x08,
     539,   13,   13,   13, 0x08,
     567,   13,   13,   13, 0x08,
     583,  192,   13,   13, 0x08,
     607,   13,   13,   13, 0x08,
     623,   13,   13,   13, 0x08,
     639,   13,   13,   13, 0x08,
     663,  660,   13,   13, 0x08,
     692,  660,   13,   13, 0x08,
     729,  721,   13,   13, 0x08,
     761,  749,   13,   13, 0x08,
     781,   13,   13,   13, 0x08,
     800,   13,   13,   13, 0x08,
     821,   13,   13,   13, 0x08,
     843,  841,   13,   13, 0x08,
     878,   13,   13,   13, 0x08,
     894,   13,   13,   13, 0x08,
     938,  912,   13,   13, 0x08,
     998,   13,   13,   13, 0x08,
    1015,   13,   13,   13, 0x08,
    1054, 1039,   13,   13, 0x08,
    1081,   13,   13,   13, 0x08,
    1098,   13,   13,   13, 0x08,
    1118,   13,   13,   13, 0x08,
    1138,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConfigDialog[] = {
    "ConfigDialog\0\0current,previous\0"
    "changePage(QListWidgetItem*,QListWidgetItem*)\0"
    "QListWidgetItem*\0caption,icon,advancedOption\0"
    "createIcon(QString,QIcon,bool)\0"
    "caption,icon\0createIcon(QString,QIcon)\0"
    "newText\0comboBoxWithPathEdited(QString)\0"
    "comboBoxWithPathHighlighted(QString)\0"
    "bool\0w,title,extension,startPath,list\0"
    "browse(QWidget*,QString,QString,QString,bool)\0"
    "w,title,extension,startPath\0"
    "browse(QWidget*,QString,QString,QString)\0"
    "w,title,extension\0browse(QWidget*,QString,QString)\0"
    "browseThesaurus()\0browseGrammarLTPath()\0"
    "browseGrammarLTJavaPath()\0"
    "browseGrammarWordListsDir()\0browseDictDir()\0"
    "dictDirChanged(QString)\0browsePathLog()\0"
    "browsePathPdf()\0browsePathCommands()\0"
    "on\0advancedOptionsToggled(bool)\0"
    "advancedOptionsClicked(bool)\0toolbar\0"
    "toolbarChanged(int)\0actionClass\0"
    "actionsChanged(int)\0toToolbarClicked()\0"
    "fromToolbarClicked()\0checkToolbarMoved()\0"
    "p\0customContextMenuRequested(QPoint)\0"
    "loadOtherIcon()\0insertSeparator()\0"
    "parent,menu,keepHierarchy\0"
    "populatePossibleActions(QTreeWidgetItem*,const QMenu*,bool)\0"
    "updateCheckNow()\0refreshLastUpdateTime()\0"
    "onlyMonospaced\0populateComboBoxFont(bool)\0"
    "custEnvAddLine()\0custEnvRemoveLine()\0"
    "custSyntaxAddLine()\0custSyntaxRemoveLine()\0"
};

void ConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigDialog *_t = static_cast<ConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: { QListWidgetItem* _r = _t->createIcon((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 2: { QListWidgetItem* _r = _t->createIcon((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 3: _t->comboBoxWithPathEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->comboBoxWithPathHighlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { bool _r = _t->browse((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->browse((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->browse((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->browseThesaurus(); break;
        case 9: _t->browseGrammarLTPath(); break;
        case 10: _t->browseGrammarLTJavaPath(); break;
        case 11: _t->browseGrammarWordListsDir(); break;
        case 12: _t->browseDictDir(); break;
        case 13: _t->dictDirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->browsePathLog(); break;
        case 15: _t->browsePathPdf(); break;
        case 16: _t->browsePathCommands(); break;
        case 17: _t->advancedOptionsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->advancedOptionsClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->toolbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->actionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->toToolbarClicked(); break;
        case 22: _t->fromToolbarClicked(); break;
        case 23: _t->checkToolbarMoved(); break;
        case 24: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 25: _t->loadOtherIcon(); break;
        case 26: _t->insertSeparator(); break;
        case 27: _t->populatePossibleActions((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QMenu*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 28: _t->updateCheckNow(); break;
        case 29: _t->refreshLastUpdateTime(); break;
        case 30: _t->populateComboBoxFont((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->custEnvAddLine(); break;
        case 32: _t->custEnvRemoveLine(); break;
        case 33: _t->custSyntaxAddLine(); break;
        case 34: _t->custSyntaxRemoveLine(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigDialog,
      qt_meta_data_ConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigDialog))
        return static_cast<void*>(const_cast< ConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
