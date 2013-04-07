/****************************************************************************
** Meta object code from reading C++ file 'findGlobalDialog.h'
**
** Created: Sat Apr 6 13:28:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../findGlobalDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findGlobalDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_findGlobalDialog[] = {

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
      24,   18,   17,   17, 0x08,
      49,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_findGlobalDialog[] = {
    "findGlobalDialog\0\0state\0"
    "on_cbWords_toggled(bool)\0"
    "on_cbRegExp_toggled(bool)\0"
};

void findGlobalDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        findGlobalDialog *_t = static_cast<findGlobalDialog *>(_o);
        switch (_id) {
        case 0: _t->on_cbWords_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_cbRegExp_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData findGlobalDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject findGlobalDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_findGlobalDialog,
      qt_meta_data_findGlobalDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &findGlobalDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *findGlobalDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *findGlobalDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_findGlobalDialog))
        return static_cast<void*>(const_cast< findGlobalDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int findGlobalDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
