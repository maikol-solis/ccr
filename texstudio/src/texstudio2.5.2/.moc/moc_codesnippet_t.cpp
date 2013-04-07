/****************************************************************************
** Meta object code from reading C++ file 'codesnippet_t.h'
**
** Created: Sat Apr 6 13:28:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/codesnippet_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codesnippet_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CodeSnippetTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      46,   16,   16,   16, 0x08,
      55,   16,   16,   16, 0x08,
      75,   16,   16,   16, 0x08,
      90,   16,   16,   16, 0x08,
     106,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CodeSnippetTest[] = {
    "CodeSnippetTest\0\0initTestCase()\0"
    "insert_data()\0insert()\0nestedInsert_data()\0"
    "nestedInsert()\0undoRedo_data()\0"
    "undoRedo()\0"
};

void CodeSnippetTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CodeSnippetTest *_t = static_cast<CodeSnippetTest *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->insert_data(); break;
        case 2: _t->insert(); break;
        case 3: _t->nestedInsert_data(); break;
        case 4: _t->nestedInsert(); break;
        case 5: _t->undoRedo_data(); break;
        case 6: _t->undoRedo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CodeSnippetTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CodeSnippetTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CodeSnippetTest,
      qt_meta_data_CodeSnippetTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CodeSnippetTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CodeSnippetTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CodeSnippetTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CodeSnippetTest))
        return static_cast<void*>(const_cast< CodeSnippetTest*>(this));
    return QObject::qt_metacast(_clname);
}

int CodeSnippetTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
