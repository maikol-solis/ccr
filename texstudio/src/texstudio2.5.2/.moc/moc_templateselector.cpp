/****************************************************************************
** Meta object code from reading C++ file 'templateselector.h'
**
** Created: Sat Apr 6 13:28:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../templateselector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templateselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreviewLabel[] = {

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

static const char qt_meta_stringdata_PreviewLabel[] = {
    "PreviewLabel\0"
};

void PreviewLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PreviewLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreviewLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_PreviewLabel,
      qt_meta_data_PreviewLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreviewLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreviewLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreviewLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewLabel))
        return static_cast<void*>(const_cast< PreviewLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int PreviewLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_TemplateSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   18,   17,   17, 0x05,
      57,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   17,   17,   17, 0x08,
     141,  116,   17,   17, 0x08,
     191,  185,   17,   17, 0x08,
     230,  224,   17,   17, 0x08,
     274,   17,   17,   17, 0x08,
     289,   17,   17,   17, 0x08,
     308,   17,   17,   17, 0x08,
     325,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TemplateSelector[] = {
    "TemplateSelector\0\0th\0"
    "editTemplateRequest(TemplateHandle)\0"
    "editTemplateInfoRequest(TemplateHandle)\0"
    "addTemplateFiles()\0currentItem,previousItem\0"
    "showInfo(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "point\0templatesTreeContextMenu(QPoint)\0"
    "index\0on_templatesTree_doubleClicked(QModelIndex)\0"
    "editTemplate()\0editTemplateInfo()\0"
    "removeTemplate()\0openTemplateLocation()\0"
};

void TemplateSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TemplateSelector *_t = static_cast<TemplateSelector *>(_o);
        switch (_id) {
        case 0: _t->editTemplateRequest((*reinterpret_cast< TemplateHandle(*)>(_a[1]))); break;
        case 1: _t->editTemplateInfoRequest((*reinterpret_cast< TemplateHandle(*)>(_a[1]))); break;
        case 2: _t->addTemplateFiles(); break;
        case 3: _t->showInfo((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 4: _t->templatesTreeContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->on_templatesTree_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->editTemplate(); break;
        case 7: _t->editTemplateInfo(); break;
        case 8: _t->removeTemplate(); break;
        case 9: _t->openTemplateLocation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TemplateSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TemplateSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TemplateSelector,
      qt_meta_data_TemplateSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TemplateSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TemplateSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TemplateSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TemplateSelector))
        return static_cast<void*>(const_cast< TemplateSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int TemplateSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TemplateSelector::editTemplateRequest(TemplateHandle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TemplateSelector::editTemplateInfoRequest(TemplateHandle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
