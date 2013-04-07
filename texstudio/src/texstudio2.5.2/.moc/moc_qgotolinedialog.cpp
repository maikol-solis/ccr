/****************************************************************************
** Meta object code from reading C++ file 'qgotolinedialog.h'
**
** Created: Sat Apr 6 13:28:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/widgets/qgotolinedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgotolinedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGotoLineDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGotoLineDialog[] = {
    "QGotoLineDialog\0\0e\0exec(QEditor*)\0"
};

void QGotoLineDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGotoLineDialog *_t = static_cast<QGotoLineDialog *>(_o);
        switch (_id) {
        case 0: _t->exec((*reinterpret_cast< QEditor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGotoLineDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGotoLineDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QGotoLineDialog,
      qt_meta_data_QGotoLineDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGotoLineDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGotoLineDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGotoLineDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGotoLineDialog))
        return static_cast<void*>(const_cast< QGotoLineDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QGotoLineDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
