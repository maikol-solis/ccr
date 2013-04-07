/****************************************************************************
** Meta object code from reading C++ file 'configmanager.h'
**
** Created: Sat Apr 6 13:28:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,
      59,   50,   14,   14, 0x05,
      98,   91,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,   14,   14,   14, 0x08,
     142,   14,   14,   14, 0x08,
     156,   14,   14,   14, 0x08,
     170,   14,   14,   14, 0x08,
     183,   14,   14,   14, 0x08,
     199,   14,   14,   14, 0x08,
     215,   14,   14,   14, 0x08,
     243,  233,   14,   14, 0x08,
     268,  264,   14,   14, 0x28,
     292,  285,   14,   14, 0x08,
     340,  335,   14,   14, 0x08,
     363,   14,   14,   14, 0x28,
     382,   14,   14,   14, 0x08,
     410,  405,   14,   14, 0x08,
     449,  439,   14,   14, 0x08,
     478,   14,   14,   14, 0x08,
     512,  508,   14,   14, 0x08,
     551,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConfigManager[] = {
    "ConfigManager\0\0changed\0"
    "tabbedLogViewChanged(bool)\0newValue\0"
    "newLeftPanelLayoutChanged(bool)\0menuId\0"
    "watchedMenuChanged(QString)\0browseCommand()\0"
    "undoCommand()\0editCommand()\0addCommand()\0"
    "removeCommand()\0moveUpCommand()\0"
    "moveDownCommand()\0dir,atRow\0"
    "moveCommand(int,int)\0dir\0moveCommand(int)\0"
    "item,l\0latexTreeItemChanged(QTreeWidgetItem*,int)\0"
    "menu\0latexTreeNewItem(bool)\0"
    "latexTreeNewItem()\0latexTreeNewMenuItem()\0"
    "show\0toggleVisibleTreeItems(bool)\0"
    "activated\0activateInternalViewer(bool)\0"
    "managedOptionDialogAccepted()\0obj\0"
    "managedOptionObjectDestroyed(QObject*)\0"
    "managedOptionBoolToggled()\0"
};

void ConfigManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigManager *_t = static_cast<ConfigManager *>(_o);
        switch (_id) {
        case 0: _t->tabbedLogViewChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->newLeftPanelLayoutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->watchedMenuChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->browseCommand(); break;
        case 4: _t->undoCommand(); break;
        case 5: _t->editCommand(); break;
        case 6: _t->addCommand(); break;
        case 7: _t->removeCommand(); break;
        case 8: _t->moveUpCommand(); break;
        case 9: _t->moveDownCommand(); break;
        case 10: _t->moveCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->moveCommand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->latexTreeItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->latexTreeNewItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->latexTreeNewItem(); break;
        case 15: _t->latexTreeNewMenuItem(); break;
        case 16: _t->toggleVisibleTreeItems((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->activateInternalViewer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->managedOptionDialogAccepted(); break;
        case 19: _t->managedOptionObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 20: _t->managedOptionBoolToggled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConfigManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConfigManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConfigManager,
      qt_meta_data_ConfigManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigManager))
        return static_cast<void*>(const_cast< ConfigManager*>(this));
    if (!strcmp(_clname, "ConfigManagerInterface"))
        return static_cast< ConfigManagerInterface*>(const_cast< ConfigManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ConfigManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ConfigManager::tabbedLogViewChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConfigManager::newLeftPanelLayoutChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConfigManager::watchedMenuChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
