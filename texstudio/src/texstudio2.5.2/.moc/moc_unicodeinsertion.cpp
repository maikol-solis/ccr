/****************************************************************************
** Meta object code from reading C++ file 'unicodeinsertion.h'
**
** Created: Sat Apr 6 13:28:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../unicodeinsertion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unicodeinsertion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLineEditWithMetaText[] = {

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

static const char qt_meta_stringdata_QLineEditWithMetaText[] = {
    "QLineEditWithMetaText\0"
};

void QLineEditWithMetaText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QLineEditWithMetaText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLineEditWithMetaText::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QLineEditWithMetaText,
      qt_meta_data_QLineEditWithMetaText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLineEditWithMetaText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLineEditWithMetaText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLineEditWithMetaText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineEditWithMetaText))
        return static_cast<void*>(const_cast< QLineEditWithMetaText*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QLineEditWithMetaText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UnicodeInsertion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   45,   17,   17, 0x08,
      78,   74,   17,   17, 0x08,
     104,   74,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UnicodeInsertion[] = {
    "UnicodeInsertion\0\0c\0insertCharacter(QString)\0"
    "newtext\0editChanged(QString)\0r,c\0"
    "tableCellClicked(int,int)\0"
    "tableCellDoubleClicked(int,int)\0"
};

void UnicodeInsertion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UnicodeInsertion *_t = static_cast<UnicodeInsertion *>(_o);
        switch (_id) {
        case 0: _t->insertCharacter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->tableCellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->tableCellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UnicodeInsertion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UnicodeInsertion::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UnicodeInsertion,
      qt_meta_data_UnicodeInsertion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UnicodeInsertion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UnicodeInsertion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UnicodeInsertion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeInsertion))
        return static_cast<void*>(const_cast< UnicodeInsertion*>(this));
    return QWidget::qt_metacast(_clname);
}

int UnicodeInsertion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UnicodeInsertion::insertCharacter(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
