/****************************************************************************
** Meta object code from reading C++ file 'PDFDocks.h'
**
** Created: Sat Apr 6 13:28:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PDFDocks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PDFDocks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PDFDock[] = {

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
       9,    8,    8,    8, 0x0a,
      26,    8,    8,    8, 0x0a,
      48,   43,    8,    8, 0x0a,
      73,   65,    8,    8, 0x08,
      99,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PDFDock[] = {
    "PDFDock\0\0documentLoaded()\0documentClosed()\0"
    "page\0pageChanged(int)\0visible\0"
    "myVisibilityChanged(bool)\0changeLanguage()\0"
};

void PDFDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFDock *_t = static_cast<PDFDock *>(_o);
        switch (_id) {
        case 0: _t->documentLoaded(); break;
        case 1: _t->documentClosed(); break;
        case 2: _t->pageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->myVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->changeLanguage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_PDFDock,
      qt_meta_data_PDFDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFDock))
        return static_cast<void*>(const_cast< PDFDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int PDFDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_PDFOutlineDock[] = {

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
      16,   15,   15,   15, 0x0a,
      33,   15,   15,   15, 0x09,
      50,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PDFOutlineDock[] = {
    "PDFOutlineDock\0\0documentClosed()\0"
    "changeLanguage()\0followTocSelection()\0"
};

void PDFOutlineDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFOutlineDock *_t = static_cast<PDFOutlineDock *>(_o);
        switch (_id) {
        case 0: _t->documentClosed(); break;
        case 1: _t->changeLanguage(); break;
        case 2: _t->followTocSelection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFOutlineDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFOutlineDock::staticMetaObject = {
    { &PDFDock::staticMetaObject, qt_meta_stringdata_PDFOutlineDock,
      qt_meta_data_PDFOutlineDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFOutlineDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFOutlineDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFOutlineDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFOutlineDock))
        return static_cast<void*>(const_cast< PDFOutlineDock*>(this));
    return PDFDock::qt_metacast(_clname);
}

int PDFOutlineDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PDFDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PDFDockTreeWidget[] = {

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

static const char qt_meta_stringdata_PDFDockTreeWidget[] = {
    "PDFDockTreeWidget\0"
};

void PDFDockTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFDockTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFDockTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PDFDockTreeWidget,
      qt_meta_data_PDFDockTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFDockTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFDockTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFDockTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFDockTreeWidget))
        return static_cast<void*>(const_cast< PDFDockTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PDFDockTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PDFInfoDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PDFInfoDock[] = {
    "PDFInfoDock\0\0documentClosed()\0"
};

void PDFInfoDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFInfoDock *_t = static_cast<PDFInfoDock *>(_o);
        switch (_id) {
        case 0: _t->documentClosed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFInfoDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFInfoDock::staticMetaObject = {
    { &PDFDock::staticMetaObject, qt_meta_stringdata_PDFInfoDock,
      qt_meta_data_PDFInfoDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFInfoDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFInfoDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFInfoDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFInfoDock))
        return static_cast<void*>(const_cast< PDFInfoDock*>(this));
    return PDFDock::qt_metacast(_clname);
}

int PDFInfoDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PDFDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PDFDockListView[] = {

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

static const char qt_meta_stringdata_PDFDockListView[] = {
    "PDFDockListView\0"
};

void PDFDockListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFDockListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFDockListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_PDFDockListView,
      qt_meta_data_PDFDockListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFDockListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFDockListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFDockListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFDockListView))
        return static_cast<void*>(const_cast< PDFDockListView*>(this));
    return QListView::qt_metacast(_clname);
}

int PDFDockListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PDFDockListWidget[] = {

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

static const char qt_meta_stringdata_PDFDockListWidget[] = {
    "PDFDockListWidget\0"
};

void PDFDockListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFDockListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFDockListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PDFDockListWidget,
      qt_meta_data_PDFDockListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFDockListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFDockListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFDockListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFDockListWidget))
        return static_cast<void*>(const_cast< PDFDockListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PDFDockListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PDFOverviewModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PDFOverviewModel[] = {
    "PDFOverviewModel\0\0pm,page\0"
    "updateImage(QPixmap,int)\0"
};

void PDFOverviewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFOverviewModel *_t = static_cast<PDFOverviewModel *>(_o);
        switch (_id) {
        case 0: _t->updateImage((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFOverviewModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFOverviewModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_PDFOverviewModel,
      qt_meta_data_PDFOverviewModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFOverviewModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFOverviewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFOverviewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFOverviewModel))
        return static_cast<void*>(const_cast< PDFOverviewModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int PDFOverviewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PDFFontsDock[] = {

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
      14,   13,   13,   13, 0x0a,
      31,   13,   13,   13, 0x0a,
      48,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PDFFontsDock[] = {
    "PDFFontsDock\0\0documentClosed()\0"
    "documentLoaded()\0changeLanguage()\0"
};

void PDFFontsDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFFontsDock *_t = static_cast<PDFFontsDock *>(_o);
        switch (_id) {
        case 0: _t->documentClosed(); break;
        case 1: _t->documentLoaded(); break;
        case 2: _t->changeLanguage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFFontsDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFFontsDock::staticMetaObject = {
    { &PDFDock::staticMetaObject, qt_meta_stringdata_PDFFontsDock,
      qt_meta_data_PDFFontsDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFFontsDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFFontsDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFFontsDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFFontsDock))
        return static_cast<void*>(const_cast< PDFFontsDock*>(this));
    return PDFDock::qt_metacast(_clname);
}

int PDFFontsDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PDFDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PDFBaseSearchDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   58,   18,   18, 0x08,
      93,   18,   18,   18, 0x08,
     112,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PDFBaseSearchDock[] = {
    "PDFBaseSearchDock\0\0backward,incremental\0"
    "search(bool,bool)\0text\0"
    "on_leFind_textEdited(QString)\0"
    "on_bNext_clicked()\0on_bPrevious_clicked()\0"
};

void PDFBaseSearchDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFBaseSearchDock *_t = static_cast<PDFBaseSearchDock *>(_o);
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->on_leFind_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_bNext_clicked(); break;
        case 3: _t->on_bPrevious_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFBaseSearchDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFBaseSearchDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_PDFBaseSearchDock,
      qt_meta_data_PDFBaseSearchDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFBaseSearchDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFBaseSearchDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFBaseSearchDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFBaseSearchDock))
        return static_cast<void*>(const_cast< PDFBaseSearchDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int PDFBaseSearchDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PDFBaseSearchDock::search(bool _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PDFSearchDock[] = {

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

static const char qt_meta_stringdata_PDFSearchDock[] = {
    "PDFSearchDock\0"
};

void PDFSearchDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFSearchDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFSearchDock::staticMetaObject = {
    { &PDFBaseSearchDock::staticMetaObject, qt_meta_stringdata_PDFSearchDock,
      qt_meta_data_PDFSearchDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFSearchDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFSearchDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFSearchDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFSearchDock))
        return static_cast<void*>(const_cast< PDFSearchDock*>(this));
    return PDFBaseSearchDock::qt_metacast(_clname);
}

int PDFSearchDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PDFBaseSearchDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PDFScrollArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   25,   14,   14, 0x0a,
      60,   50,   14,   14, 0x0a,
      84,   79,   14,   14, 0x2a,
     123,   98,   14,   14, 0x0a,
     190,  173,   14,   14, 0x2a,
     245,  236,   14,   14, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PDFScrollArea[] = {
    "PDFScrollArea\0\0resized()\0cont\0"
    "setContinuous(bool)\0page,sync\0"
    "goToPage(int,bool)\0page\0goToPage(int)\0"
    "page,pos,xmargin,ymargin\0"
    "ensureVisiblePageAbsolutePos(int,QPointF,int,int)\0"
    "page,pos,xmargin\0"
    "ensureVisiblePageAbsolutePos(int,QPointF,int)\0"
    "page,pos\0ensureVisiblePageAbsolutePos(int,QPointF)\0"
};

void PDFScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFScrollArea *_t = static_cast<PDFScrollArea *>(_o);
        switch (_id) {
        case 0: _t->resized(); break;
        case 1: _t->setContinuous((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->goToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->goToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ensureVisiblePageAbsolutePos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->ensureVisiblePageAbsolutePos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->ensureVisiblePageAbsolutePos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFScrollArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFScrollArea::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_PDFScrollArea,
      qt_meta_data_PDFScrollArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFScrollArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFScrollArea))
        return static_cast<void*>(const_cast< PDFScrollArea*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int PDFScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PDFScrollArea::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PDFOverviewDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      39,   34,   16,   16, 0x0a,
      56,   16,   16,   16, 0x09,
      73,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PDFOverviewDock[] = {
    "PDFOverviewDock\0\0documentClosed()\0"
    "page\0pageChanged(int)\0changeLanguage()\0"
    "followTocSelection()\0"
};

void PDFOverviewDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFOverviewDock *_t = static_cast<PDFOverviewDock *>(_o);
        switch (_id) {
        case 0: _t->documentClosed(); break;
        case 1: _t->pageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeLanguage(); break;
        case 3: _t->followTocSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFOverviewDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFOverviewDock::staticMetaObject = {
    { &PDFDock::staticMetaObject, qt_meta_stringdata_PDFOverviewDock,
      qt_meta_data_PDFOverviewDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFOverviewDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFOverviewDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFOverviewDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFOverviewDock))
        return static_cast<void*>(const_cast< PDFOverviewDock*>(this));
    return PDFDock::qt_metacast(_clname);
}

int PDFOverviewDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PDFDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PDFClockDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      24,   13,   13,   13, 0x09,
      34,   13,   13,   13, 0x09,
      57,   48,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PDFClockDock[] = {
    "PDFClockDock\0\0onTimer()\0restart()\0"
    "setInterval()\0interval\0setInterval(int)\0"
};

void PDFClockDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFClockDock *_t = static_cast<PDFClockDock *>(_o);
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->restart(); break;
        case 2: _t->setInterval(); break;
        case 3: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFClockDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFClockDock::staticMetaObject = {
    { &PDFDock::staticMetaObject, qt_meta_stringdata_PDFClockDock,
      qt_meta_data_PDFClockDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFClockDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFClockDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFClockDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFClockDock))
        return static_cast<void*>(const_cast< PDFClockDock*>(this));
    return PDFDock::qt_metacast(_clname);
}

int PDFClockDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PDFDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
