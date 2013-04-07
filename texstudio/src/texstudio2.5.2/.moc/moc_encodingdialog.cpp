/****************************************************************************
** Meta object code from reading C++ file 'encodingdialog.h'
**
** Created: Sat Apr 6 13:28:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../encodingdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'encodingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EncodingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      34,   15,   15,   15, 0x08,
      54,   15,   15,   15, 0x08,
      74,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EncodingDialog[] = {
    "EncodingDialog\0\0on_view_clicked()\0"
    "on_change_clicked()\0on_reload_clicked()\0"
    "on_cancel_clicked()\0"
};

void EncodingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EncodingDialog *_t = static_cast<EncodingDialog *>(_o);
        switch (_id) {
        case 0: _t->on_view_clicked(); break;
        case 1: _t->on_change_clicked(); break;
        case 2: _t->on_reload_clicked(); break;
        case 3: _t->on_cancel_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EncodingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EncodingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EncodingDialog,
      qt_meta_data_EncodingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EncodingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EncodingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EncodingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EncodingDialog))
        return static_cast<void*>(const_cast< EncodingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EncodingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
