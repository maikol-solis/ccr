/****************************************************************************
** Meta object code from reading C++ file 'webpublishdialog.h'
**
** Created: Sat Apr 6 13:28:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../webpublishdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webpublishdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebPublishDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      27,   17,   17,   17, 0x08,
      43,   34,   17,   17, 0x08,
      95,   60,   17,   17, 0x08,
     164,  140,   17,   17, 0x28,
     201,  197,   17,   17, 0x08,
     248,  221,   17,   17, 0x08,
     283,  278,   17,   17, 0x08,
     333,  303,   17,   17, 0x08,
     378,  373,   17,   17, 0x08,
     402,  398,   17,   17, 0x08,
     430,  422,   17,   17, 0x08,
     450,   17,   17,   17, 0x08,
     458,   17,   17,   17, 0x08,
     472,   17,   17,   17, 0x08,
     485,   17,   17,   17, 0x08,
     517,  505,   17,   17, 0x08,
     542,   17,   17,   17, 0x08,
     556,   17,   17,   17, 0x08,
     587,  573,   17,   17, 0x08,
     615,   17,   17,   17, 0x08,
     631,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebPublishDialog[] = {
    "WebPublishDialog\0\0accept()\0init()\0"
    "fileName\0convert(QString)\0"
    "cmd,file,waitendprocess,stdErrSlot\0"
    "RunCommand(QString,QString,bool,const char*)\0"
    "cmd,file,waitendprocess\0"
    "RunCommand(QString,QString,bool)\0err\0"
    "SlotEndProcess(int)\0fileNameWithoutDir,to_file\0"
    "copyDataFile(QString,QString)\0file\0"
    "removeFile(QString)\0input,output,id_page,w,h,maxw\0"
    "ps2gif(QString,QString,int,int,int,int)\0"
    "mode\0writepages(QString)\0msg\0"
    "fatalerror(QString)\0logfile\0"
    "latexerror(QString)\0clean()\0proceedSlot()\0"
    "browseSlot()\0applyusersettings()\0"
    "psfile,page\0extractpage(QString,int)\0"
    "bboxProcess()\0readBboxOutput()\0"
    "params,psFile\0imgProcess(QString,QString)\0"
    "readImgOutput()\0readOutputForLog()\0"
};

void WebPublishDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebPublishDialog *_t = static_cast<WebPublishDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->init(); break;
        case 2: _t->convert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->RunCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4]))); break;
        case 4: _t->RunCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 5: _t->SlotEndProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->copyDataFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->removeFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->ps2gif((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 9: _t->writepages((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->fatalerror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->latexerror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->clean(); break;
        case 13: _t->proceedSlot(); break;
        case 14: _t->browseSlot(); break;
        case 15: _t->applyusersettings(); break;
        case 16: _t->extractpage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->bboxProcess(); break;
        case 18: _t->readBboxOutput(); break;
        case 19: _t->imgProcess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->readImgOutput(); break;
        case 21: _t->readOutputForLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebPublishDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebPublishDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WebPublishDialog,
      qt_meta_data_WebPublishDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebPublishDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebPublishDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebPublishDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebPublishDialog))
        return static_cast<void*>(const_cast< WebPublishDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WebPublishDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
