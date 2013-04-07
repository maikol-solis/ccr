/****************************************************************************
** Meta object code from reading C++ file 'textanalysis.h'
**
** Created: Sat Apr 6 13:28:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../textanalysis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextAnalysisModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TextAnalysisModel[] = {
    "TextAnalysisModel\0"
};

void TextAnalysisModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TextAnalysisModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextAnalysisModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_TextAnalysisModel,
      qt_meta_data_TextAnalysisModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextAnalysisModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextAnalysisModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextAnalysisModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextAnalysisModel))
        return static_cast<void*>(const_cast< TextAnalysisModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int TextAnalysisModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_TextAnalysisDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      32,   19,   19,   19, 0x08,
      44,   19,   19,   19, 0x08,
      66,   19,   19,   19, 0x08,
      84,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TextAnalysisDialog[] = {
    "TextAnalysisDialog\0\0slotCount()\0"
    "slotClose()\0slotSelectionButton()\0"
    "editorDestroyed()\0init()\0"
};

void TextAnalysisDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextAnalysisDialog *_t = static_cast<TextAnalysisDialog *>(_o);
        switch (_id) {
        case 0: _t->slotCount(); break;
        case 1: _t->slotClose(); break;
        case 2: _t->slotSelectionButton(); break;
        case 3: _t->editorDestroyed(); break;
        case 4: _t->init(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TextAnalysisDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextAnalysisDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TextAnalysisDialog,
      qt_meta_data_TextAnalysisDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextAnalysisDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextAnalysisDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextAnalysisDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextAnalysisDialog))
        return static_cast<void*>(const_cast< TextAnalysisDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TextAnalysisDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
