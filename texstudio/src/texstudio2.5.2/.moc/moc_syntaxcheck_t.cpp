/****************************************************************************
** Meta object code from reading C++ file 'syntaxcheck_t.h'
**
** Created: Sat Apr 6 13:29:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/syntaxcheck_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syntaxcheck_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SyntaxCheckTest[] = {

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
      17,   16,   16,   16, 0x08,
      37,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SyntaxCheckTest[] = {
    "SyntaxCheckTest\0\0checktabular_data()\0"
    "checktabular()\0"
};

void SyntaxCheckTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SyntaxCheckTest *_t = static_cast<SyntaxCheckTest *>(_o);
        switch (_id) {
        case 0: _t->checktabular_data(); break;
        case 1: _t->checktabular(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SyntaxCheckTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SyntaxCheckTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SyntaxCheckTest,
      qt_meta_data_SyntaxCheckTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SyntaxCheckTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SyntaxCheckTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SyntaxCheckTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SyntaxCheckTest))
        return static_cast<void*>(const_cast< SyntaxCheckTest*>(this));
    return QObject::qt_metacast(_clname);
}

int SyntaxCheckTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
