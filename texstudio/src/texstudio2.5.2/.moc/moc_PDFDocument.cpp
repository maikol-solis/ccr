/****************************************************************************
** Meta object code from reading C++ file 'PDFDocument.h'
**
** Created: Sat Apr 6 13:28:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PDFDocument.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PDFDocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PDFMagnifier[] = {

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
      25,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PDFMagnifier[] = {
    "PDFMagnifier\0\0img,pageNr\0setImage(QPixmap,int)\0"
};

void PDFMagnifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFMagnifier *_t = static_cast<PDFMagnifier *>(_o);
        switch (_id) {
        case 0: _t->setImage((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFMagnifier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFMagnifier::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_PDFMagnifier,
      qt_meta_data_PDFMagnifier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFMagnifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFMagnifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFMagnifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFMagnifier))
        return static_cast<void*>(const_cast< PDFMagnifier*>(this));
    return QLabel::qt_metacast(_clname);
}

int PDFMagnifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PDFWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      35,   10,   10,   10, 0x05,
      54,   10,   10,   10, 0x05,
     101,   90,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,   10,   10,   10, 0x09,
     139,   10,   10,   10, 0x09,
     148,   10,   10,   10, 0x09,
     157,   10,   10,   10, 0x09,
     166,   10,   10,   10, 0x09,
     178,   10,   10,   10, 0x09,
     187,   10,   10,   10, 0x09,
     210,  202,   10,   10, 0x09,
     225,   10,   10,   10, 0x29,
     236,   10,   10,   10, 0x09,
     245,   10,   10,   10, 0x09,
     255,   10,   10,   10, 0x09,
     270,   10,   10,   10, 0x09,
     281,   10,   10,   10, 0x09,
     294,   10,   10,   10, 0x09,
     309,   10,   10,   10, 0x09,
     322,   10,   10,   10, 0x09,
     336,   10,   10,   10, 0x09,
     353,   10,   10,   10, 0x09,
     375,  370,   10,   10, 0x0a,
     399,   10,   10,   10, 0x0a,
     415,  202,   10,   10, 0x0a,
     431,   10,   10,   10, 0x2a,
     448,  443,   10,   10, 0x0a,
     472,  461,   10,   10, 0x0a,
     510,  501,   10,   10, 0x0a,
     538,  532,   10,   10, 0x0a,
     556,   10,   10,   10, 0x2a,
     580,  569,   10,   10, 0x0a,

 // methods: signature, parameters, type, tag, flags
     616,  606,  602,   10, 0x02,
     656,  641,   10,   10, 0x02,
     696,  681,   10,   10, 0x02,
     731,   10,  602,   10, 0x02,
     759,  750,   10,   10, 0x02,
     805,  784,   10,   10, 0x02,
     847,   10,  602,   10, 0x02,
     867,  862,   10,   10, 0x02,
     884,   10,   10,   10, 0x22,
     897,   10,  602,   10, 0x02,
     912,   10,  602,   10, 0x02,
     929,   10,  602,   10, 0x02,
     944,   10,  602,   10, 0x02,
     955,   10,  602,   10, 0x02,
     966,   10,  602,   10, 0x02,
     995,   10,  982,   10, 0x02,
    1012,   10,  602,   10, 0x02,
    1028,  532,   10,   10, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_PDFWidget[] = {
    "PDFWidget\0\0,\0changedPage(int,bool)\0"
    "changedZoom(qreal)\0"
    "changedScaleOption(autoScaleOption)\0"
    ",,activate\0syncClick(int,QPointF,bool)\0"
    "goFirst()\0goPrev()\0goNext()\0goLast()\0"
    "goForward()\0goBack()\0doPageDialog()\0"
    "checked\0fitWidth(bool)\0fitWidth()\0"
    "zoomIn()\0zoomOut()\0jumpToSource()\0"
    "upOrPrev()\0leftOrPrev()\0pageUpOrPrev()\0"
    "downOrNext()\0rightOrNext()\0pageDownOrNext()\0"
    "clearHighlight()\0step\0setSinglePageStep(bool)\0"
    "windowResized()\0fitWindow(bool)\0"
    "fitWindow()\0tool\0setTool(int)\0p,activate\0"
    "syncWindowClick(QPoint,bool)\0activate\0"
    "syncCurrentPage(bool)\0scale\0"
    "fixedScale(qreal)\0fixedScale()\0"
    "img,pageNr\0setImage(QPixmap,int)\0int\0"
    "pageIndex\0normalizedPageIndex(int)\0"
    "pageIndex,sync\0goToPageDirect(int,bool)\0"
    "pageIndex,path\0setHighlightPath(int,QPainterPath)\0"
    "getHighlightPage()\0destName\0"
    "goToDestination(QString)\0page,xinpage,yinpage\0"
    "goToPageRelativePosition(int,float,float)\0"
    "getPageIndex()\0sync\0reloadPage(bool)\0"
    "reloadPage()\0visiblePages()\0"
    "pseudoNumPages()\0realNumPages()\0"
    "pageStep()\0gridCols()\0gridRowHeight()\0"
    "PDFDocument*\0getPDFDocument()\0"
    "getPageOffset()\0zoom(qreal)\0"
};

void PDFWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFWidget *_t = static_cast<PDFWidget *>(_o);
        switch (_id) {
        case 0: _t->changedPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->changedZoom((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->changedScaleOption((*reinterpret_cast< autoScaleOption(*)>(_a[1]))); break;
        case 3: _t->syncClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->goFirst(); break;
        case 5: _t->goPrev(); break;
        case 6: _t->goNext(); break;
        case 7: _t->goLast(); break;
        case 8: _t->goForward(); break;
        case 9: _t->goBack(); break;
        case 10: _t->doPageDialog(); break;
        case 11: _t->fitWidth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->fitWidth(); break;
        case 13: _t->zoomIn(); break;
        case 14: _t->zoomOut(); break;
        case 15: _t->jumpToSource(); break;
        case 16: _t->upOrPrev(); break;
        case 17: _t->leftOrPrev(); break;
        case 18: _t->pageUpOrPrev(); break;
        case 19: _t->downOrNext(); break;
        case 20: _t->rightOrNext(); break;
        case 21: _t->pageDownOrNext(); break;
        case 22: _t->clearHighlight(); break;
        case 23: _t->setSinglePageStep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->windowResized(); break;
        case 25: _t->fitWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->fitWindow(); break;
        case 27: _t->setTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->syncWindowClick((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->syncCurrentPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->fixedScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 31: _t->fixedScale(); break;
        case 32: _t->setImage((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: { int _r = _t->normalizedPageIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: _t->goToPageDirect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->setHighlightPath((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2]))); break;
        case 36: { int _r = _t->getHighlightPage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: _t->goToDestination((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->goToPageRelativePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 39: { int _r = _t->getPageIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 40: _t->reloadPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->reloadPage(); break;
        case 42: { int _r = _t->visiblePages();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->pseudoNumPages();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: { int _r = _t->realNumPages();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 45: { int _r = _t->pageStep();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->gridCols();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->gridRowHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { PDFDocument* _r = _t->getPDFDocument();
            if (_a[0]) *reinterpret_cast< PDFDocument**>(_a[0]) = _r; }  break;
        case 49: { int _r = _t->getPageOffset();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 50: _t->zoom((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_PDFWidget,
      qt_meta_data_PDFWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFWidget))
        return static_cast<void*>(const_cast< PDFWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int PDFWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void PDFWidget::changedPage(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PDFWidget::changedZoom(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PDFWidget::changedScaleOption(autoScaleOption _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PDFWidget::syncClick(int _t1, const QPointF & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_PDFDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       1,  294, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      30,   12,   12,   12, 0x05,
      78,   41,   12,   12, 0x05,
     139,  115,   12,   12, 0x05,
     175,  171,   12,   12, 0x05,
     231,  193,   12,   12, 0x05,
     275,   12,   12,   12, 0x05,
     292,   12,   12,   12, 0x05,
     310,   12,   12,   12, 0x05,
     326,   12,   12,   12, 0x05,
     349,   12,   12,   12, 0x05,
     370,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     397,  387,   12,   12, 0x0a,
     410,   12,   12,   12, 0x2a,
     422,  419,   12,   12, 0x0a,
     443,   12,   12,   12, 0x2a,
     461,   12,   12,   12, 0x0a,
     474,   12,   12,   12, 0x0a,
     489,   12,   12,   12, 0x0a,
     503,   12,   12,   12, 0x0a,
     527,  516,   12,   12, 0x0a,
     588,  554,  550,   12, 0x0a,
     621,  115,   12,   12, 0x0a,
     683,  657,   12,   12, 0x0a,
     736,  716,   12,   12, 0x2a,
     764,   12,   12,   12, 0x0a,
     775,   12,   12,   12, 0x08,
     788,  786,   12,   12, 0x08,
     816,   12,   12,   12, 0x08,
     841,   12,   12,   12, 0x08,
     895,  877,   12,   12, 0x08,
     923,   12,   12,   12, 0x08,
     940,   12,   12,   12, 0x08,
     953,   12,   12,   12, 0x08,
     973,   12,   12,   12, 0x08,
     993,   12,   12,   12, 0x08,
    1010,   12,   12,   12, 0x08,
    1026,   12,   12,   12, 0x08,
    1036,   12,   12,   12, 0x08,
    1053,   12,   12,   12, 0x08,
    1067,   12,   12,   12, 0x08,
    1087, 1082,   12,   12, 0x08,
    1120, 1108,   12,   12, 0x08,
    1165,   12,   12,   12, 0x08,
    1199, 1178,   12,   12, 0x08,
    1217,   12,   12,   12, 0x08,
    1238, 1234,   12,   12, 0x08,
    1260,   12,   12,   12, 0x28,

 // methods: signature, parameters, type, tag, flags
    1287,   12, 1279,   12, 0x02,
    1308,   12, 1298,   12, 0x02,
    1336, 1324,   12,   12, 0x02,
    1363, 1358,   12,   12, 0x02,
    1381, 1377,   12,   12, 0x02,
    1409, 1400,   12,   12, 0x02,
    1434, 1358,   12,   12, 0x02,
    1459,   12, 1448,   12, 0x02,

 // properties: name, type, flags
    1468, 1279, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_PDFDocument[] = {
    "PDFDocument\0\0documentClosed()\0reloaded()\0"
    "sourceFile,line,activate,guessedWord\0"
    "syncSource(QString,int,bool,QString)\0"
    "pdfFile,masterFile,page\0"
    "syncView(QString,QFileInfo,int)\0url\0"
    "fileDropped(QUrl)\0"
    "command,masterFile,currentFile,linenr\0"
    "runCommand(QString,QFileInfo,QFileInfo,int)\0"
    "triggeredAbout()\0triggeredManual()\0"
    "triggeredQuit()\0triggeredPlaceOnLeft()\0"
    "triggeredConfigure()\0triggeredClone()\0"
    "fillCache\0reload(bool)\0reload()\0pg\0"
    "fillRenderCache(int)\0fillRenderCache()\0"
    "sideBySide()\0doFindDialog()\0doFindAgain()\0"
    "goToSource()\0fullscreen\0toggleFullScreen(bool)\0"
    "int\0sourceFile,lineNo,activatePreview\0"
    "syncFromSource(QString,int,bool)\0"
    "syncFromView(QString,QFileInfo,int)\0"
    "fileName,masterFile,alert\0"
    "loadFile(QString,QFileInfo,bool)\0"
    "fileName,masterFile\0loadFile(QString,QFileInfo)\0"
    "printPDF()\0fileOpen()\0,\0"
    "enablePageActions(int,bool)\0"
    "enableZoomActions(qreal)\0"
    "adjustScaleActions(autoScaleOption)\0"
    "page,pos,activate\0syncClick(int,QPointF,bool)\0"
    "reloadWhenIdle()\0idleReload()\0"
    "runExternalViewer()\0runInternalViewer()\0"
    "toggleEmbedded()\0runQuickBuild()\0"
    "setGrid()\0closeSomething()\0tileWindows()\0"
    "stackWindows()\0tile\0arrangeWindows(bool)\0"
    "orientation\0updateToolBarForOrientation(Qt::Orientation)\0"
    "jumpToPage()\0backward,incremental\0"
    "search(bool,bool)\0zoomFromAction()\0"
    "pos\0zoomSliderChange(int)\0zoomSliderChange()\0"
    "QString\0fileName()\0QFileInfo\0"
    "getMasterFile()\0otherWindow\0"
    "zoomToRight(QWidget*)\0page\0showPage(int)\0"
    "res\0setResolution(int)\0destName\0"
    "goToDestination(QString)\0goToPage(int)\0"
    "PDFWidget*\0widget()\0fileName\0"
};

void PDFDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFDocument *_t = static_cast<PDFDocument *>(_o);
        switch (_id) {
        case 0: _t->documentClosed(); break;
        case 1: _t->reloaded(); break;
        case 2: _t->syncSource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->syncView((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->fileDropped((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QFileInfo(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->triggeredAbout(); break;
        case 7: _t->triggeredManual(); break;
        case 8: _t->triggeredQuit(); break;
        case 9: _t->triggeredPlaceOnLeft(); break;
        case 10: _t->triggeredConfigure(); break;
        case 11: _t->triggeredClone(); break;
        case 12: _t->reload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->reload(); break;
        case 14: _t->fillRenderCache((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->fillRenderCache(); break;
        case 16: _t->sideBySide(); break;
        case 17: _t->doFindDialog(); break;
        case 18: _t->doFindAgain(); break;
        case 19: _t->goToSource(); break;
        case 20: _t->toggleFullScreen((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: { int _r = _t->syncFromSource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: _t->syncFromView((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2]))); break;
        case 25: _t->printPDF(); break;
        case 26: _t->fileOpen(); break;
        case 27: _t->enablePageActions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->enableZoomActions((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 29: _t->adjustScaleActions((*reinterpret_cast< autoScaleOption(*)>(_a[1]))); break;
        case 30: _t->syncClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 31: _t->reloadWhenIdle(); break;
        case 32: _t->idleReload(); break;
        case 33: _t->runExternalViewer(); break;
        case 34: _t->runInternalViewer(); break;
        case 35: _t->toggleEmbedded(); break;
        case 36: _t->runQuickBuild(); break;
        case 37: _t->setGrid(); break;
        case 38: _t->closeSomething(); break;
        case 39: _t->tileWindows(); break;
        case 40: _t->stackWindows(); break;
        case 41: _t->arrangeWindows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->updateToolBarForOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 43: _t->jumpToPage(); break;
        case 44: _t->search((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->zoomFromAction(); break;
        case 46: _t->zoomSliderChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->zoomSliderChange(); break;
        case 48: { QString _r = _t->fileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: { QFileInfo _r = _t->getMasterFile();
            if (_a[0]) *reinterpret_cast< QFileInfo*>(_a[0]) = _r; }  break;
        case 50: _t->zoomToRight((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 51: _t->showPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->setResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->goToDestination((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->goToPage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 55: { PDFWidget* _r = _t->widget();
            if (_a[0]) *reinterpret_cast< PDFWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDFDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFDocument::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PDFDocument,
      qt_meta_data_PDFDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFDocument))
        return static_cast<void*>(const_cast< PDFDocument*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PDFDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = fileName(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PDFDocument::documentClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PDFDocument::reloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PDFDocument::syncSource(const QString & _t1, int _t2, bool _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PDFDocument::syncView(const QString & _t1, const QFileInfo & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PDFDocument::fileDropped(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PDFDocument::runCommand(const QString & _t1, const QFileInfo & _t2, const QFileInfo & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PDFDocument::triggeredAbout()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void PDFDocument::triggeredManual()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void PDFDocument::triggeredQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void PDFDocument::triggeredPlaceOnLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void PDFDocument::triggeredConfigure()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void PDFDocument::triggeredClone()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
