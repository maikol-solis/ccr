/****************************************************************************
** Meta object code from reading C++ file 'qsearchreplacepanel_t.h'
**
** Created: Sat Apr 6 13:29:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/qsearchreplacepanel_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsearchreplacepanel_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSearchReplacePanelTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      40,   24,   24,   24, 0x08,
      65,   24,   24,   24, 0x08,
      85,   24,   24,   24, 0x08,
     101,   24,   24,   24, 0x08,
     112,   24,   24,   24, 0x08,
     131,   24,   24,   24, 0x08,
     145,   24,   24,   24, 0x08,
     170,   24,   24,   24, 0x08,
     189,   24,   24,   24, 0x08,
     213,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSearchReplacePanelTest[] = {
    "QSearchReplacePanelTest\0\0initTestCase()\0"
    "incrementalsearch_data()\0incrementalsearch()\0"
    "findNext_data()\0findNext()\0"
    "findReplace_data()\0findReplace()\0"
    "findReplaceSpecialCase()\0findSpecialCase2()\0"
    "selectionHighlighting()\0cleanupTestCase()\0"
};

void QSearchReplacePanelTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSearchReplacePanelTest *_t = static_cast<QSearchReplacePanelTest *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->incrementalsearch_data(); break;
        case 2: _t->incrementalsearch(); break;
        case 3: _t->findNext_data(); break;
        case 4: _t->findNext(); break;
        case 5: _t->findReplace_data(); break;
        case 6: _t->findReplace(); break;
        case 7: _t->findReplaceSpecialCase(); break;
        case 8: _t->findSpecialCase2(); break;
        case 9: _t->selectionHighlighting(); break;
        case 10: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QSearchReplacePanelTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSearchReplacePanelTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSearchReplacePanelTest,
      qt_meta_data_QSearchReplacePanelTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSearchReplacePanelTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSearchReplacePanelTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSearchReplacePanelTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSearchReplacePanelTest))
        return static_cast<void*>(const_cast< QSearchReplacePanelTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QSearchReplacePanelTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
