/****************************************************************************
** Meta object code from reading C++ file 'latexcompleter_t.h'
**
** Created: Sat Apr 6 13:28:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/latexcompleter_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexcompleter_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LatexCompleterTest[] = {

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
      20,   19,   19,   19, 0x08,
      34,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LatexCompleterTest[] = {
    "LatexCompleterTest\0\0simple_data()\0"
    "simple()\0"
};

void LatexCompleterTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexCompleterTest *_t = static_cast<LatexCompleterTest *>(_o);
        switch (_id) {
        case 0: _t->simple_data(); break;
        case 1: _t->simple(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LatexCompleterTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexCompleterTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LatexCompleterTest,
      qt_meta_data_LatexCompleterTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexCompleterTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexCompleterTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexCompleterTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexCompleterTest))
        return static_cast<void*>(const_cast< LatexCompleterTest*>(this));
    return QObject::qt_metacast(_clname);
}

int LatexCompleterTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
