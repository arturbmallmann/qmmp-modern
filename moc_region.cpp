/****************************************************************************
** Meta object code from reading C++ file 'region.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "region.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'region.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Region_t {
    QByteArrayData data[10];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Region_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Region_t qt_meta_stringdata_Region = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Region"
QT_MOC_LITERAL(1, 7, 11), // "loadFromMap"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "Map*"
QT_MOC_LITERAL(4, 25, 3), // "map"
QT_MOC_LITERAL(5, 29, 9), // "threshold"
QT_MOC_LITERAL(6, 39, 8), // "reversed"
QT_MOC_LITERAL(7, 48, 14), // "loadFromBitmap"
QT_MOC_LITERAL(8, 63, 2), // "id"
QT_MOC_LITERAL(9, 66, 6) // "parent"

    },
    "Region\0loadFromMap\0\0Map*\0map\0threshold\0"
    "reversed\0loadFromBitmap\0id\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Region[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   38, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x02 /* Public */,
       7,    1,   31,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    9,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   34,    2, 0x0e /* Public */,
       0,    0,   37,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void Region::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Region *_r = new Region((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { Region *_r = new Region();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Region *_t = static_cast<Region *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadFromMap((*reinterpret_cast< Map*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->loadFromBitmap((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Region::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Region.data,
      qt_meta_data_Region,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Region::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Region::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Region.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Region::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
