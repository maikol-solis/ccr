/****************************************************************************
** Meta object code from reading C++ file 'structureview_t.h'
**
** Created: Sat Apr 6 13:29:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/structureview_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'structureview_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StructureViewTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      33,   18,   18,   18, 0x08,
      42,   18,   18,   18, 0x08,
      59,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StructureViewTest[] = {
    "StructureViewTest\0\0script_data()\0"
    "script()\0benchmark_data()\0benchmark()\0"
};

void StructureViewTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StructureViewTest *_t = static_cast<StructureViewTest *>(_o);
        switch (_id) {
        case 0: _t->script_data(); break;
        case 1: _t->script(); break;
        case 2: _t->benchmark_data(); break;
        case 3: _t->benchmark(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StructureViewTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StructureViewTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StructureViewTest,
      qt_meta_data_StructureViewTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StructureViewTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StructureViewTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StructureViewTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StructureViewTest))
        return static_cast<void*>(const_cast< StructureViewTest*>(this));
    return QObject::qt_metacast(_clname);
}

int StructureViewTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
