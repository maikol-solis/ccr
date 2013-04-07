/****************************************************************************
** Meta object code from reading C++ file 'qdocumentsearch.h'
**
** Created: Sat Apr 6 13:28:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/document/qdocumentsearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdocumentsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDocumentSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x08,
      56,   16,   16,   16, 0x08,
      83,   78,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDocumentSearch[] = {
    "QDocumentSearch\0\0line,n\0"
    "documentContentChanged(int,int)\0"
    "visibleLinesChanged()\0line\0"
    "lineDeleted(QDocumentLineHandle*)\0"
};

void QDocumentSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDocumentSearch *_t = static_cast<QDocumentSearch *>(_o);
        switch (_id) {
        case 0: _t->documentContentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->visibleLinesChanged(); break;
        case 2: _t->lineDeleted((*reinterpret_cast< QDocumentLineHandle*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDocumentSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDocumentSearch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDocumentSearch,
      qt_meta_data_QDocumentSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDocumentSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDocumentSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDocumentSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDocumentSearch))
        return static_cast<void*>(const_cast< QDocumentSearch*>(this));
    return QObject::qt_metacast(_clname);
}

int QDocumentSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
