/****************************************************************************
** Meta object code from reading C++ file 'scriptobject.h'
**
** Created: Sat Apr 6 13:28:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scriptobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SubScriptObject[] = {

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
      28,   16,   17,   16, 0x0a,
      54,   49,   44,   16, 0x0a,
      84,   73,   16,   16, 0x0a,
     121,   49,  112,   16, 0x0a,
     140,   49,   44,   16, 0x0a,
     163,   73,   16,   16, 0x0a,
     195,   49,  112,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SubScriptObject[] = {
    "SubScriptObject\0\0QByteArray\0getScriptHash()\0"
    "bool\0name\0hasGlobal(QString)\0name,value\0"
    "setGlobal(QString,QVariant)\0QVariant\0"
    "getGlobal(QString)\0hasPersistent(QString)\0"
    "setPersistent(QString,QVariant)\0"
    "getPersistent(QString)\0"
};

void SubScriptObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubScriptObject *_t = static_cast<SubScriptObject *>(_o);
        switch (_id) {
        case 0: { QByteArray _r = _t->getScriptHash();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->hasGlobal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setGlobal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: { QVariant _r = _t->getGlobal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->hasPersistent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setPersistent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: { QVariant _r = _t->getPersistent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SubScriptObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SubScriptObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SubScriptObject,
      qt_meta_data_SubScriptObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SubScriptObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SubScriptObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SubScriptObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SubScriptObject))
        return static_cast<void*>(const_cast< SubScriptObject*>(this));
    return QObject::qt_metacast(_clname);
}

int SubScriptObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_ScriptObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       2,  164, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x0a,
      37,   14,   13,   13, 0x0a,
      58,   14,   13,   13, 0x0a,
      76,   14,   13,   13, 0x0a,
      98,   14,   93,   13, 0x0a,
     115,   14,   93,   13, 0x0a,
     139,   14,   13,   13, 0x0a,
     154,   13,   13,   13, 0x0a,
     169,   13,   13,   13, 0x0a,
     185,   13,   13,   13, 0x0a,
     200,   13,   13,   13, 0x0a,
     214,   13,   13,   13, 0x0a,
     227,   13,   93,   13, 0x0a,
     247,   13,   93,   13, 0x0a,
     271,  268,   93,   13, 0x0a,
     313,  301,  291,   13, 0x0a,
     346,  329,   13,   13, 0x0a,
     391,  382,  373,   13, 0x0a,
     414,  409,   93,   13, 0x0a,
     444,  433,   13,   13, 0x0a,
     472,  409,  373,   13, 0x0a,
     491,  409,   93,   13, 0x0a,
     514,  433,   13,   13, 0x0a,
     546,  409,  373,   13, 0x0a,
     569,  409,   13,   13, 0x0a,
     605,   13,   13,   13, 0x2a,
     655,  643,  634,   13, 0x0a,
     687,  682,  634,   13, 0x2a,
     705,  643,  634,   13, 0x0a,
     742,  682,  634,   13, 0x2a,

 // properties: name, type, flags
     787,  770, 0x00084009,
     804,  794, 0x00084009,

       0        // eod
};

static const char qt_meta_stringdata_ScriptObject[] = {
    "ScriptObject\0\0message\0alert(QString)\0"
    "information(QString)\0critical(QString)\0"
    "warning(QString)\0bool\0confirm(QString)\0"
    "confirmWarning(QString)\0debug(QString)\0"
    "crash_assert()\0crash_sigsegv()\0"
    "crash_sigfpe()\0crash_stack()\0crash_loop()\0"
    "hasReadPrivileges()\0hasWritePrivileges()\0"
    "fn\0fileExists(QString)\0ProcessX*\0"
    "commandline\0system(QString)\0"
    "filename,content\0writeFile(QString,QString)\0"
    "QVariant\0filename\0readFile(QString)\0"
    "name\0hasGlobal(QString)\0name,value\0"
    "setGlobal(QString,QVariant)\0"
    "getGlobal(QString)\0hasPersistent(QString)\0"
    "setPersistent(QString,QVariant)\0"
    "getPersistent(QString)\0"
    "registerAsBackgroundScript(QString)\0"
    "registerAsBackgroundScript()\0QWidget*\0"
    "path,parent\0createUI(QString,QWidget*)\0"
    "path\0createUI(QString)\0"
    "createUIFromString(QString,QWidget*)\0"
    "createUIFromString(QString)\0"
    "SubScriptObject*\0script\0Texmaker*\0app\0"
};

void ScriptObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScriptObject *_t = static_cast<ScriptObject *>(_o);
        switch (_id) {
        case 0: _t->alert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->information((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->critical((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->confirm((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->confirmWarning((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->crash_assert(); break;
        case 8: _t->crash_sigsegv(); break;
        case 9: _t->crash_sigfpe(); break;
        case 10: _t->crash_stack(); break;
        case 11: _t->crash_loop(); break;
        case 12: { bool _r = _t->hasReadPrivileges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasWritePrivileges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->fileExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { ProcessX* _r = _t->system((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ProcessX**>(_a[0]) = _r; }  break;
        case 16: _t->writeFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: { QVariant _r = _t->readFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->hasGlobal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->setGlobal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 20: { QVariant _r = _t->getGlobal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->hasPersistent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->setPersistent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 23: { QVariant _r = _t->getPersistent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 24: _t->registerAsBackgroundScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->registerAsBackgroundScript(); break;
        case 26: { QWidget* _r = _t->createUI((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 27: { QWidget* _r = _t->createUI((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 28: { QWidget* _r = _t->createUIFromString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 29: { QWidget* _r = _t->createUIFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScriptObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScriptObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScriptObject,
      qt_meta_data_ScriptObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScriptObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScriptObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScriptObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptObject))
        return static_cast<void*>(const_cast< ScriptObject*>(this));
    return QObject::qt_metacast(_clname);
}

int ScriptObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SubScriptObject**>(_v) = getScript(); break;
        case 1: *reinterpret_cast< Texmaker**>(_v) = getApp(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
