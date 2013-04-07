/****************************************************************************
** Meta object code from reading C++ file 'qreliablefilewatch.h'
**
** Created: Sat Apr 6 13:28:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/qreliablefilewatch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qreliablefilewatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QReliableFileWatch[] = {

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
      35,   20,   19,   19, 0x0a,
      72,   62,   19,   19, 0x0a,
      94,   20,   19,   19, 0x0a,
     133,  124,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QReliableFileWatch[] = {
    "QReliableFileWatch\0\0file,recipient\0"
    "addWatch(QString,QObject*)\0recipient\0"
    "removeWatch(QObject*)\0"
    "removeWatch(QString,QObject*)\0filepath\0"
    "sourceChanged(QString)\0"
};

void QReliableFileWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QReliableFileWatch *_t = static_cast<QReliableFileWatch *>(_o);
        switch (_id) {
        case 0: _t->addWatch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: _t->removeWatch((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->removeWatch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 3: _t->sourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QReliableFileWatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QReliableFileWatch::staticMetaObject = {
    { &QFileSystemWatcher::staticMetaObject, qt_meta_stringdata_QReliableFileWatch,
      qt_meta_data_QReliableFileWatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QReliableFileWatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QReliableFileWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QReliableFileWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QReliableFileWatch))
        return static_cast<void*>(const_cast< QReliableFileWatch*>(this));
    return QFileSystemWatcher::qt_metacast(_clname);
}

int QReliableFileWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemWatcher::qt_metacall(_c, _id, _a);
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
