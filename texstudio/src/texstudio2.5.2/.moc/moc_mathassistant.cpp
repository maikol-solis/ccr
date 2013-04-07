/****************************************************************************
** Meta object code from reading C++ file 'mathassistant.h'
**
** Created: Sat Apr 6 13:28:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mathassistant.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mathassistant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MathAssistant[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   48,   14,   14, 0x08,
     109,   89,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MathAssistant[] = {
    "MathAssistant\0\0formula\0formulaReceived(QString)\0"
    "err\0processError(QProcess::ProcessError)\0"
    "exitCode,exitStatus\0"
    "processFinished(int,QProcess::ExitStatus)\0"
};

void MathAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MathAssistant *_t = static_cast<MathAssistant *>(_o);
        switch (_id) {
        case 0: _t->formulaReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 2: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MathAssistant::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MathAssistant::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MathAssistant,
      qt_meta_data_MathAssistant, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MathAssistant::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MathAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MathAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MathAssistant))
        return static_cast<void*>(const_cast< MathAssistant*>(this));
    return QObject::qt_metacast(_clname);
}

int MathAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MathAssistant::formulaReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
