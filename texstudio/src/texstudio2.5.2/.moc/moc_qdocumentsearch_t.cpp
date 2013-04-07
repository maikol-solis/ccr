/****************************************************************************
** Meta object code from reading C++ file 'qdocumentsearch_t.h'
**
** Created: Sat Apr 6 13:29:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/qdocumentsearch_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdocumentsearch_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDocumentSearchTest[] = {

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
      57,   20,   20,   20, 0x08,
      73,   20,   20,   20, 0x08,
      91,   20,   20,   20, 0x08,
     104,   20,   20,   20, 0x08,
     128,   20,   20,   20, 0x08,
     147,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDocumentSearchTest[] = {
    "QDocumentSearchTest\0\0initTestCase()\0"
    "next_sameText_data()\0next_sameText()\0"
    "replaceAll_data()\0replaceAll()\0"
    "searchAndFolding_data()\0searchAndFolding()\0"
    "cleanupTestCase()\0"
};

void QDocumentSearchTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDocumentSearchTest *_t = static_cast<QDocumentSearchTest *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->next_sameText_data(); break;
        case 2: _t->next_sameText(); break;
        case 3: _t->replaceAll_data(); break;
        case 4: _t->replaceAll(); break;
        case 5: _t->searchAndFolding_data(); break;
        case 6: _t->searchAndFolding(); break;
        case 7: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDocumentSearchTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDocumentSearchTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDocumentSearchTest,
      qt_meta_data_QDocumentSearchTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDocumentSearchTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDocumentSearchTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDocumentSearchTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDocumentSearchTest))
        return static_cast<void*>(const_cast< QDocumentSearchTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QDocumentSearchTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
