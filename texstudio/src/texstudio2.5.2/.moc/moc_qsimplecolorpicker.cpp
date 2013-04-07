/****************************************************************************
** Meta object code from reading C++ file 'qsimplecolorpicker.h'
**
** Created: Sat Apr 6 13:28:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/widgets/qsimplecolorpicker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsimplecolorpicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSimpleColorPicker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   20,   19,   19, 0x0a,
      42,   39,   19,   19, 0x0a,
      60,   19,   19,   19, 0x08,

 // properties: name, type, flags
      77,   70, 0x43095103,

       0        // eod
};

static const char qt_meta_stringdata_QSimpleColorPicker[] = {
    "QSimpleColorPicker\0\0c\0setColor(QColor)\0"
    "sz\0updateIcon(QSize)\0clicked()\0QColor\0"
    "color\0"
};

void QSimpleColorPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSimpleColorPicker *_t = static_cast<QSimpleColorPicker *>(_o);
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->updateIcon((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSimpleColorPicker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSimpleColorPicker::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QSimpleColorPicker,
      qt_meta_data_QSimpleColorPicker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSimpleColorPicker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSimpleColorPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSimpleColorPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSimpleColorPicker))
        return static_cast<void*>(const_cast< QSimpleColorPicker*>(this));
    return QToolButton::qt_metacast(_clname);
}

int QSimpleColorPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
