/****************************************************************************
** Meta object code from reading C++ file 'symbolgridwidget.h'
**
** Created: Sat Apr 6 13:28:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../symbolgridwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'symbolgridwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SymbolGridWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,
      64,   50,   17,   17, 0x0a,
     112,  102,   17,   17, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_SymbolGridWidget[] = {
    "SymbolGridWidget\0\0ulist\0"
    "SetUserPage(usercodelist)\0fileNames,Map\0"
    "loadSymbols(QStringList,QVariantMap*)\0"
    "fileNames\0loadSymbols(QStringList)\0"
};

void SymbolGridWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SymbolGridWidget *_t = static_cast<SymbolGridWidget *>(_o);
        switch (_id) {
        case 0: _t->SetUserPage((*reinterpret_cast< usercodelist(*)>(_a[1]))); break;
        case 1: _t->loadSymbols((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< QVariantMap*(*)>(_a[2]))); break;
        case 2: _t->loadSymbols((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SymbolGridWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SymbolGridWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_SymbolGridWidget,
      qt_meta_data_SymbolGridWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SymbolGridWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SymbolGridWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SymbolGridWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolGridWidget))
        return static_cast<void*>(const_cast< SymbolGridWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int SymbolGridWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
