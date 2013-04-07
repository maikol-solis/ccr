/****************************************************************************
** Meta object code from reading C++ file 'cursorhistory.h'
**
** Created: Sat Apr 6 13:28:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cursorhistory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cursorhistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CursorHistory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   31,   15,   14, 0x0a,
      67,   14,   15,   14, 0x2a,
      74,   31,   15,   14, 0x0a,
      99,   14,   15,   14, 0x2a,
     113,  109,   14,   14, 0x08,
     150,  146,   14,   14, 0x08,
     179,  175,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CursorHistory[] = {
    "CursorHistory\0\0QDocumentCursor\0"
    "currentCursor\0back(QDocumentCursor)\0"
    "back()\0forward(QDocumentCursor)\0"
    "forward()\0doc\0aboutToDeleteDoc(LatexDocument*)\0"
    "obj\0documentClosed(QObject*)\0dlh\0"
    "lineDeleted(QDocumentLineHandle*)\0"
};

void CursorHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CursorHistory *_t = static_cast<CursorHistory *>(_o);
        switch (_id) {
        case 0: { QDocumentCursor _r = _t->back((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDocumentCursor*>(_a[0]) = _r; }  break;
        case 1: { QDocumentCursor _r = _t->back();
            if (_a[0]) *reinterpret_cast< QDocumentCursor*>(_a[0]) = _r; }  break;
        case 2: { QDocumentCursor _r = _t->forward((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDocumentCursor*>(_a[0]) = _r; }  break;
        case 3: { QDocumentCursor _r = _t->forward();
            if (_a[0]) *reinterpret_cast< QDocumentCursor*>(_a[0]) = _r; }  break;
        case 4: _t->aboutToDeleteDoc((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 5: _t->documentClosed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->lineDeleted((*reinterpret_cast< QDocumentLineHandle*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CursorHistory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CursorHistory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CursorHistory,
      qt_meta_data_CursorHistory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CursorHistory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CursorHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CursorHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CursorHistory))
        return static_cast<void*>(const_cast< CursorHistory*>(this));
    return QObject::qt_metacast(_clname);
}

int CursorHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
