/****************************************************************************
** Meta object code from reading C++ file 'qeditor_t.h'
**
** Created: Sat Apr 6 13:29:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/qeditor_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qeditor_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QEditorTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      28,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,
      54,   12,   12,   12, 0x08,
      65,   12,   12,   12, 0x08,
      83,   12,   12,   12, 0x08,
      96,   12,   12,   12, 0x08,
     118,   12,   12,   12, 0x08,
     135,   12,   12,   12, 0x08,
     156,   12,   12,   12, 0x08,
     172,   12,   12,   12, 0x08,
     191,   12,   12,   12, 0x08,
     205,   12,   12,   12, 0x08,
     224,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QEditorTest[] = {
    "QEditorTest\0\0setText_data()\0setText()\0"
    "loadSave_data()\0loadSave()\0foldedText_data()\0"
    "foldedText()\0passiveFolding_data()\0"
    "passiveFolding()\0activeFolding_data()\0"
    "activeFolding()\0indentation_data()\0"
    "indentation()\0autoClosing_data()\0"
    "autoClosing()\0"
};

void QEditorTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QEditorTest *_t = static_cast<QEditorTest *>(_o);
        switch (_id) {
        case 0: _t->setText_data(); break;
        case 1: _t->setText(); break;
        case 2: _t->loadSave_data(); break;
        case 3: _t->loadSave(); break;
        case 4: _t->foldedText_data(); break;
        case 5: _t->foldedText(); break;
        case 6: _t->passiveFolding_data(); break;
        case 7: _t->passiveFolding(); break;
        case 8: _t->activeFolding_data(); break;
        case 9: _t->activeFolding(); break;
        case 10: _t->indentation_data(); break;
        case 11: _t->indentation(); break;
        case 12: _t->autoClosing_data(); break;
        case 13: _t->autoClosing(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QEditorTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QEditorTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEditorTest,
      qt_meta_data_QEditorTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QEditorTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QEditorTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QEditorTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QEditorTest))
        return static_cast<void*>(const_cast< QEditorTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QEditorTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
