/****************************************************************************
** Meta object code from reading C++ file 'qlinemarksinfocenter.h'
**
** Created: Sat Apr 6 13:28:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/qlinemarksinfocenter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlinemarksinfocenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLineMarksInfoCenter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      52,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   79,   21,   21, 0x0a,
     100,   79,   21,   21, 0x0a,
     119,   79,   21,   21, 0x0a,
     142,   21,   21,   21, 0x0a,
     155,  150,   21,   21, 0x0a,
     176,   22,   21,   21, 0x0a,
     199,   22,   21,   21, 0x0a,
     225,   22,   21,   21, 0x0a,
     251,   22,   21,   21, 0x0a,
     280,   22,   21,   21, 0x0a,
     312,   22,   21,   21, 0x0a,
     344,  150,   21,   21, 0x0a,
     361,  359,   21,   21, 0x09,
     385,  383,   21,   21, 0x09,
     431,  419,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QLineMarksInfoCenter[] = {
    "QLineMarksInfoCenter\0\0mark\0"
    "lineMarkAdded(QLineMark)\0"
    "lineMarkRemoved(QLineMark)\0f\0"
    "loadMarks(QString)\0saveMarks(QString)\0"
    "loadMarkTypes(QString)\0clear()\0file\0"
    "removeMarks(QString)\0addLineMark(QLineMark)\0"
    "toggleLineMark(QLineMark)\0"
    "removeLineMark(QLineMark)\0"
    "addLineMark(QLineMarkHandle)\0"
    "toggleLineMark(QLineMarkHandle)\0"
    "removeLineMark(QLineMarkHandle)\0"
    "flush(QString)\0e\0cursorMoved(QEditor*)\0"
    "h\0lineDeleted(QDocumentLineHandle*)\0"
    "f,h,mark,on\0"
    "markChanged(QString,QDocumentLineHandle*,int,bool)\0"
};

void QLineMarksInfoCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLineMarksInfoCenter *_t = static_cast<QLineMarksInfoCenter *>(_o);
        switch (_id) {
        case 0: _t->lineMarkAdded((*reinterpret_cast< const QLineMark(*)>(_a[1]))); break;
        case 1: _t->lineMarkRemoved((*reinterpret_cast< const QLineMark(*)>(_a[1]))); break;
        case 2: _t->loadMarks((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->saveMarks((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->loadMarkTypes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: _t->removeMarks((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->addLineMark((*reinterpret_cast< const QLineMark(*)>(_a[1]))); break;
        case 8: _t->toggleLineMark((*reinterpret_cast< const QLineMark(*)>(_a[1]))); break;
        case 9: _t->removeLineMark((*reinterpret_cast< const QLineMark(*)>(_a[1]))); break;
        case 10: _t->addLineMark((*reinterpret_cast< const QLineMarkHandle(*)>(_a[1]))); break;
        case 11: _t->toggleLineMark((*reinterpret_cast< const QLineMarkHandle(*)>(_a[1]))); break;
        case 12: _t->removeLineMark((*reinterpret_cast< const QLineMarkHandle(*)>(_a[1]))); break;
        case 13: _t->flush((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->cursorMoved((*reinterpret_cast< QEditor*(*)>(_a[1]))); break;
        case 15: _t->lineDeleted((*reinterpret_cast< QDocumentLineHandle*(*)>(_a[1]))); break;
        case 16: _t->markChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDocumentLineHandle*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLineMarksInfoCenter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLineMarksInfoCenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLineMarksInfoCenter,
      qt_meta_data_QLineMarksInfoCenter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLineMarksInfoCenter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLineMarksInfoCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLineMarksInfoCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineMarksInfoCenter))
        return static_cast<void*>(const_cast< QLineMarksInfoCenter*>(this));
    return QObject::qt_metacast(_clname);
}

int QLineMarksInfoCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QLineMarksInfoCenter::lineMarkAdded(const QLineMark & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLineMarksInfoCenter::lineMarkRemoved(const QLineMark & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
