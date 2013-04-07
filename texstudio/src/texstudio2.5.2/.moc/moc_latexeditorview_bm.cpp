/****************************************************************************
** Meta object code from reading C++ file 'latexeditorview_bm.h'
**
** Created: Sat Apr 6 13:29:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/latexeditorview_bm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexeditorview_bm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LatexEditorViewBenchmark[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x08,
      48,   25,   25,   25, 0x08,
      65,   25,   25,   25, 0x08,
      82,   25,   25,   25, 0x08,
      94,   25,   25,   25, 0x08,
     112,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LatexEditorViewBenchmark[] = {
    "LatexEditorViewBenchmark\0\0"
    "documentChange_data()\0documentChange()\0"
    "linePaint_data()\0linePaint()\0"
    "paintEvent_data()\0paintEvent()\0"
};

void LatexEditorViewBenchmark::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexEditorViewBenchmark *_t = static_cast<LatexEditorViewBenchmark *>(_o);
        switch (_id) {
        case 0: _t->documentChange_data(); break;
        case 1: _t->documentChange(); break;
        case 2: _t->linePaint_data(); break;
        case 3: _t->linePaint(); break;
        case 4: _t->paintEvent_data(); break;
        case 5: _t->paintEvent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LatexEditorViewBenchmark::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexEditorViewBenchmark::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LatexEditorViewBenchmark,
      qt_meta_data_LatexEditorViewBenchmark, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexEditorViewBenchmark::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexEditorViewBenchmark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexEditorViewBenchmark::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexEditorViewBenchmark))
        return static_cast<void*>(const_cast< LatexEditorViewBenchmark*>(this));
    return QObject::qt_metacast(_clname);
}

int LatexEditorViewBenchmark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
