/****************************************************************************
** Meta object code from reading C++ file 'qformatconfig.h'
**
** Created: Sat Apr 6 13:28:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/widgets/qformatconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qformatconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFormatConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,
      37,   14,   14,   14, 0x0a,
      46,   14,   14,   14, 0x0a,
      58,   56,   14,   14, 0x0a,
      90,   78,   14,   14, 0x0a,
     131,  124,   14,   14, 0x0a,
     160,  124,   14,   14, 0x0a,
     207,  193,   14,   14, 0x0a,
     233,  229,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QFormatConfig[] = {
    "QFormatConfig\0\0retranslate()\0apply()\0"
    "cancel()\0restore()\0y\0setAutonomous(bool)\0"
    "name,scheme\0addScheme(QString,QFormatScheme*)\0"
    "scheme\0removeScheme(QFormatScheme*)\0"
    "setCurrentScheme(QFormatScheme*)\0"
    "basePointSize\0setBasePointSize(int)\0"
    "idx\0on_m_selector_currentIndexChanged(int)\0"
};

void QFormatConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFormatConfig *_t = static_cast<QFormatConfig *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->apply(); break;
        case 2: _t->cancel(); break;
        case 3: _t->restore(); break;
        case 4: _t->setAutonomous((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->addScheme((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QFormatScheme*(*)>(_a[2]))); break;
        case 6: _t->removeScheme((*reinterpret_cast< QFormatScheme*(*)>(_a[1]))); break;
        case 7: _t->setCurrentScheme((*reinterpret_cast< QFormatScheme*(*)>(_a[1]))); break;
        case 8: _t->setBasePointSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_m_selector_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFormatConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFormatConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QFormatConfig,
      qt_meta_data_QFormatConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFormatConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFormatConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFormatConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFormatConfig))
        return static_cast<void*>(const_cast< QFormatConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int QFormatConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
