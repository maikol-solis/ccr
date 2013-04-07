/****************************************************************************
** Meta object code from reading C++ file 'qsearchreplacepanel.h'
**
** Created: Sat Apr 6 13:28:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcodeedit/lib/widgets/qsearchreplacepanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsearchreplacepanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSearchReplacePanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   31,   20,   20, 0x0a,
      76,   62,   20,   20, 0x0a,
      97,   20,   20,   20, 0x0a,
     146,  108,   20,   20, 0x0a,
     207,  179,   20,   20, 0x2a,
     252,  235,   20,   20, 0x2a,
     284,  275,   20,   20, 0x2a,
     351,  302,   20,   20, 0x0a,
     460,  390,   20,   20, 0x0a,
     509,   20,   20,   20, 0x0a,
     559,  528,   20,   20, 0x0a,
     590,  585,   20,   20, 0x08,
     616,  585,   20,   20, 0x08,
     648,  645,   20,   20, 0x08,
     675,  645,   20,   20, 0x08,
     699,  645,   20,   20, 0x08,
     724,  645,   20,   20, 0x08,
     750,  645,   20,   20, 0x08,
     776,  645,   20,   20, 0x08,
     805,  645,   20,   20, 0x08,
     834,  645,   20,   20, 0x08,
     863,  645,   20,   20, 0x08,
     889,   20,   20,   20, 0x08,
     908,   20,   20,   20, 0x08,
     931,   20,   20,   20, 0x08,
     951,   20,   20,   20, 0x08,
     977,   20,   20,   20, 0x08,
    1007,   20,   20,   20, 0x08,
    1032,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSearchReplacePanel[] = {
    "QSearchReplacePanel\0\0onClose()\0"
    "mode,replace\0display(int,bool)\0"
    "closeTogether\0closeSomething(bool)\0"
    "findNext()\0backward,replace,replaceAll,countOnly\0"
    "findReplace(bool,bool,bool,bool)\0"
    "backward,replace,replaceAll\0"
    "findReplace(bool,bool,bool)\0"
    "backward,replace\0findReplace(bool,bool)\0"
    "backward\0findReplace(bool)\0"
    "text,backward,highlight,regex,word,caseSensitive\0"
    "find(QString,bool,bool,bool,bool,bool)\0"
    "text,backward,highlight,regex,word,caseSensitive,fromCursor,selection\0"
    "find(QString,bool,bool,bool,bool,bool,bool,bool)\0"
    "selectAllMatches()\0searchOptions,cursor,selection\0"
    "setOptions(int,bool,bool)\0text\0"
    "cFind_textEdited(QString)\0"
    "cReplace_textEdited(QString)\0on\0"
    "on_cbReplace_toggled(bool)\0"
    "on_cbCase_toggled(bool)\0"
    "on_cbWords_toggled(bool)\0"
    "on_cbRegExp_toggled(bool)\0"
    "on_cbCursor_toggled(bool)\0"
    "on_cbHighlight_toggled(bool)\0"
    "on_cbSelection_toggled(bool)\0"
    "on_cbEscapeSeq_toggled(bool)\0"
    "on_cbPrompt_toggled(bool)\0on_bNext_clicked()\0"
    "on_bPrevious_clicked()\0on_bCount_clicked()\0"
    "on_bReplaceNext_clicked()\0"
    "on_bReplacePrevious_clicked()\0"
    "on_bReplaceAll_clicked()\0"
    "cursorPositionChanged()\0"
};

void QSearchReplacePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSearchReplacePanel *_t = static_cast<QSearchReplacePanel *>(_o);
        switch (_id) {
        case 0: _t->onClose(); break;
        case 1: _t->display((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->closeSomething((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->findNext(); break;
        case 4: _t->findReplace((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->findReplace((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->findReplace((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->findReplace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->find((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 9: _t->find((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 10: _t->selectAllMatches(); break;
        case 11: _t->setOptions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->cFind_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->cReplace_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_cbReplace_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_cbCase_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_cbWords_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_cbRegExp_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_cbCursor_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_cbHighlight_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_cbSelection_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_cbEscapeSeq_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->on_cbPrompt_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_bNext_clicked(); break;
        case 24: _t->on_bPrevious_clicked(); break;
        case 25: _t->on_bCount_clicked(); break;
        case 26: _t->on_bReplaceNext_clicked(); break;
        case 27: _t->on_bReplacePrevious_clicked(); break;
        case 28: _t->on_bReplaceAll_clicked(); break;
        case 29: _t->cursorPositionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSearchReplacePanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSearchReplacePanel::staticMetaObject = {
    { &QPanel::staticMetaObject, qt_meta_stringdata_QSearchReplacePanel,
      qt_meta_data_QSearchReplacePanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSearchReplacePanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSearchReplacePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSearchReplacePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSearchReplacePanel))
        return static_cast<void*>(const_cast< QSearchReplacePanel*>(this));
    return QPanel::qt_metacast(_clname);
}

int QSearchReplacePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void QSearchReplacePanel::onClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
