/****************************************************************************
** Meta object code from reading C++ file 'pdfrendermanager.h'
**
** Created: Sat Apr 6 13:28:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pdfrendermanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdfrendermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PDFRenderManager[] = {

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
      36,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PDFRenderManager[] = {
    "PDFRenderManager\0\0img,pageNr,ticket\0"
    "addToCache(QImage,int,int)\0"
};

void PDFRenderManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFRenderManager *_t = static_cast<PDFRenderManager *>(_o);
        switch (_id) {
        case 0: _t->addToCache((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFRenderManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFRenderManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PDFRenderManager,
      qt_meta_data_PDFRenderManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFRenderManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFRenderManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFRenderManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFRenderManager))
        return static_cast<void*>(const_cast< PDFRenderManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PDFRenderManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
