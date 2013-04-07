/****************************************************************************
** Meta object code from reading C++ file 'buildmanager_t.h'
**
** Created: Sat Apr 6 13:28:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tests/buildmanager_t.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buildmanager_t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BuildManagerTest[] = {

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
      18,   17,   17,   17, 0x08,
      50,   17,   17,   17, 0x08,
      77,   17,   17,   17, 0x08,
     102,   17,   17,   17, 0x08,
     135,  122,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BuildManagerTest[] = {
    "BuildManagerTest\0\0parseExtendedCommandLine_data()\0"
    "parseExtendedCommandLine()\0"
    "expandCommandLine_data()\0expandCommandLine()\0"
    "cmdId,result\0commandLineRequested(QString,QString*)\0"
};

void BuildManagerTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BuildManagerTest *_t = static_cast<BuildManagerTest *>(_o);
        switch (_id) {
        case 0: _t->parseExtendedCommandLine_data(); break;
        case 1: _t->parseExtendedCommandLine(); break;
        case 2: _t->expandCommandLine_data(); break;
        case 3: _t->expandCommandLine(); break;
        case 4: _t->commandLineRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BuildManagerTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BuildManagerTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BuildManagerTest,
      qt_meta_data_BuildManagerTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BuildManagerTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BuildManagerTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BuildManagerTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BuildManagerTest))
        return static_cast<void*>(const_cast< BuildManagerTest*>(this));
    return QObject::qt_metacast(_clname);
}

int BuildManagerTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
