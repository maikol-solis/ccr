/****************************************************************************
** Meta object code from reading C++ file 'usertooldialog.h'
**
** Created: Sat Apr 6 13:28:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usertooldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usertooldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserToolDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      40,   23,   15,   15, 0x08,
      87,   82,   15,   15, 0x08,
     120,  112,   15,   15, 0x08,
     144,   15,   15,   15, 0x08,
     153,   15,   15,   15, 0x08,
     163,   15,   15,   15, 0x08,
     176,   15,   15,   15, 0x08,
     189,   15,   15,   15, 0x08,
     204,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserToolDialog[] = {
    "UserToolDialog\0\0init()\0current,previous\0"
    "change(QListWidgetItem*,QListWidgetItem*)\0"
    "text\0itemTextChanged(QString)\0command\0"
    "commandChanged(QString)\0slotOk()\0"
    "slotAdd()\0slotRemove()\0slotMoveUp()\0"
    "slotMoveDown()\0openWizard()\0"
};

void UserToolDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserToolDialog *_t = static_cast<UserToolDialog *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->change((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->itemTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->commandChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotOk(); break;
        case 5: _t->slotAdd(); break;
        case 6: _t->slotRemove(); break;
        case 7: _t->slotMoveUp(); break;
        case 8: _t->slotMoveDown(); break;
        case 9: _t->openWizard(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserToolDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserToolDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserToolDialog,
      qt_meta_data_UserToolDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserToolDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserToolDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserToolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserToolDialog))
        return static_cast<void*>(const_cast< UserToolDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserToolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
