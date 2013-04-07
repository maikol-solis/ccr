/****************************************************************************
** Meta object code from reading C++ file 'grammarcheck.h'
**
** Created: Sat Apr 6 13:28:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../grammarcheck.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grammarcheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GrammarCheck[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,   94,   13,   13, 0x0a,
     174,  143,   13,   13, 0x0a,
     221,   13,   13,   13, 0x08,
     256,  231,   13,   13, 0x08,
     316,  302,   13,   13, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_GrammarCheck[] = {
    "GrammarCheck\0\0doc,line,lineNr,errors\0"
    "checked(const void*,const void*,int,QList<GrammarError>)\0"
    "lp,config\0init(LatexParser,GrammarCheckerConfig)\0"
    "language,doc,lines,firstLineNr\0"
    "check(QString,const void*,QList<LineInfo>,int)\0"
    "process()\0ticket,errors,directCall\0"
    "backendChecked(uint,QList<GrammarError>,bool)\0"
    "ticket,errors\0backendChecked(uint,QList<GrammarError>)\0"
};

void GrammarCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GrammarCheck *_t = static_cast<GrammarCheck *>(_o);
        switch (_id) {
        case 0: _t->checked((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QList<GrammarError>(*)>(_a[4]))); break;
        case 1: _t->init((*reinterpret_cast< const LatexParser(*)>(_a[1])),(*reinterpret_cast< const GrammarCheckerConfig(*)>(_a[2]))); break;
        case 2: _t->check((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])),(*reinterpret_cast< const QList<LineInfo>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->process(); break;
        case 4: _t->backendChecked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QList<GrammarError>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->backendChecked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QList<GrammarError>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GrammarCheck::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GrammarCheck::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GrammarCheck,
      qt_meta_data_GrammarCheck, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GrammarCheck::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GrammarCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GrammarCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrammarCheck))
        return static_cast<void*>(const_cast< GrammarCheck*>(this));
    return QObject::qt_metacast(_clname);
}

int GrammarCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GrammarCheck::checked(const void * _t1, const void * _t2, int _t3, QList<GrammarError> _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_GrammarCheckBackend[] = {

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
      35,   21,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GrammarCheckBackend[] = {
    "GrammarCheckBackend\0\0ticket,errors\0"
    "checked(uint,QList<GrammarError>)\0"
};

void GrammarCheckBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GrammarCheckBackend *_t = static_cast<GrammarCheckBackend *>(_o);
        switch (_id) {
        case 0: _t->checked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QList<GrammarError>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GrammarCheckBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GrammarCheckBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GrammarCheckBackend,
      qt_meta_data_GrammarCheckBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GrammarCheckBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GrammarCheckBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GrammarCheckBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrammarCheckBackend))
        return static_cast<void*>(const_cast< GrammarCheckBackend*>(this));
    return QObject::qt_metacast(_clname);
}

int GrammarCheckBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void GrammarCheckBackend::checked(uint _t1, const QList<GrammarError> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_GrammarCheckLanguageToolSOAP[] = {

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
      36,   30,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GrammarCheckLanguageToolSOAP[] = {
    "GrammarCheckLanguageToolSOAP\0\0reply\0"
    "finished(QNetworkReply*)\0"
};

void GrammarCheckLanguageToolSOAP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GrammarCheckLanguageToolSOAP *_t = static_cast<GrammarCheckLanguageToolSOAP *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GrammarCheckLanguageToolSOAP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GrammarCheckLanguageToolSOAP::staticMetaObject = {
    { &GrammarCheckBackend::staticMetaObject, qt_meta_stringdata_GrammarCheckLanguageToolSOAP,
      qt_meta_data_GrammarCheckLanguageToolSOAP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GrammarCheckLanguageToolSOAP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GrammarCheckLanguageToolSOAP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GrammarCheckLanguageToolSOAP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrammarCheckLanguageToolSOAP))
        return static_cast<void*>(const_cast< GrammarCheckLanguageToolSOAP*>(this));
    return GrammarCheckBackend::qt_metacast(_clname);
}

int GrammarCheckLanguageToolSOAP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GrammarCheckBackend::qt_metacall(_c, _id, _a);
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
