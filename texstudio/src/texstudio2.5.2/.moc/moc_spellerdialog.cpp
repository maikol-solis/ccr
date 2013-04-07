/****************************************************************************
** Meta object code from reading C++ file 'spellerdialog.h'
**
** Created: Sat Apr 6 13:28:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spellerdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spellerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpellerDialog[] = {

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
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      37,   14,   14,   14, 0x08,
      56,   14,   14,   14, 0x08,
      70,   14,   14,   14, 0x08,
      83,   14,   14,   14, 0x08,
     112,  102,   14,   14, 0x08,
     135,   14,   14,   14, 0x28,
     154,   14,   14,   14, 0x08,
     171,   14,   14,   14, 0x08,
     191,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpellerDialog[] = {
    "SpellerDialog\0\0accept()\0slotIgnore()\0"
    "slotAlwaysIgnore()\0slotReplace()\0"
    "updateItem()\0SpellingNextWord()\0"
    "forceHide\0toggleIgnoreList(bool)\0"
    "toggleIgnoreList()\0addIgnoredWord()\0"
    "removeIgnoredWord()\0finishEditIgnoreList()\0"
};

void SpellerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpellerDialog *_t = static_cast<SpellerDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->slotIgnore(); break;
        case 2: _t->slotAlwaysIgnore(); break;
        case 3: _t->slotReplace(); break;
        case 4: _t->updateItem(); break;
        case 5: _t->SpellingNextWord(); break;
        case 6: _t->toggleIgnoreList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleIgnoreList(); break;
        case 8: _t->addIgnoredWord(); break;
        case 9: _t->removeIgnoredWord(); break;
        case 10: _t->finishEditIgnoreList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpellerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpellerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpellerDialog,
      qt_meta_data_SpellerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpellerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpellerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpellerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpellerDialog))
        return static_cast<void*>(const_cast< SpellerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SpellerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_ValidatedLineEdit[] = {

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

static const char qt_meta_stringdata_ValidatedLineEdit[] = {
    "ValidatedLineEdit\0"
};

void ValidatedLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ValidatedLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ValidatedLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_ValidatedLineEdit,
      qt_meta_data_ValidatedLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ValidatedLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ValidatedLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ValidatedLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ValidatedLineEdit))
        return static_cast<void*>(const_cast< ValidatedLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int ValidatedLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IgnoreListViewDelegate[] = {

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

static const char qt_meta_stringdata_IgnoreListViewDelegate[] = {
    "IgnoreListViewDelegate\0"
};

void IgnoreListViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IgnoreListViewDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IgnoreListViewDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_IgnoreListViewDelegate,
      qt_meta_data_IgnoreListViewDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IgnoreListViewDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IgnoreListViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IgnoreListViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IgnoreListViewDelegate))
        return static_cast<void*>(const_cast< IgnoreListViewDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int IgnoreListViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
