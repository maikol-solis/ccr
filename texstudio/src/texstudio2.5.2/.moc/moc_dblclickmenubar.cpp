/****************************************************************************
** Meta object code from reading C++ file 'dblclickmenubar.h'
**
** Created: Sat Apr 6 13:28:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dblclickmenubar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dblclickmenubar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DblClickMenuBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DblClickMenuBar[] = {
    "DblClickMenuBar\0\0doubleClicked()\0"
};

void DblClickMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DblClickMenuBar *_t = static_cast<DblClickMenuBar *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DblClickMenuBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DblClickMenuBar::staticMetaObject = {
    { &QMenuBar::staticMetaObject, qt_meta_stringdata_DblClickMenuBar,
      qt_meta_data_DblClickMenuBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DblClickMenuBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DblClickMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DblClickMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DblClickMenuBar))
        return static_cast<void*>(const_cast< DblClickMenuBar*>(this));
    return QMenuBar::qt_metacast(_clname);
}

int DblClickMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DblClickMenuBar::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
