/****************************************************************************
** Meta object code from reading C++ file 'toolwidgets.h'
**
** Created: Sat Apr 6 13:28:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../toolwidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreviewWidget[] = {

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
      28,   15,   14,   14, 0x0a,
      50,   14,   14,   14, 0x0a,
      68,   61,   14,   14, 0x0a,
      87,   14,   14,   14, 0x0a,
      97,   14,   14,   14, 0x0a,
     106,   14,   14,   14, 0x0a,
     124,  118,   14,   14, 0x0a,
     144,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PreviewWidget[] = {
    "PreviewWidget\0\0previewImage\0"
    "previewLatex(QPixmap)\0fitImage()\0"
    "factor\0scaleImage(double)\0zoomOut()\0"
    "zoomIn()\0resetZoom()\0point\0"
    "contextMenu(QPoint)\0centerImage()\0"
};

void PreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreviewWidget *_t = static_cast<PreviewWidget *>(_o);
        switch (_id) {
        case 0: _t->previewLatex((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->fitImage(); break;
        case 2: _t->scaleImage((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->zoomOut(); break;
        case 4: _t->zoomIn(); break;
        case 5: _t->resetZoom(); break;
        case 6: _t->contextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->centerImage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreviewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreviewWidget::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_PreviewWidget,
      qt_meta_data_PreviewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreviewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewWidget))
        return static_cast<void*>(const_cast< PreviewWidget*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int PreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_OutputViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   18,   17,   17, 0x05,
      78,   63,   17,   17, 0x05,
     105,  101,   17,   17, 0x05,
     136,  121,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     165,   17,   17,   17, 0x0a,
     184,  172,   17,   17, 0x0a,
     204,   17,   17,   17, 0x2a,
     220,  172,   17,   17, 0x0a,
     246,   17,   17,   17, 0x2a,
     268,  172,   17,   17, 0x0a,
     283,   17,   17,   17, 0x2a,
     321,  294,   17,   17, 0x0a,
     346,   63,   17,   17, 0x2a,
     366,  172,   17,   17, 0x0a,
     391,   17,   17,   17, 0x2a,
     412,   17,   17,   17, 0x0a,
     433,   17,   17,   17, 0x0a,
     447,   17,   17,   17, 0x0a,
     467,   63,   17,   17, 0x0a,
     492,  485,   17,   17, 0x0a,
     522,  515,   17,   17, 0x0a,
     555,  544,   17,   17, 0x0a,
     605,   17,   17,   17, 0x0a,
     627,  619,   17,   17, 0x0a,
     660,  654,   17,   17, 0x08,
     696,  654,   17,   17, 0x08,
     737,  729,   17,   17, 0x08,
     754,   17,   17,   17, 0x08,
     768,   17,   17,   17, 0x08,
     786,   17,   17,   17, 0x08,
     819,   17,   17,   17, 0x08,
     838,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OutputViewWidget[] = {
    "OutputViewWidget\0\0line,fileName\0"
    "locationActivated(int,QString)\0"
    "logEntryNumber\0logEntryActivated(int)\0"
    "tab\0tabChanged(int)\0doc,lineNumber\0"
    "jumpToSearch(QDocument*,int)\0copy()\0"
    "noTabChange\0resetMessages(bool)\0"
    "resetMessages()\0resetMessagesAndLog(bool)\0"
    "resetMessagesAndLog()\0resetLog(bool)\0"
    "resetLog()\0logEntryNumber,makeVisible\0"
    "selectLogEntry(int,bool)\0selectLogEntry(int)\0"
    "showLogOrErrorList(bool)\0showLogOrErrorList()\0"
    "showErrorListOrLog()\0showPreview()\0"
    "showSearchResults()\0gotoLogEntry(int)\0"
    "tabbed\0setTabbedLogView(bool)\0pixmap\0"
    "previewLatex(QPixmap)\0search,doc\0"
    "addSearch(QList<QDocumentLineHandle*>,QDocument*)\0"
    "clearSearch()\0message\0insertMessageLine(QString)\0"
    "index\0clickedOnLogModelIndex(QModelIndex)\0"
    "clickedSearchResult(QModelIndex)\0"
    "logLine\0gotoLogLine(int)\0copyMessage()\0"
    "copyAllMessages()\0copyAllMessagesWithLineNumbers()\0"
    "showMessageInLog()\0copySearchResult()\0"
};

void OutputViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OutputViewWidget *_t = static_cast<OutputViewWidget *>(_o);
        switch (_id) {
        case 0: _t->locationActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->logEntryActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->jumpToSearch((*reinterpret_cast< QDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->copy(); break;
        case 5: _t->resetMessages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->resetMessages(); break;
        case 7: _t->resetMessagesAndLog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->resetMessagesAndLog(); break;
        case 9: _t->resetLog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->resetLog(); break;
        case 11: _t->selectLogEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->selectLogEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->showLogOrErrorList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->showLogOrErrorList(); break;
        case 15: _t->showErrorListOrLog(); break;
        case 16: _t->showPreview(); break;
        case 17: _t->showSearchResults(); break;
        case 18: _t->gotoLogEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setTabbedLogView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->previewLatex((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 21: _t->addSearch((*reinterpret_cast< QList<QDocumentLineHandle*>(*)>(_a[1])),(*reinterpret_cast< QDocument*(*)>(_a[2]))); break;
        case 22: _t->clearSearch(); break;
        case 23: _t->insertMessageLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->clickedOnLogModelIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 25: _t->clickedSearchResult((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 26: _t->gotoLogLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->copyMessage(); break;
        case 28: _t->copyAllMessages(); break;
        case 29: _t->copyAllMessagesWithLineNumbers(); break;
        case 30: _t->showMessageInLog(); break;
        case 31: _t->copySearchResult(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OutputViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OutputViewWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_OutputViewWidget,
      qt_meta_data_OutputViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputViewWidget))
        return static_cast<void*>(const_cast< OutputViewWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int OutputViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void OutputViewWidget::locationActivated(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OutputViewWidget::logEntryActivated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OutputViewWidget::tabChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OutputViewWidget::jumpToSearch(QDocument * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_SearchTreeDelegate[] = {

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

static const char qt_meta_stringdata_SearchTreeDelegate[] = {
    "SearchTreeDelegate\0"
};

void SearchTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SearchTreeDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchTreeDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_SearchTreeDelegate,
      qt_meta_data_SearchTreeDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchTreeDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchTreeDelegate))
        return static_cast<void*>(const_cast< SearchTreeDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int SearchTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CustomWidgetList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   84,   17,   17, 0x0a,
     117,   17,   17,   17, 0x08,
     140,  138,   17,   17, 0x08,
     169,  166,   17,   17, 0x08,
     212,  198,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CustomWidgetList[] = {
    "CustomWidgetList\0\0widget,globalPosition\0"
    "widgetContextMenuRequested(QWidget*,QPoint)\0"
    "newLayoutStyle\0showWidgets(bool)\0"
    "showPageFromAction()\0i\0currentWidgetChanged(int)\0"
    "on\0toggleWidgetFromAction(bool)\0"
    "localPosition\0customContextMenuRequested(QPoint)\0"
};

void CustomWidgetList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CustomWidgetList *_t = static_cast<CustomWidgetList *>(_o);
        switch (_id) {
        case 0: _t->widgetContextMenuRequested((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 1: _t->showWidgets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showPageFromAction(); break;
        case 3: _t->currentWidgetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->toggleWidgetFromAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CustomWidgetList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomWidgetList::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_CustomWidgetList,
      qt_meta_data_CustomWidgetList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomWidgetList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomWidgetList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomWidgetList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomWidgetList))
        return static_cast<void*>(const_cast< CustomWidgetList*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int CustomWidgetList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CustomWidgetList::widgetContextMenuRequested(QWidget * _t1, const QPoint & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
