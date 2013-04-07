/****************************************************************************
** Meta object code from reading C++ file 'qdocumentcursor_t.h'
**
** Created: Sat Apr 6 13:28:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/qdocumentcursor_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdocumentcursor_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDocumentCursorTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      36,   20,   20,   20, 0x08,
      56,   20,   20,   20, 0x08,
      71,   20,   20,   20, 0x08,
      92,   20,   20,   20, 0x08,
     108,   20,   20,   20, 0x08,
     134,   20,   20,   20, 0x08,
     155,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDocumentCursorTest[] = {
    "QDocumentCursorTest\0\0initTestCase()\0"
    "constMethods_data()\0constMethods()\0"
    "const2Methods_data()\0const2Methods()\0"
    "subtractBoundaries_data()\0"
    "subtractBoundaries()\0cleanupTestCase()\0"
};

void QDocumentCursorTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDocumentCursorTest *_t = static_cast<QDocumentCursorTest *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->constMethods_data(); break;
        case 2: _t->constMethods(); break;
        case 3: _t->const2Methods_data(); break;
        case 4: _t->const2Methods(); break;
        case 5: _t->subtractBoundaries_data(); break;
        case 6: _t->subtractBoundaries(); break;
        case 7: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDocumentCursorTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDocumentCursorTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDocumentCursorTest,
      qt_meta_data_QDocumentCursorTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDocumentCursorTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDocumentCursorTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDocumentCursorTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDocumentCursorTest))
        return static_cast<void*>(const_cast< QDocumentCursorTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QDocumentCursorTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
