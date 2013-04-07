/****************************************************************************
** Meta object code from reading C++ file 'qdocumentcursor.h'
**
** Created: Sat Apr 6 13:28:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/document/qdocumentcursor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdocumentcursor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDocumentCursor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
       0,    0, // properties
       4,  349, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      24,   22,   17,   16, 0x02,
      61,   22,   17,   16, 0x02,
      96,   22,   17,   16, 0x02,
     129,   22,   17,   16, 0x02,
     152,   16,   17,   16, 0x02,
     161,   16,   17,   16, 0x02,
     171,   16,   17,   16, 0x02,
     179,   16,   17,   16, 0x02,
     189,   16,   17,   16, 0x02,
     202,   16,   17,   16, 0x02,
     217,   16,   17,   16, 0x02,
     229,   16,   17,   16, 0x02,
     243,   16,   17,   16, 0x02,
     258,   16,   17,   16, 0x02,
     269,   16,   17,   16, 0x02,
     285,   16,   17,   16, 0x02,
     306,   16,  302,   16, 0x02,
     319,   16,  302,   16, 0x02,
     334,   16,  302,   16, 0x02,
     353,   16,  302,   16, 0x02,
     374,   16,  302,   16, 0x02,
     392,   16,  302,   16, 0x02,
     412,   16,  302,   16, 0x02,
     428,   16,  302,   16, 0x02,
     446,   16,  302,   16, 0x02,
     471,  467,   16,   16, 0x02,
     499,   22,   16,   16, 0x22,
     518,  467,   16,   16, 0x02,
     548,   22,   16,   16, 0x22,
     569,   22,   16,   16, 0x02,
     594,   22,   16,   16, 0x02,
     621,   16,  302,   16, 0x02,
     641,   16,  302,   16, 0x02,
     674,   16,  667,   16, 0x02,
     693,   16,  667,   16, 0x02,
     725,  718,   16,   16, 0x02,
     742,  736,   16,   16, 0x02,
     772,  768,   16,   16, 0x22,
     801,  789,   17,   16, 0x02,
     852,  842,   17,   16, 0x22,
     884,  718,   17,   16, 0x22,
     916,  902,   16,   16, 0x02,
     953,  941,   16,   16, 0x22,
     969,   16,   16,   16, 0x02,
     992,  981,   16,   16, 0x02,
    1009,   16,   16,   16, 0x22,
    1035, 1022,   16,   16, 0x02,
    1062, 1060,   16,   16, 0x22,
    1090,   16, 1082,   16, 0x02,
    1105,   16,   16,   16, 0x02,
    1122,   16,   16,   16, 0x02,
    1148, 1143,   16,   16, 0x02,
    1179, 1177,   16,   16, 0x02,
    1201,   22,   16,   16, 0x02,
    1267, 1239,   16,   16, 0x02,
    1310, 1291,   16,   16, 0x22,
    1330,  941,   16,   16, 0x22,
    1362, 1346,   16,   16, 0x02,
    1392, 1385,   16,   16, 0x22,
    1411,   22,   17,   16, 0x02,
    1446,   22,    0,   16, 0x02,
    1479,   16, 1473,   16, 0x02,
    1490,   16, 1473,   16, 0x02,
    1505,   16,   16,   16, 0x02,
    1518,   16,   16,   16, 0x02,
    1539,   16,   16,   16, 0x02,
    1556,   16,   16,   16, 0x02,

 // enums: name, flags, count, data
    1571, 0x0,    4,  365,
    1580, 0x0,    4,  373,
    1589, 0x0,   23,  381,
    1603, 0x0,    2,  427,

 // enum data: key, value
    1617, uint(QDocumentCursor::MoveAnchor),
    1628, uint(QDocumentCursor::KeepAnchor),
    1639, uint(QDocumentCursor::ThroughWrap),
    1651, uint(QDocumentCursor::ThroughFolding),
    1617, uint(QDocumentCursor::MoveAnchor),
    1628, uint(QDocumentCursor::KeepAnchor),
    1639, uint(QDocumentCursor::ThroughWrap),
    1651, uint(QDocumentCursor::ThroughFolding),
    1666, uint(QDocumentCursor::NoMove),
    1673, uint(QDocumentCursor::Up),
    1676, uint(QDocumentCursor::Down),
    1681, uint(QDocumentCursor::Left),
    1686, uint(QDocumentCursor::PreviousCharacter),
    1704, uint(QDocumentCursor::Right),
    1710, uint(QDocumentCursor::NextCharacter),
    1724, uint(QDocumentCursor::Start),
    1730, uint(QDocumentCursor::StartOfLine),
    1742, uint(QDocumentCursor::StartOfBlock),
    1755, uint(QDocumentCursor::StartOfWord),
    1767, uint(QDocumentCursor::PreviousBlock),
    1781, uint(QDocumentCursor::PreviousLine),
    1794, uint(QDocumentCursor::PreviousWord),
    1807, uint(QDocumentCursor::WordLeft),
    1816, uint(QDocumentCursor::WordRight),
    1826, uint(QDocumentCursor::End),
    1830, uint(QDocumentCursor::EndOfLine),
    1840, uint(QDocumentCursor::EndOfBlock),
    1851, uint(QDocumentCursor::EndOfWord),
    1861, uint(QDocumentCursor::NextWord),
    1870, uint(QDocumentCursor::NextBlock),
    1880, uint(QDocumentCursor::NextLine),
    1889, uint(QDocumentCursor::WordUnderCursor),
    1905, uint(QDocumentCursor::LineUnderCursor),

       0        // eod
};

static const char qt_meta_stringdata_QDocumentCursor[] = {
    "QDocumentCursor\0\0bool\0c\0"
    "beginBoundaryLarger(QDocumentCursor)\0"
    "endBoundaryLarger(QDocumentCursor)\0"
    "equalBoundaries(QDocumentCursor)\0"
    "equal(QDocumentCursor)\0isNull()\0"
    "isValid()\0atEnd()\0atStart()\0atBlockEnd()\0"
    "atBlockStart()\0atLineEnd()\0atLineStart()\0"
    "hasSelection()\0isSilent()\0isAutoUpdated()\0"
    "isAutoErasable()\0int\0lineNumber()\0"
    "columnNumber()\0anchorLineNumber()\0"
    "anchorColumnNumber()\0startLineNumber()\0"
    "startColumnNumber()\0endLineNumber()\0"
    "endColumnNumber()\0visualColumnNumber()\0"
    "c,m\0setLineNumber(int,MoveMode)\0"
    "setLineNumber(int)\0setColumnNumber(int,MoveMode)\0"
    "setColumnNumber(int)\0setAnchorLineNumber(int)\0"
    "setAnchorColumnNumber(int)\0"
    "wrappedLineOffset()\0anchorWrappedLineOffset()\0"
    "QPoint\0documentPosition()\0"
    "anchorDocumentPosition()\0offset\0"
    "shift(int)\0pos,m\0setPosition(int,MoveMode)\0"
    "pos\0setPosition(int)\0offset,op,m\0"
    "movePosition(int,MoveOperation,MoveMode)\0"
    "offset,op\0movePosition(int,MoveOperation)\0"
    "movePosition(int)\0line,column,m\0"
    "moveTo(int,int,MoveMode)\0line,column\0"
    "moveTo(int,int)\0eraseLine()\0keepAnchor\0"
    "insertLine(bool)\0insertLine()\0"
    "s,keepAnchor\0insertText(QString,bool)\0"
    "s\0insertText(QString)\0QString\0"
    "selectedText()\0clearSelection()\0"
    "removeSelectedText()\0text\0"
    "replaceSelectedText(QString)\0t\0"
    "select(SelectionType)\0"
    "setSelectionBoundary(QDocumentCursor)\0"
    "line,column,lineTo,columnTo\0"
    "select(int,int,int,int)\0line,column,lineTo\0"
    "select(int,int,int)\0select(int,int)\0"
    "column,columnTo\0selectColumns(int,int)\0"
    "column\0selectColumns(int)\0"
    "isWithinSelection(QDocumentCursor)\0"
    "intersect(QDocumentCursor)\0QChar\0"
    "nextChar()\0previousChar()\0deleteChar()\0"
    "deletePreviousChar()\0beginEditBlock()\0"
    "endEditBlock()\0MoveFlag\0MoveMode\0"
    "MoveOperation\0SelectionType\0MoveAnchor\0"
    "KeepAnchor\0ThroughWrap\0ThroughFolding\0"
    "NoMove\0Up\0Down\0Left\0PreviousCharacter\0"
    "Right\0NextCharacter\0Start\0StartOfLine\0"
    "StartOfBlock\0StartOfWord\0PreviousBlock\0"
    "PreviousLine\0PreviousWord\0WordLeft\0"
    "WordRight\0End\0EndOfLine\0EndOfBlock\0"
    "EndOfWord\0NextWord\0NextBlock\0NextLine\0"
    "WordUnderCursor\0LineUnderCursor\0"
};

void QDocumentCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDocumentCursor *_t = static_cast<QDocumentCursor *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->beginBoundaryLarger((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->endBoundaryLarger((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->equalBoundaries((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->equal((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isNull();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->atEnd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->atStart();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->atBlockEnd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->atBlockStart();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->atLineEnd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->atLineStart();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->hasSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isSilent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isAutoUpdated();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isAutoErasable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->lineNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->columnNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->anchorLineNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->anchorColumnNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->startLineNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->startColumnNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->endLineNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->endColumnNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->visualColumnNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: _t->setLineNumber((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MoveMode(*)>(_a[2]))); break;
        case 26: _t->setLineNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setColumnNumber((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MoveMode(*)>(_a[2]))); break;
        case 28: _t->setColumnNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setAnchorLineNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setAnchorColumnNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: { int _r = _t->wrappedLineOffset();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->anchorWrappedLineOffset();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { QPoint _r = _t->documentPosition();
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 34: { QPoint _r = _t->anchorDocumentPosition();
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 35: _t->shift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MoveMode(*)>(_a[2]))); break;
        case 37: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: { bool _r = _t->movePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MoveOperation(*)>(_a[2])),(*reinterpret_cast< MoveMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->movePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MoveOperation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->movePosition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: _t->moveTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< MoveMode(*)>(_a[3]))); break;
        case 42: _t->moveTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->eraseLine(); break;
        case 44: _t->insertLine((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->insertLine(); break;
        case 46: _t->insertText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->insertText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: { QString _r = _t->selectedText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: _t->clearSelection(); break;
        case 50: _t->removeSelectedText(); break;
        case 51: _t->replaceSelectedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->select((*reinterpret_cast< SelectionType(*)>(_a[1]))); break;
        case 53: _t->setSelectionBoundary((*reinterpret_cast< const QDocumentCursor(*)>(_a[1]))); break;
        case 54: _t->select((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 55: _t->select((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 56: _t->select((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->selectColumns((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->selectColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: { bool _r = _t->isWithinSelection((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { QDocumentCursor _r = _t->intersect((*reinterpret_cast< const QDocumentCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDocumentCursor*>(_a[0]) = _r; }  break;
        case 61: { QChar _r = _t->nextChar();
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 62: { QChar _r = _t->previousChar();
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 63: _t->deleteChar(); break;
        case 64: _t->deletePreviousChar(); break;
        case 65: _t->beginEditBlock(); break;
        case 66: _t->endEditBlock(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDocumentCursor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDocumentCursor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDocumentCursor,
      qt_meta_data_QDocumentCursor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDocumentCursor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDocumentCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDocumentCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDocumentCursor))
        return static_cast<void*>(const_cast< QDocumentCursor*>(this));
    return QObject::qt_metacast(_clname);
}

int QDocumentCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
