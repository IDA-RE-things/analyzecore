/****************************************************************************
** Meta object code from reading C++ file 'myactions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myactions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CoreCallbacks[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      31,   14,   14,   14, 0x08,
      43,   14,   14,   14, 0x08,
      59,   14,   14,   14, 0x08,
      77,   14,   14,   14, 0x08,
      96,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CoreCallbacks[] = {
    "CoreCallbacks\0\0connect_rexec()\0"
    "dbg_stack()\0dbg_registers()\0"
    "dbg_shared_libs()\0dbg_frame_select()\0"
    "dbg_curr_frame()\0"
};

void CoreCallbacks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CoreCallbacks *_t = static_cast<CoreCallbacks *>(_o);
        switch (_id) {
        case 0: _t->connect_rexec(); break;
        case 1: _t->dbg_stack(); break;
        case 2: _t->dbg_registers(); break;
        case 3: _t->dbg_shared_libs(); break;
        case 4: _t->dbg_frame_select(); break;
        case 5: _t->dbg_curr_frame(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CoreCallbacks::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CoreCallbacks::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoreCallbacks,
      qt_meta_data_CoreCallbacks, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CoreCallbacks::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CoreCallbacks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CoreCallbacks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoreCallbacks))
        return static_cast<void*>(const_cast< CoreCallbacks*>(this));
    return QObject::qt_metacast(_clname);
}

int CoreCallbacks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
