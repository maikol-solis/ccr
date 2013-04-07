/****************************************************************************
** Meta object code from reading C++ file 'qpanellayout.h'
**
** Created: Sat Apr 6 13:28:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/qpanellayout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpanellayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPanelLayout[] = {

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
      19,   14,   13,   13, 0x0a,
      46,   41,   13,   13, 0x0a,
      79,   65,   13,   13, 0x0a,
     122,  106,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QPanelLayout[] = {
    "QPanelLayout\0\0item\0addItem(QLayoutItem*)\0"
    "rect\0setGeometry(QRect)\0item,position\0"
    "add(QLayoutItem*,Position)\0widget,position\0"
    "addWidget(QWidget*,Position)\0"
};

void QPanelLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPanelLayout *_t = static_cast<QPanelLayout *>(_o);
        switch (_id) {
        case 0: _t->addItem((*reinterpret_cast< QLayoutItem*(*)>(_a[1]))); break;
        case 1: _t->setGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 2: _t->add((*reinterpret_cast< QLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Position(*)>(_a[2]))); break;
        case 3: _t->addWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Position(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPanelLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPanelLayout::staticMetaObject = {
    { &QLayout::staticMetaObject, qt_meta_stringdata_QPanelLayout,
      qt_meta_data_QPanelLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPanelLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPanelLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPanelLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPanelLayout))
        return static_cast<void*>(const_cast< QPanelLayout*>(this));
    return QLayout::qt_metacast(_clname);
}

int QPanelLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
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
