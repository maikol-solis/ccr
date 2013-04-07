/****************************************************************************
** Meta object code from reading C++ file 'qlanguagefactory.h'
**
** Created: Sat Apr 6 13:28:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/qlanguagefactory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlanguagefactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLanguageFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x0a,
      44,   42,   17,   17, 0x0a,
      90,   88,   17,   17, 0x0a,
     138,  134,   17,   17, 0x0a,
     175,  168,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QLanguageFactory[] = {
    "QLanguageFactory\0\0d\0addLanguage(LangData)\0"
    "l\0addLanguageDefinition(QLanguageDefinition*)\0"
    "e\0addCompletionEngine(QCodeCompletionEngine*)\0"
    "e,f\0setLanguage(QEditor*,QString)\0"
    "e,lang\0setLanguageFromName(QEditor*,QString)\0"
};

void QLanguageFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLanguageFactory *_t = static_cast<QLanguageFactory *>(_o);
        switch (_id) {
        case 0: _t->addLanguage((*reinterpret_cast< const LangData(*)>(_a[1]))); break;
        case 1: _t->addLanguageDefinition((*reinterpret_cast< QLanguageDefinition*(*)>(_a[1]))); break;
        case 2: _t->addCompletionEngine((*reinterpret_cast< QCodeCompletionEngine*(*)>(_a[1]))); break;
        case 3: _t->setLanguage((*reinterpret_cast< QEditor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setLanguageFromName((*reinterpret_cast< QEditor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLanguageFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLanguageFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLanguageFactory,
      qt_meta_data_QLanguageFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLanguageFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLanguageFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLanguageFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLanguageFactory))
        return static_cast<void*>(const_cast< QLanguageFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int QLanguageFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
