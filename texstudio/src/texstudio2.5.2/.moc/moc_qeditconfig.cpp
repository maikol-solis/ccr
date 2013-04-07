/****************************************************************************
** Meta object code from reading C++ file 'qeditconfig.h'
**
** Created: Sat Apr 6 13:28:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/widgets/qeditconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qeditconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QEditConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   12,   12,   12, 0x0a,
      66,   12,   12,   12, 0x0a,
      74,   12,   12,   12, 0x0a,
      83,   12,   12,   12, 0x0a,
      98,   93,   12,   12, 0x0a,
     133,  131,   12,   12, 0x0a,
     164,  159,   12,   12, 0x08,
     202,  197,   12,   12, 0x08,
     240,  238,   12,   12, 0x08,
     273,  131,   12,   12, 0x08,
     305,  131,   12,   12, 0x08,
     340,  131,   12,   12, 0x08,
     382,  131,   12,   12, 0x08,
     430,  425,   12,   12, 0x08,
     477,  473,   12,   12, 0x08,
     519,  131,   12,   12, 0x08,
     548,  131,   12,   12, 0x08,
     597,  131,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QEditConfig[] = {
    "QEditConfig\0\0key,value\0"
    "keyChanged(QString,QVariant)\0retranslate()\0"
    "apply()\0cancel()\0restore()\0keys\0"
    "loadKeys(QMap<QString,QVariant>)\0y\0"
    "setApplyImmediately(bool)\0size\0"
    "on_spnFontSize_valueChanged(int)\0font\0"
    "on_cbFont_currentFontChanged(QFont)\0"
    "n\0on_spnTabWidth_valueChanged(int)\0"
    "on_chkReplaceTabs_toggled(bool)\0"
    "on_chkShowTabsInText_toggled(bool)\0"
    "on_chkShowLeadingWhitespace_toggled(bool)\0"
    "on_chkShowTrailingWhitespace_toggled(bool)\0"
    "name\0on_cbEncoding_currentIndexChanged(QString)\0"
    "idx\0on_cbLineEndings_currentIndexChanged(int)\0"
    "on_chkDetectLE_toggled(bool)\0"
    "on_chkAutoRemoveTrailingWhitespace_toggled(bool)\0"
    "on_chkPreserveTrailingIndent_toggled(bool)\0"
};

void QEditConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QEditConfig *_t = static_cast<QEditConfig *>(_o);
        switch (_id) {
        case 0: _t->keyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->apply(); break;
        case 3: _t->cancel(); break;
        case 4: _t->restore(); break;
        case 5: _t->loadKeys((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 6: _t->setApplyImmediately((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_spnFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_cbFont_currentFontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 9: _t->on_spnTabWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_chkReplaceTabs_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_chkShowTabsInText_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_chkShowLeadingWhitespace_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_chkShowTrailingWhitespace_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_cbEncoding_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_cbLineEndings_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_chkDetectLE_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_chkAutoRemoveTrailingWhitespace_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_chkPreserveTrailingIndent_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QEditConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QEditConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEditConfig,
      qt_meta_data_QEditConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QEditConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QEditConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QEditConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QEditConfig))
        return static_cast<void*>(const_cast< QEditConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEditConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QEditConfig::keyChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
