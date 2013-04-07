/****************************************************************************
** Meta object code from reading C++ file 'thesaurusdialog.h'
**
** Created: Sat Apr 6 13:28:35 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../thesaurusdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thesaurusdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThesaurusDialog[] = {

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
      21,   17,   16,   16, 0x08,
      39,   17,   16,   16, 0x08,
      56,   16,   16,   16, 0x08,
      72,   16,   16,   16, 0x08,
      90,   16,   16,   16, 0x08,
     110,   16,   16,   16, 0x08,
     131,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ThesaurusDialog[] = {
    "ThesaurusDialog\0\0row\0classChanged(int)\0"
    "wordChanged(int)\0lookupClicked()\0"
    "containsClicked()\0startsWithClicked()\0"
    "addUserWordClicked()\0removeUserWordClicked()\0"
};

void ThesaurusDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThesaurusDialog *_t = static_cast<ThesaurusDialog *>(_o);
        switch (_id) {
        case 0: _t->classChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->wordChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->lookupClicked(); break;
        case 3: _t->containsClicked(); break;
        case 4: _t->startsWithClicked(); break;
        case 5: _t->addUserWordClicked(); break;
        case 6: _t->removeUserWordClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThesaurusDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThesaurusDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ThesaurusDialog,
      qt_meta_data_ThesaurusDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThesaurusDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThesaurusDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThesaurusDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThesaurusDialog))
        return static_cast<void*>(const_cast< ThesaurusDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ThesaurusDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
