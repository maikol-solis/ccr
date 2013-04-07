/****************************************************************************
** Meta object code from reading C++ file 'arraydialog.h'
**
** Created: Sat Apr 6 13:28:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../arraydialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arraydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArrayDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x09,
      30,   13,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ArrayDialog[] = {
    "ArrayDialog\0\0num\0NewRows(int)\0"
    "NewColumns(int)\0"
};

void ArrayDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArrayDialog *_t = static_cast<ArrayDialog *>(_o);
        switch (_id) {
        case 0: _t->NewRows((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->NewColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ArrayDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArrayDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ArrayDialog,
      qt_meta_data_ArrayDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArrayDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArrayDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArrayDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArrayDialog))
        return static_cast<void*>(const_cast< ArrayDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ArrayDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
