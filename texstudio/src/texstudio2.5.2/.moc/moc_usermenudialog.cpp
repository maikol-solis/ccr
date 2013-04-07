/****************************************************************************
** Meta object code from reading C++ file 'usermenudialog.h'
**
** Created: Sat Apr 6 13:28:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usermenudialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermenudialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserMenuDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   15,   15,   15, 0x0a,
      57,   49,   15,   15, 0x08,
      97,   89,   15,   15, 0x08,
     139,   15,   15,   15, 0x08,
     148,   15,   15,   15, 0x08,
     164,   15,   15,   15, 0x08,
     174,   15,   15,   15, 0x08,
     187,   15,   15,   15, 0x08,
     200,   15,   15,   15, 0x08,
     215,   15,   15,   15, 0x08,
     229,   15,   15,   15, 0x08,
     243,   15,   15,   15, 0x08,
     259,   15,   15,   15, 0x08,
     276,   15,   15,   15, 0x08,
     290,   15,   15,   15, 0x08,
     311,   15,   15,   15, 0x08,
     337,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserMenuDialog[] = {
    "UserMenuDialog\0\0script\0runScript(QString)\0"
    "init()\0nev,old\0change(QModelIndex,QModelIndex)\0"
    "from,to\0modelDataChanged(QModelIndex,QModelIndex)\0"
    "slotOk()\0slotRunScript()\0slotAdd()\0"
    "slotRemove()\0slotMoveUp()\0slotMoveDown()\0"
    "textChanged()\0nameChanged()\0abbrevChanged()\0"
    "triggerChanged()\0showTooltip()\0"
    "changeTypeToNormal()\0changeTypeToEnvironment()\0"
    "changeTypeToScript()\0"
};

void UserMenuDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserMenuDialog *_t = static_cast<UserMenuDialog *>(_o);
        switch (_id) {
        case 0: _t->runScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->init(); break;
        case 2: _t->change((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->modelDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->slotOk(); break;
        case 5: _t->slotRunScript(); break;
        case 6: _t->slotAdd(); break;
        case 7: _t->slotRemove(); break;
        case 8: _t->slotMoveUp(); break;
        case 9: _t->slotMoveDown(); break;
        case 10: _t->textChanged(); break;
        case 11: _t->nameChanged(); break;
        case 12: _t->abbrevChanged(); break;
        case 13: _t->triggerChanged(); break;
        case 14: _t->showTooltip(); break;
        case 15: _t->changeTypeToNormal(); break;
        case 16: _t->changeTypeToEnvironment(); break;
        case 17: _t->changeTypeToScript(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserMenuDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserMenuDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserMenuDialog,
      qt_meta_data_UserMenuDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserMenuDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserMenuDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserMenuDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserMenuDialog))
        return static_cast<void*>(const_cast< UserMenuDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserMenuDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void UserMenuDialog::runScript(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
