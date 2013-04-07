/****************************************************************************
** Meta object code from reading C++ file 'userquickdialog.h'
**
** Created: Sat Apr 6 13:28:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../userquickdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userquickdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserQuickDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x08,
      39,   16,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,
      63,   16,   16,   16, 0x08,
      78,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserQuickDialog[] = {
    "UserQuickDialog\0\0name\0addItem(QString)\0"
    "actionUp()\0actionDown()\0actionDelete()\0"
    "actionAddCommand()\0"
};

void UserQuickDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserQuickDialog *_t = static_cast<UserQuickDialog *>(_o);
        switch (_id) {
        case 0: _t->addItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->actionUp(); break;
        case 2: _t->actionDown(); break;
        case 3: _t->actionDelete(); break;
        case 4: _t->actionAddCommand(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserQuickDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserQuickDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserQuickDialog,
      qt_meta_data_UserQuickDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserQuickDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserQuickDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserQuickDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserQuickDialog))
        return static_cast<void*>(const_cast< UserQuickDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserQuickDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
