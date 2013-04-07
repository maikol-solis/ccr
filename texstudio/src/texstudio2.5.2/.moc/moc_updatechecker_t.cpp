/****************************************************************************
** Meta object code from reading C++ file 'updatechecker_t.h'
**
** Created: Sat Apr 6 13:28:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/updatechecker_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatechecker_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UpdateCheckerTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      41,   18,   18,   18, 0x08,
      58,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UpdateCheckerTest[] = {
    "UpdateCheckerTest\0\0versionCompare_data()\0"
    "versionCompare()\0getLatestVersion()\0"
};

void UpdateCheckerTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdateCheckerTest *_t = static_cast<UpdateCheckerTest *>(_o);
        switch (_id) {
        case 0: _t->versionCompare_data(); break;
        case 1: _t->versionCompare(); break;
        case 2: _t->getLatestVersion(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UpdateCheckerTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpdateCheckerTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpdateCheckerTest,
      qt_meta_data_UpdateCheckerTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpdateCheckerTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpdateCheckerTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpdateCheckerTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateCheckerTest))
        return static_cast<void*>(const_cast< UpdateCheckerTest*>(this));
    return QObject::qt_metacast(_clname);
}

int UpdateCheckerTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
