/****************************************************************************
** Meta object code from reading C++ file 'logeditor.h'
**
** Created: Sat Apr 6 13:28:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../logeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   11,   10,   10, 0x0a,
      65,   53,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LogEditor[] = {
    "LogEditor\0\0l\0clickOnLogLine(int)\0"
    "insertLine(QString)\0parag,index\0"
    "setCursorPosition(int,int)\0"
};

void LogEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogEditor *_t = static_cast<LogEditor *>(_o);
        switch (_id) {
        case 0: _t->clickOnLogLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->insertLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setCursorPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LogEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogEditor::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_LogEditor,
      qt_meta_data_LogEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogEditor))
        return static_cast<void*>(const_cast< LogEditor*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int LogEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LogEditor::clickOnLogLine(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
