/****************************************************************************
** Meta object code from reading C++ file 'latexdocument.h'
**
** Created: Sat Apr 6 13:28:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../latexdocument.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LatexDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       3,  219, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   15,   14,   14, 0x05,
      83,   64,   14,   14, 0x05,
     141,  132,   14,   14, 0x25,
     174,  132,   14,   14, 0x05,
     211,  204,   14,   14, 0x05,
     246,   14,   14,   14, 0x05,
     270,  204,   14,   14, 0x05,
     302,   14,   14,   14, 0x05,
     326,  323,   14,   14, 0x05,
     357,   14,   14,   14, 0x05,
     375,   14,   14,   14, 0x05,
     395,   14,   14,   14, 0x05,
     414,  409,   14,   14, 0x05,
     442,  437,   14,   14, 0x05,
     482,  475,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     507,   14,   14,   14, 0x0a,
     538,  525,   14,   14, 0x0a,
     566,  562,   14,   14, 0x0a,
     610,   14,   14,   14, 0x0a,

 // methods: signature, parameters, type, tag, flags
     643,   14,  631,   14, 0x02,
     656,   14,  631,   14, 0x02,
     667,   14,  631,   14, 0x02,
     692,   14,  678,   14, 0x02,
     710,   14,  678,   14, 0x02,
     739,  409,  735,   14, 0x02,
     760,  409,  735,   14, 0x02,
     816,  409,  779,   14, 0x02,
     835,  409,  779,   14, 0x02,
     852,  409,  779,   14, 0x02,
     881,   14,  873,   14, 0x02,
     922,  904,  873,   14, 0x02,
     974,   14,  959,   14, 0x02,
     994,   14,  959,   14, 0x02,
    1017,   14,  631,   14, 0x02,
    1067, 1055, 1033,   14, 0x02,
    1104,   14, 1033,   14, 0x22,
    1125,  409, 1120,   14, 0x02,
    1150,  409,  873,   14, 0x02,
    1196,  409, 1175,   14, 0x02,
    1260, 1231,   14,   14, 0x02,
    1310, 1301,   14,   14, 0x22,

 // properties: name, type, flags
    1346,  873, 0x0a095001,
    1365, 1355, 0x00095009,
    1391, 1374, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_LatexDocument[] = {
    "LatexDocument\0\0newMasterDocument\0"
    "hasBeenIncluded(LatexDocument)\0"
    "document,highlight\0"
    "structureUpdated(LatexDocument*,StructureEntry*)\0"
    "document\0structureUpdated(LatexDocument*)\0"
    "structureLost(LatexDocument*)\0se,row\0"
    "removeElement(StructureEntry*,int)\0"
    "removeElementFinished()\0"
    "addElement(StructureEntry*,int)\0"
    "addElementFinished()\0se\0"
    "updateElement(StructureEntry*)\0"
    "updateCompleter()\0updateBibTeXFiles()\0"
    "toBeChanged()\0name\0importPackage(QString)\0"
    "lang\0spellingLanguageChanged(QLocale)\0"
    "lineNr\0bookmarkLineUpdated(int)\0"
    "updateStructure()\0linenr,count\0"
    "patchStructure(int,int)\0dlh\0"
    "patchStructureRemoval(QDocumentLineHandle*)\0"
    "initClearStructure()\0QStringList\0"
    "labelItems()\0refItems()\0bibItems()\0"
    "QSet<QString>\0userCommandList()\0"
    "additionalCommandsList()\0int\0"
    "countLabels(QString)\0countRefs(QString)\0"
    "QMultiHash<QDocumentLineHandle*,int>\0"
    "getLabels(QString)\0getRefs(QString)\0"
    "getBibItems(QString)\0QString\0"
    "getTemporaryFileName()\0relName,extension\0"
    "getAbsoluteFilePath(QString,QString)\0"
    "LatexDocument*\0getMasterDocument()\0"
    "getTopMasterDocument()\0includedFiles()\0"
    "QList<LatexDocument*>\0visitedDocs\0"
    "getListOfDocs(QSet<LatexDocument*>*)\0"
    "getListOfDocs()\0bool\0containsPackage(QString)\0"
    "getMagicComment(QString)\0QDocumentLineHandle*\0"
    "getMagicCommentLineHandle(QString)\0"
    "name,val,createIfNonExisting\0"
    "updateMagicComment(QString,QString,bool)\0"
    "name,val\0updateMagicComment(QString,QString)\0"
    "fileName\0QFileInfo\0fileInfo\0"
    "LatexEditorView*\0editorView\0"
};

void LatexDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexDocument *_t = static_cast<LatexDocument *>(_o);
        switch (_id) {
        case 0: _t->hasBeenIncluded((*reinterpret_cast< const LatexDocument(*)>(_a[1]))); break;
        case 1: _t->structureUpdated((*reinterpret_cast< LatexDocument*(*)>(_a[1])),(*reinterpret_cast< StructureEntry*(*)>(_a[2]))); break;
        case 2: _t->structureUpdated((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 3: _t->structureLost((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 4: _t->removeElement((*reinterpret_cast< StructureEntry*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->removeElementFinished(); break;
        case 6: _t->addElement((*reinterpret_cast< StructureEntry*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->addElementFinished(); break;
        case 8: _t->updateElement((*reinterpret_cast< StructureEntry*(*)>(_a[1]))); break;
        case 9: _t->updateCompleter(); break;
        case 10: _t->updateBibTeXFiles(); break;
        case 11: _t->toBeChanged(); break;
        case 12: _t->importPackage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->spellingLanguageChanged((*reinterpret_cast< const QLocale(*)>(_a[1]))); break;
        case 14: _t->bookmarkLineUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->updateStructure(); break;
        case 16: _t->patchStructure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->patchStructureRemoval((*reinterpret_cast< QDocumentLineHandle*(*)>(_a[1]))); break;
        case 18: _t->initClearStructure(); break;
        case 19: { QStringList _r = _t->labelItems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 20: { QStringList _r = _t->refItems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 21: { QStringList _r = _t->bibItems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 22: { QSet<QString> _r = _t->userCommandList();
            if (_a[0]) *reinterpret_cast< QSet<QString>*>(_a[0]) = _r; }  break;
        case 23: { QSet<QString> _r = _t->additionalCommandsList();
            if (_a[0]) *reinterpret_cast< QSet<QString>*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->countLabels((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->countRefs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { QMultiHash<QDocumentLineHandle*,int> _r = _t->getLabels((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultiHash<QDocumentLineHandle*,int>*>(_a[0]) = _r; }  break;
        case 27: { QMultiHash<QDocumentLineHandle*,int> _r = _t->getRefs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultiHash<QDocumentLineHandle*,int>*>(_a[0]) = _r; }  break;
        case 28: { QMultiHash<QDocumentLineHandle*,int> _r = _t->getBibItems((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultiHash<QDocumentLineHandle*,int>*>(_a[0]) = _r; }  break;
        case 29: { QString _r = _t->getTemporaryFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->getAbsoluteFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { LatexDocument* _r = _t->getMasterDocument();
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 32: { LatexDocument* _r = _t->getTopMasterDocument();
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 33: { QStringList _r = _t->includedFiles();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 34: { QList<LatexDocument*> _r = _t->getListOfDocs((*reinterpret_cast< QSet<LatexDocument*>*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<LatexDocument*>*>(_a[0]) = _r; }  break;
        case 35: { QList<LatexDocument*> _r = _t->getListOfDocs();
            if (_a[0]) *reinterpret_cast< QList<LatexDocument*>*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->containsPackage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->getMagicComment((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QDocumentLineHandle* _r = _t->getMagicCommentLineHandle((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDocumentLineHandle**>(_a[0]) = _r; }  break;
        case 39: _t->updateMagicComment((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 40: _t->updateMagicComment((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LatexDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexDocument::staticMetaObject = {
    { &QDocument::staticMetaObject, qt_meta_stringdata_LatexDocument,
      qt_meta_data_LatexDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexDocument))
        return static_cast<void*>(const_cast< LatexDocument*>(this));
    return QDocument::qt_metacast(_clname);
}

int LatexDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDocument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getFileName(); break;
        case 1: *reinterpret_cast< QFileInfo*>(_v) = getFileInfo(); break;
        case 2: *reinterpret_cast< LatexEditorView**>(_v) = getEditorView(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LatexDocument::hasBeenIncluded(const LatexDocument & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LatexDocument::structureUpdated(LatexDocument * _t1, StructureEntry * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void LatexDocument::structureLost(LatexDocument * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LatexDocument::removeElement(StructureEntry * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LatexDocument::removeElementFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void LatexDocument::addElement(StructureEntry * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LatexDocument::addElementFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void LatexDocument::updateElement(StructureEntry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LatexDocument::updateCompleter()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void LatexDocument::updateBibTeXFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void LatexDocument::toBeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void LatexDocument::importPackage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LatexDocument::spellingLanguageChanged(const QLocale & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void LatexDocument::bookmarkLineUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
static const uint qt_meta_data_LatexDocumentsModel[] = {

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
      40,   21,   20,   20, 0x08,
      98,   89,   20,   20, 0x28,
     131,   89,   20,   20, 0x08,
     168,  161,   20,   20, 0x08,
     203,   20,   20,   20, 0x08,
     227,  161,   20,   20, 0x08,
     259,   20,   20,   20, 0x08,
     283,  280,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LatexDocumentsModel[] = {
    "LatexDocumentsModel\0\0document,highlight\0"
    "structureUpdated(LatexDocument*,StructureEntry*)\0"
    "document\0structureUpdated(LatexDocument*)\0"
    "structureLost(LatexDocument*)\0se,row\0"
    "removeElement(StructureEntry*,int)\0"
    "removeElementFinished()\0"
    "addElement(StructureEntry*,int)\0"
    "addElementFinished()\0se\0"
    "updateElement(StructureEntry*)\0"
};

void LatexDocumentsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexDocumentsModel *_t = static_cast<LatexDocumentsModel *>(_o);
        switch (_id) {
        case 0: _t->structureUpdated((*reinterpret_cast< LatexDocument*(*)>(_a[1])),(*reinterpret_cast< StructureEntry*(*)>(_a[2]))); break;
        case 1: _t->structureUpdated((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 2: _t->structureLost((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 3: _t->removeElement((*reinterpret_cast< StructureEntry*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->removeElementFinished(); break;
        case 5: _t->addElement((*reinterpret_cast< StructureEntry*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->addElementFinished(); break;
        case 7: _t->updateElement((*reinterpret_cast< StructureEntry*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LatexDocumentsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexDocumentsModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_LatexDocumentsModel,
      qt_meta_data_LatexDocumentsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexDocumentsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexDocumentsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexDocumentsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexDocumentsModel))
        return static_cast<void*>(const_cast< LatexDocumentsModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int LatexDocumentsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_LatexDocuments[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       3,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   16,   15,   15, 0x05,
      78,   69,   15,   15, 0x05,
     125,  116,   15,   15, 0x05,
     151,  144,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,   15,   15,   15, 0x08,
     226,  203,   15,   15, 0x0a,

 // methods: signature, parameters, type, tag, flags
     294,   69,   15,   15, 0x02,
     343,   15,  328,   15, 0x02,
     364,   15,  328,   15, 0x02,
     406,   15,  384,   15, 0x02,
     425,  421,  328,   15, 0x02,
     465,   15,  328,   15, 0x22,
     499,   15,  491,   15, 0x02,
     520,   15,  491,   15, 0x02,
     541,   15,  491,   15, 0x02,
     589,  571,  491,   15, 0x02,
     634,  626,  491,   15, 0x22,
     692,  663,  328,   15, 0x02,
     728,  719,  328,   15, 0x22,
     755,  750,  328,   15, 0x02,
     786,  719,  328,   15, 0x02,
     821,   15,  816,   15, 0x02,
     840,  834,  491,   15, 0x02,

 // properties: name, type, flags
     867,  328, 0x00095009,
      16,  328, 0x00095009,
     883,  384, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_LatexDocuments[] = {
    "LatexDocuments\0\0masterDocument\0"
    "masterDocumentChanged(LatexDocument*)\0"
    "document\0aboutToDeleteDocument(LatexDocument*)\0"
    "filename\0docToLoad(QString)\0edView\0"
    "docToHide(LatexEditorView*)\0"
    "bibTeXFilesNeedUpdate()\0doc,line,lineNr,errors\0"
    "lineGrammarChecked(const void*,const void*,int,QList<GrammarError>)\0"
    "setMasterDocument(LatexDocument*)\0"
    "LatexDocument*\0getCurrentDocument()\0"
    "getMasterDocument()\0QList<LatexDocument*>\0"
    "getDocuments()\0doc\0"
    "getMasterDocumentForDoc(LatexDocument*)\0"
    "getMasterDocumentForDoc()\0QString\0"
    "getCurrentFileName()\0getCompileFileName()\0"
    "getTemporaryCompileFileName()\0"
    "relName,extension\0"
    "getAbsoluteFilePath(QString,QString)\0"
    "relName\0getAbsoluteFilePath(QString)\0"
    "fileName,checkTemporaryNames\0"
    "findDocument(QString,bool)\0fileName\0"
    "findDocument(QString)\0qDoc\0"
    "findDocument(const QDocument*)\0"
    "findDocumentFromName(QString)\0bool\0"
    "singleMode()\0bibId\0findFileFromBibId(QString)\0"
    "currentDocument\0documents\0"
};

void LatexDocuments::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexDocuments *_t = static_cast<LatexDocuments *>(_o);
        switch (_id) {
        case 0: _t->masterDocumentChanged((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 1: _t->aboutToDeleteDocument((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 2: _t->docToLoad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->docToHide((*reinterpret_cast< LatexEditorView*(*)>(_a[1]))); break;
        case 4: _t->bibTeXFilesNeedUpdate(); break;
        case 5: _t->lineGrammarChecked((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QList<GrammarError>(*)>(_a[4]))); break;
        case 6: _t->setMasterDocument((*reinterpret_cast< LatexDocument*(*)>(_a[1]))); break;
        case 7: { LatexDocument* _r = _t->getCurrentDocument();
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 8: { LatexDocument* _r = _t->getMasterDocument();
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 9: { QList<LatexDocument*> _r = _t->getDocuments();
            if (_a[0]) *reinterpret_cast< QList<LatexDocument*>*>(_a[0]) = _r; }  break;
        case 10: { LatexDocument* _r = _t->getMasterDocumentForDoc((*reinterpret_cast< LatexDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 11: { LatexDocument* _r = _t->getMasterDocumentForDoc();
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->getCurrentFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->getCompileFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->getTemporaryCompileFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->getAbsoluteFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->getAbsoluteFilePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { LatexDocument* _r = _t->findDocument((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 18: { LatexDocument* _r = _t->findDocument((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 19: { LatexDocument* _r = _t->findDocument((*reinterpret_cast< const QDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 20: { LatexDocument* _r = _t->findDocumentFromName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LatexDocument**>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->singleMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->findFileFromBibId((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LatexDocuments::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexDocuments::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LatexDocuments,
      qt_meta_data_LatexDocuments, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexDocuments::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexDocuments::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexDocuments::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexDocuments))
        return static_cast<void*>(const_cast< LatexDocuments*>(this));
    return QObject::qt_metacast(_clname);
}

int LatexDocuments::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LatexDocument**>(_v) = getCurrentDocument(); break;
        case 1: *reinterpret_cast< LatexDocument**>(_v) = getMasterDocument(); break;
        case 2: *reinterpret_cast< QList<LatexDocument*>*>(_v) = getDocuments(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LatexDocuments::masterDocumentChanged(LatexDocument * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LatexDocuments::aboutToDeleteDocument(LatexDocument * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LatexDocuments::docToLoad(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LatexDocuments::docToHide(LatexEditorView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
