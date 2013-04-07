/****************************************************************************
** Meta object code from reading C++ file 'tablemanipulation_t.h'
**
** Created: Sat Apr 6 13:29:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/tablemanipulation_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablemanipulation_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TableManipulationTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      42,   22,   22,   22, 0x08,
      56,   22,   22,   22, 0x08,
      78,   22,   22,   22, 0x08,
      95,   22,   22,   22, 0x08,
     109,   22,   22,   22, 0x08,
     118,   22,   22,   22, 0x08,
     132,   22,   22,   22, 0x08,
     141,   22,   22,   22, 0x08,
     155,   22,   22,   22, 0x08,
     164,   22,   22,   22, 0x08,
     178,   22,   22,   22, 0x08,
     187,   22,   22,   22, 0x08,
     201,   22,   22,   22, 0x08,
     210,   22,   22,   22, 0x08,
     232,   22,   22,   22, 0x08,
     249,   22,   22,   22, 0x08,
     270,   22,   22,   22, 0x08,
     286,   22,   22,   22, 0x08,
     316,   22,   22,   22, 0x08,
     341,   22,   22,   22, 0x08,
     357,   22,   22,   22, 0x08,
     368,   22,   22,   22, 0x08,
     384,   22,   22,   22, 0x08,
     395,   22,   22,   22, 0x08,
     409,   22,   22,   22, 0x08,
     418,   22,   22,   22, 0x08,
     440,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TableManipulationTest[] = {
    "TableManipulationTest\0\0splitColDef_data()\0"
    "splitColDef()\0simplifyColDef_data()\0"
    "simplifyColDef()\0addCol_data()\0addCol()\0"
    "addRow_data()\0addRow()\0remCol_data()\0"
    "remCol()\0remRow_data()\0remRow()\0"
    "getCol_data()\0getCol()\0getNumberOfCol_data()\0"
    "getNumberOfCol()\0findNextToken_data()\0"
    "findNextToken()\0findNextTokenBackwards_data()\0"
    "findNextTokenBackwards()\0addHLine_data()\0"
    "addHLine()\0splitCol_data()\0splitCol()\0"
    "getDef_data()\0getDef()\0parseTableLine_data()\0"
    "parseTableLine()\0"
};

void TableManipulationTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TableManipulationTest *_t = static_cast<TableManipulationTest *>(_o);
        switch (_id) {
        case 0: _t->splitColDef_data(); break;
        case 1: _t->splitColDef(); break;
        case 2: _t->simplifyColDef_data(); break;
        case 3: _t->simplifyColDef(); break;
        case 4: _t->addCol_data(); break;
        case 5: _t->addCol(); break;
        case 6: _t->addRow_data(); break;
        case 7: _t->addRow(); break;
        case 8: _t->remCol_data(); break;
        case 9: _t->remCol(); break;
        case 10: _t->remRow_data(); break;
        case 11: _t->remRow(); break;
        case 12: _t->getCol_data(); break;
        case 13: _t->getCol(); break;
        case 14: _t->getNumberOfCol_data(); break;
        case 15: _t->getNumberOfCol(); break;
        case 16: _t->findNextToken_data(); break;
        case 17: _t->findNextToken(); break;
        case 18: _t->findNextTokenBackwards_data(); break;
        case 19: _t->findNextTokenBackwards(); break;
        case 20: _t->addHLine_data(); break;
        case 21: _t->addHLine(); break;
        case 22: _t->splitCol_data(); break;
        case 23: _t->splitCol(); break;
        case 24: _t->getDef_data(); break;
        case 25: _t->getDef(); break;
        case 26: _t->parseTableLine_data(); break;
        case 27: _t->parseTableLine(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TableManipulationTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TableManipulationTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TableManipulationTest,
      qt_meta_data_TableManipulationTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TableManipulationTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TableManipulationTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TableManipulationTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TableManipulationTest))
        return static_cast<void*>(const_cast< TableManipulationTest*>(this));
    return QObject::qt_metacast(_clname);
}

int TableManipulationTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
