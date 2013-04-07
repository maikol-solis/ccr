/****************************************************************************
** Meta object code from reading C++ file 'qlinemarkpanel.h'
**
** Created: Sat Apr 6 13:28:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/widgets/qlinemarkpanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlinemarkpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLineMarkPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,
      59,   54,   15,   15, 0x05,
      91,   76,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QLineMarkPanel[] = {
    "QLineMarkPanel\0\0line,markID\0"
    "toolTipRequested(int,int)\0line\0"
    "lineClicked(int)\0line,globalPos\0"
    "contextMenuRequested(int,QPoint)\0"
};

void QLineMarkPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLineMarkPanel *_t = static_cast<QLineMarkPanel *>(_o);
        switch (_id) {
        case 0: _t->toolTipRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->lineClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->contextMenuRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLineMarkPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLineMarkPanel::staticMetaObject = {
    { &QPanel::staticMetaObject, qt_meta_stringdata_QLineMarkPanel,
      qt_meta_data_QLineMarkPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLineMarkPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLineMarkPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLineMarkPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineMarkPanel))
        return static_cast<void*>(const_cast< QLineMarkPanel*>(this));
    return QPanel::qt_metacast(_clname);
}

int QLineMarkPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QLineMarkPanel::toolTipRequested(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLineMarkPanel::lineClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLineMarkPanel::contextMenuRequested(int _t1, QPoint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
