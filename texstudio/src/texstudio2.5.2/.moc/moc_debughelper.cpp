/****************************************************************************
** Meta object code from reading C++ file 'debughelper.h'
**
** Created: Sat Apr 6 13:28:35 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../debughelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debughelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Guardian[] = {

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
      10,    9,    9,    9, 0x0a,
      33,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Guardian[] = {
    "Guardian\0\0slowOperationStarted()\0"
    "slowOperationEnded()\0"
};

void Guardian::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Guardian *_t = static_cast<Guardian *>(_o);
        switch (_id) {
        case 0: _t->slowOperationStarted(); break;
        case 1: _t->slowOperationEnded(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Guardian::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Guardian::staticMetaObject = {
    { &SafeThread::staticMetaObject, qt_meta_stringdata_Guardian,
      qt_meta_data_Guardian, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Guardian::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Guardian::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Guardian::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Guardian))
        return static_cast<void*>(const_cast< Guardian*>(this));
    return SafeThread::qt_metacast(_clname);
}

int Guardian::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafeThread::qt_metacall(_c, _id, _a);
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
