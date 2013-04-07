/****************************************************************************
** Meta object code from reading C++ file 'quickdocumentdialog.h'
**
** Created: Sat Apr 6 13:28:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../quickdocumentdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickdocumentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuickDocumentDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      28,   20,   20,   20, 0x0a,
      37,   20,   20,   20, 0x0a,
      60,   20,   20,   20, 0x0a,
      84,   20,   20,   20, 0x08,
      99,   20,   20,   20, 0x08,
     114,   20,   20,   20, 0x08,
     132,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuickDocumentDialog[] = {
    "QuickDocumentDialog\0\0Init()\0accept()\0"
    "geometryUnitsChanged()\0geometryValuesChanged()\0"
    "addUserClass()\0addUserPaper()\0"
    "addUserEncoding()\0addUserOptions()\0"
};

void QuickDocumentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuickDocumentDialog *_t = static_cast<QuickDocumentDialog *>(_o);
        switch (_id) {
        case 0: _t->Init(); break;
        case 1: _t->accept(); break;
        case 2: _t->geometryUnitsChanged(); break;
        case 3: _t->geometryValuesChanged(); break;
        case 4: _t->addUserClass(); break;
        case 5: _t->addUserPaper(); break;
        case 6: _t->addUserEncoding(); break;
        case 7: _t->addUserOptions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QuickDocumentDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuickDocumentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuickDocumentDialog,
      qt_meta_data_QuickDocumentDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuickDocumentDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuickDocumentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuickDocumentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuickDocumentDialog))
        return static_cast<void*>(const_cast< QuickDocumentDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuickDocumentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
