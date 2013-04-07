/****************************************************************************
** Meta object code from reading C++ file 'cleandialog.h'
**
** Created: Sat Apr 6 13:28:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cleandialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cleandialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CleanDialog[] = {

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
      13,   12,   12,   12, 0x08,
      35,   12,   12,   12, 0x08,
      53,   12,   12,   12, 0x08,
      64,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CleanDialog[] = {
    "CleanDialog\0\0updateFilesToRemove()\0"
    "resetExtensions()\0onAccept()\0onReject()\0"
};

void CleanDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CleanDialog *_t = static_cast<CleanDialog *>(_o);
        switch (_id) {
        case 0: _t->updateFilesToRemove(); break;
        case 1: _t->resetExtensions(); break;
        case 2: _t->onAccept(); break;
        case 3: _t->onReject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CleanDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CleanDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CleanDialog,
      qt_meta_data_CleanDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CleanDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CleanDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CleanDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CleanDialog))
        return static_cast<void*>(const_cast< CleanDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CleanDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
