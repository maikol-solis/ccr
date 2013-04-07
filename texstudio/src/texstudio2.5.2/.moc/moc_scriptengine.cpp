/****************************************************************************
** Meta object code from reading C++ file 'scriptengine.h'
**
** Created: Sat Apr 6 13:28:39 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scriptengine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_scriptengine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_scriptengine[] = {
    "scriptengine\0"
};

void scriptengine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData scriptengine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject scriptengine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_scriptengine,
      qt_meta_data_scriptengine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &scriptengine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *scriptengine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *scriptengine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_scriptengine))
        return static_cast<void*>(const_cast< scriptengine*>(this));
    return QObject::qt_metacast(_clname);
}

int scriptengine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UniversalInputDialogScript[] = {

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
      60,   41,   28,   27, 0x0a,
     120,  104,   28,   27, 0x2a,
     151,   27,   28,   27, 0x0a,
     158,   27,   28,   27, 0x0a,
     170,  167,   28,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UniversalInputDialogScript[] = {
    "UniversalInputDialogScript\0\0QScriptValue\0"
    "def,description,id\0"
    "add(QScriptValue,QScriptValue,QScriptValue)\0"
    "def,description\0add(QScriptValue,QScriptValue)\0"
    "exec()\0getAll()\0id\0get(QScriptValue)\0"
};

void UniversalInputDialogScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UniversalInputDialogScript *_t = static_cast<UniversalInputDialogScript *>(_o);
        switch (_id) {
        case 0: { QScriptValue _r = _t->add((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 1: { QScriptValue _r = _t->add((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 2: { QScriptValue _r = _t->exec();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 3: { QScriptValue _r = _t->getAll();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 4: { QScriptValue _r = _t->get((*reinterpret_cast< const QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UniversalInputDialogScript::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UniversalInputDialogScript::staticMetaObject = {
    { &UniversalInputDialog::staticMetaObject, qt_meta_stringdata_UniversalInputDialogScript,
      qt_meta_data_UniversalInputDialogScript, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UniversalInputDialogScript::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UniversalInputDialogScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UniversalInputDialogScript::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UniversalInputDialogScript))
        return static_cast<void*>(const_cast< UniversalInputDialogScript*>(this));
    return UniversalInputDialog::qt_metacast(_clname);
}

int UniversalInputDialogScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UniversalInputDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_TimeoutWrapper[] = {

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
      16,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TimeoutWrapper[] = {
    "TimeoutWrapper\0\0run()\0"
};

void TimeoutWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimeoutWrapper *_t = static_cast<TimeoutWrapper *>(_o);
        switch (_id) {
        case 0: _t->run(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TimeoutWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeoutWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TimeoutWrapper,
      qt_meta_data_TimeoutWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeoutWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeoutWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeoutWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeoutWrapper))
        return static_cast<void*>(const_cast< TimeoutWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int TimeoutWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
