/****************************************************************************
** Meta object code from reading C++ file 'latexcompleter.h'
**
** Created: Sat Apr 6 13:28:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../latexcompleter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexcompleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LatexCompleter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   16,   15,   15, 0x05,
      65,   54,   15,   15, 0x05,
     102,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     128,   15,   15,   15, 0x08,
     158,  152,   15,   15, 0x08,
     188,   15,   15,   15, 0x08,
     210,  206,   15,   15, 0x08,
     226,  152,   15,   15, 0x08,
     262,  251,   15,   15, 0x08,
     309,  301,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LatexCompleter[] = {
    "LatexCompleter\0\0fn\0"
    "setDirectoryForCompletion(QString)\0"
    "file,bibId\0searchBibtexSection(QString,QString)\0"
    "showImagePreview(QString)\0"
    "cursorPositionChanged()\0index\0"
    "selectionChanged(QModelIndex)\0"
    "editorDestroyed()\0pos\0changeView(int)\0"
    "listClicked(QModelIndex)\0dn,content\0"
    "directoryLoaded(QString,QSet<QString>)\0"
    "content\0bibtexSectionFound(QString)\0"
};

void LatexCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexCompleter *_t = static_cast<LatexCompleter *>(_o);
        switch (_id) {
        case 0: _t->setDirectoryForCompletion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->searchBibtexSection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->showImagePreview((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->cursorPositionChanged(); break;
        case 4: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->editorDestroyed(); break;
        case 6: _t->changeView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->listClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 8: _t->directoryLoaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QSet<QString>(*)>(_a[2]))); break;
        case 9: _t->bibtexSectionFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LatexCompleter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexCompleter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LatexCompleter,
      qt_meta_data_LatexCompleter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexCompleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexCompleter))
        return static_cast<void*>(const_cast< LatexCompleter*>(this));
    return QObject::qt_metacast(_clname);
}

int LatexCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LatexCompleter::setDirectoryForCompletion(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LatexCompleter::searchBibtexSection(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LatexCompleter::showImagePreview(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
