/****************************************************************************
** Meta object code from reading C++ file 'spellerutility.h'
**
** Created: Sat Apr 6 13:28:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spellerutility.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spellerutility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpellerUtility[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      32,   15,   15,   15, 0x05,
      68,   51,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SpellerUtility[] = {
    "SpellerUtility\0\0aboutToDelete()\0"
    "dictionaryLoaded()\0newlyIgnoredWord\0"
    "ignoredWordAdded(QString)\0"
};

void SpellerUtility::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpellerUtility *_t = static_cast<SpellerUtility *>(_o);
        switch (_id) {
        case 0: _t->aboutToDelete(); break;
        case 1: _t->dictionaryLoaded(); break;
        case 2: _t->ignoredWordAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpellerUtility::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpellerUtility::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpellerUtility,
      qt_meta_data_SpellerUtility, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpellerUtility::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpellerUtility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpellerUtility::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpellerUtility))
        return static_cast<void*>(const_cast< SpellerUtility*>(this));
    return QObject::qt_metacast(_clname);
}

int SpellerUtility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SpellerUtility::aboutToDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SpellerUtility::dictionaryLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SpellerUtility::ignoredWordAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_SpellerManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      34,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SpellerManager[] = {
    "SpellerManager\0\0dictPathChanged()\0"
    "defaultSpellerChanged()\0"
};

void SpellerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpellerManager *_t = static_cast<SpellerManager *>(_o);
        switch (_id) {
        case 0: _t->dictPathChanged(); break;
        case 1: _t->defaultSpellerChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SpellerManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpellerManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpellerManager,
      qt_meta_data_SpellerManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpellerManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpellerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpellerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpellerManager))
        return static_cast<void*>(const_cast< SpellerManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SpellerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SpellerManager::dictPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SpellerManager::defaultSpellerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
