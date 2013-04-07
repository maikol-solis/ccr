/****************************************************************************
** Meta object code from reading C++ file 'buildmanager.h'
**
** Created: Sat Apr 6 13:28:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../buildmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buildmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BuildManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x05,
      67,   51,   13,   13, 0x05,
     125,  107,   13,   13, 0x05,
     183,  170,   13,   13, 0x25,
     245,  222,   13,   13, 0x05,
     297,  291,   13,   13, 0x05,
     363,  332,   13,   13, 0x05,
     439,  408,   13,   13, 0x05,
     505,  408,   13,   13, 0x05,
     569,  332,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     677,  617,  612,   13, 0x0a,
     783,  730,  612,   13, 0x2a,
     868,  827,  612,   13, 0x2a,
     937,  908,  612,   13, 0x2a,
     974,  967,   13,   13, 0x08,
    1003,  967,   13,   13, 0x08,
    1036,  967,   13,   13, 0x08,
    1063,  967,   13,   13, 0x08,
    1091,  967,   13,   13, 0x08,
    1123,  107,   13,   13, 0x08,
    1175,   13,   13,   13, 0x08,
    1211,   13,   13,   13, 0x08,

 // methods: signature, parameters, type, tag, flags
    1304, 1263, 1253,   13, 0x02,
    1396, 1367, 1253,   13, 0x22,
    1472, 1455, 1253,   13, 0x22,
    1561, 1521, 1253,   13, 0x02,
    1629, 1604, 1253,   13, 0x22,
    1669, 1667,  612,   13, 0x02,
    1695,   13,  612,   13, 0x02,
    1715,   13,   13,   13, 0x02,
    1739, 1736,  612,   13, 0x02,
    1789, 1781, 1773,   13, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_BuildManager[] = {
    "BuildManager\0\0message\0"
    "processNotification(QString)\0"
    "filename,source\0previewAvailable(QString,PreviewSource)\0"
    "cmdId,result,user\0"
    "commandLineRequested(QString,QString*,bool*)\0"
    "cmdId,result\0commandLineRequested(QString,QString*)\0"
    "cmdId,mainfile,options\0"
    "runInternalCommand(QString,QFileInfo,QString)\0"
    "rerun\0latexCompiled(LatexCompileResult*)\0"
    "commandMain,latex,pdf,asyncPdf\0"
    "beginRunningCommands(QString,bool,bool,bool)\0"
    "p,commandMain,subCommand,flags\0"
    "beginRunningSubCommand(ProcessX*,QString,QString,RunCommandFlags)\0"
    "endRunningSubCommand(ProcessX*,QString,QString,RunCommandFlags)\0"
    "endRunningCommands(QString,bool,bool,bool)\0"
    "bool\0unparsedCommandLine,mainFile,currentFile,currentLine,buffer\0"
    "runCommand(QString,QFileInfo,QFileInfo,int,QString*)\0"
    "unparsedCommandLine,mainFile,currentFile,currentLine\0"
    "runCommand(QString,QFileInfo,QFileInfo,int)\0"
    "unparsedCommandLine,mainFile,currentFile\0"
    "runCommand(QString,QFileInfo,QFileInfo)\0"
    "unparsedCommandLine,mainFile\0"
    "runCommand(QString,QFileInfo)\0status\0"
    "singleInstanceCompleted(int)\0"
    "preamblePrecompileCompleted(int)\0"
    "latexPreviewCompleted(int)\0"
    "dvi2psPreviewCompleted(int)\0"
    "conversionPreviewCompleted(int)\0"
    "commandLineRequestedDefault(QString,QString*,bool*)\0"
    "runInternalCommandThroughProcessX()\0"
    "emitEndRunningSubCommandFromProcessX(int)\0"
    "ProcessX*\0command,mainfile,currentFile,currentLine\0"
    "firstProcessOfDirectExpansion(QString,QFileInfo,QFileInfo,int)\0"
    "command,mainfile,currentFile\0"
    "firstProcessOfDirectExpansion(QString,QFileInfo,QFileInfo)\0"
    "command,mainfile\0"
    "firstProcessOfDirectExpansion(QString,QFileInfo)\0"
    "fullCommandLine,mainFile,singleInstance\0"
    "newProcessInternal(QString,QFileInfo,bool)\0"
    "fullCommandLine,mainFile\0"
    "newProcessInternal(QString,QFileInfo)\0"
    "p\0waitForProcess(ProcessX*)\0"
    "waitingForProcess()\0killCurrentProcess()\0"
    "id\0isCommandDirectlyDefined(QString)\0"
    "QString\0id,user\0getCommandLine(QString,bool*)\0"
};

void BuildManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BuildManager *_t = static_cast<BuildManager *>(_o);
        switch (_id) {
        case 0: _t->processNotification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->previewAvailable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const PreviewSource(*)>(_a[2]))); break;
        case 2: _t->commandLineRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 3: _t->commandLineRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 4: _t->runInternalCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->latexCompiled((*reinterpret_cast< LatexCompileResult*(*)>(_a[1]))); break;
        case 6: _t->beginRunningCommands((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->beginRunningSubCommand((*reinterpret_cast< ProcessX*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const RunCommandFlags(*)>(_a[4]))); break;
        case 8: _t->endRunningSubCommand((*reinterpret_cast< ProcessX*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const RunCommandFlags(*)>(_a[4]))); break;
        case 9: _t->endRunningCommands((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: { bool _r = _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QFileInfo(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QFileInfo(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QFileInfo(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->singleInstanceCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->preamblePrecompileCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->latexPreviewCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->dvi2psPreviewCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->conversionPreviewCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->commandLineRequestedDefault((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 20: _t->runInternalCommandThroughProcessX(); break;
        case 21: _t->emitEndRunningSubCommandFromProcessX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: { ProcessX* _r = _t->firstProcessOfDirectExpansion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QFileInfo(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ProcessX**>(_a[0]) = _r; }  break;
        case 23: { ProcessX* _r = _t->firstProcessOfDirectExpansion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< const QFileInfo(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ProcessX**>(_a[0]) = _r; }  break;
        case 24: { ProcessX* _r = _t->firstProcessOfDirectExpansion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ProcessX**>(_a[0]) = _r; }  break;
        case 25: { ProcessX* _r = _t->newProcessInternal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ProcessX**>(_a[0]) = _r; }  break;
        case 26: { ProcessX* _r = _t->newProcessInternal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ProcessX**>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->waitForProcess((*reinterpret_cast< ProcessX*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->waitingForProcess();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->killCurrentProcess(); break;
        case 30: { bool _r = _t->isCommandDirectlyDefined((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->getCommandLine((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BuildManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BuildManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BuildManager,
      qt_meta_data_BuildManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BuildManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BuildManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BuildManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BuildManager))
        return static_cast<void*>(const_cast< BuildManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BuildManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void BuildManager::processNotification(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BuildManager::previewAvailable(const QString & _t1, const PreviewSource & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BuildManager::commandLineRequested(const QString & _t1, QString * _t2, bool * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void BuildManager::runInternalCommand(const QString & _t1, const QFileInfo & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BuildManager::latexCompiled(LatexCompileResult * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BuildManager::beginRunningCommands(const QString & _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BuildManager::beginRunningSubCommand(ProcessX * _t1, const QString & _t2, const QString & _t3, const RunCommandFlags & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BuildManager::endRunningSubCommand(ProcessX * _t1, const QString & _t2, const QString & _t3, const RunCommandFlags & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BuildManager::endRunningCommands(const QString & _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
static const uint qt_meta_data_ProcessX[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x05,
      52,   47,    9,    9, 0x05,
      80,   47,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,    9,    9,    9, 0x08,
     125,  119,    9,    9, 0x08,
     157,  119,    9,    9, 0x08,
     173,    9,    9,    9, 0x08,
     204,  198,    9,    9, 0x08,
     232,    9,    9,    9, 0x28,

 // methods: signature, parameters, type, tag, flags
     260,    9,  256,    9, 0x02,
     273,    9,  256,    9, 0x02,
     292,    9,  284,    9, 0x02,
     319,    9,  284,    9, 0x02,
     356,  350,  345,    9, 0x02,
     377,    9,  345,    9, 0x22,

       0        // eod
};

static const char qt_meta_stringdata_ProcessX[] = {
    "ProcessX\0\0message\0processNotification(QString)\0"
    "data\0standardOutputRead(QString)\0"
    "standardErrorRead(QString)\0onStarted()\0"
    "error\0onError(QProcess::ProcessError)\0"
    "onFinished(int)\0readFromStandardOutput()\0"
    "force\0readFromStandardError(bool)\0"
    "readFromStandardError()\0int\0exitStatus()\0"
    "exitCode()\0QString\0readAllStandardOutputStr()\0"
    "readAllStandardErrorStr()\0bool\0msecs\0"
    "waitForFinished(int)\0waitForFinished()\0"
};

void ProcessX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProcessX *_t = static_cast<ProcessX *>(_o);
        switch (_id) {
        case 0: _t->processNotification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->standardOutputRead((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->standardErrorRead((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onStarted(); break;
        case 4: _t->onError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->onFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->readFromStandardOutput(); break;
        case 7: _t->readFromStandardError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->readFromStandardError(); break;
        case 9: { int _r = _t->exitStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->exitCode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->readAllStandardOutputStr();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->readAllStandardErrorStr();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->waitForFinished((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->waitForFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProcessX::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProcessX::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_ProcessX,
      qt_meta_data_ProcessX, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProcessX::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProcessX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProcessX::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessX))
        return static_cast<void*>(const_cast< ProcessX*>(this));
    return QProcess::qt_metacast(_clname);
}

int ProcessX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ProcessX::processNotification(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProcessX::standardOutputRead(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProcessX::standardErrorRead(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
