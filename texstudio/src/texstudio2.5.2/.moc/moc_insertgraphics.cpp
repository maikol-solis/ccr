/****************************************************************************
** Meta object code from reading C++ file 'insertgraphics.h'
**
** Created: Sat Apr 6 13:28:39 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../insertgraphics.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insertgraphics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlacementValidator[] = {

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

static const char qt_meta_stringdata_PlacementValidator[] = {
    "PlacementValidator\0"
};

void PlacementValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlacementValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlacementValidator::staticMetaObject = {
    { &QRegExpValidator::staticMetaObject, qt_meta_stringdata_PlacementValidator,
      qt_meta_data_PlacementValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlacementValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlacementValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlacementValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlacementValidator))
        return static_cast<void*>(const_cast< PlacementValidator*>(this));
    return QRegExpValidator::qt_metacast(_clname);
}

int PlacementValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRegExpValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_InsertGraphics[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   41,   15,   15, 0x0a,
      66,   41,   15,   15, 0x0a,
      99,   94,   15,   15, 0x0a,
     129,  124,   15,   15, 0x0a,
     146,   15,   15,   15, 0x08,
     159,   15,   15,   15, 0x08,
     188,  182,   15,   15, 0x08,
     216,  210,   15,   15, 0x08,
     247,  237,   15,   15, 0x08,
     279,   15,   15,   15, 0x28,
     307,   15,   15,   15, 0x08,
     325,   15,   15,   15, 0x08,

 // methods: signature, parameters, type, tag, flags
     347,   15,  339,   15, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_InsertGraphics[] = {
    "InsertGraphics\0\0fileNameChanged(QString)\0"
    "fi\0setTexFile(QFileInfo)\0"
    "setMasterTexFile(QFileInfo)\0file\0"
    "setGraphicsFile(QString)\0code\0"
    "setCode(QString)\0chooseFile()\0"
    "includeOptionChanged()\0label\0"
    "labelChanged(QString)\0fname\0"
    "updateLabel(QString)\0forceHide\0"
    "togglePlacementCheckboxes(bool)\0"
    "togglePlacementCheckboxes()\0"
    "updatePlacement()\0saveDefault()\0QString\0"
    "graphicsFile()\0"
};

void InsertGraphics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InsertGraphics *_t = static_cast<InsertGraphics *>(_o);
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setTexFile((*reinterpret_cast< const QFileInfo(*)>(_a[1]))); break;
        case 2: _t->setMasterTexFile((*reinterpret_cast< const QFileInfo(*)>(_a[1]))); break;
        case 3: _t->setGraphicsFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->chooseFile(); break;
        case 6: _t->includeOptionChanged(); break;
        case 7: _t->labelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->togglePlacementCheckboxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->togglePlacementCheckboxes(); break;
        case 11: _t->updatePlacement(); break;
        case 12: _t->saveDefault(); break;
        case 13: { QString _r = _t->graphicsFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InsertGraphics::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InsertGraphics::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InsertGraphics,
      qt_meta_data_InsertGraphics, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsertGraphics::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsertGraphics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsertGraphics::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsertGraphics))
        return static_cast<void*>(const_cast< InsertGraphics*>(this));
    return QDialog::qt_metacast(_clname);
}

int InsertGraphics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void InsertGraphics::fileNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
