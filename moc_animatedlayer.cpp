/****************************************************************************
** Meta object code from reading C++ file 'animatedlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animatedlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animatedlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimatedLayer_t {
    QByteArrayData data[16];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimatedLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimatedLayer_t qt_meta_stringdata_AnimatedLayer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AnimatedLayer"
QT_MOC_LITERAL(1, 14, 11), // "framesCount"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "setFrame"
QT_MOC_LITERAL(4, 36, 6), // "number"
QT_MOC_LITERAL(5, 43, 5), // "image"
QT_MOC_LITERAL(6, 49, 11), // "frameheight"
QT_MOC_LITERAL(7, 61, 10), // "framewidth"
QT_MOC_LITERAL(8, 72, 13), // "elementframes"
QT_MOC_LITERAL(9, 86, 5), // "start"
QT_MOC_LITERAL(10, 92, 3), // "end"
QT_MOC_LITERAL(11, 96, 5), // "speed"
QT_MOC_LITERAL(12, 102, 8), // "realtime"
QT_MOC_LITERAL(13, 111, 10), // "autoreplay"
QT_MOC_LITERAL(14, 122, 8), // "autoplay"
QT_MOC_LITERAL(15, 131, 5) // "debug"

    },
    "AnimatedLayer\0framesCount\0\0setFrame\0"
    "number\0image\0frameheight\0framewidth\0"
    "elementframes\0start\0end\0speed\0realtime\0"
    "autoreplay\0autoplay\0debug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimatedLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      11,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    1,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::Int, 0x00095003,
       7, QMetaType::Int, 0x00095003,
       8, QMetaType::Int, 0x00095003,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Bool, 0x00095003,
      13, QMetaType::Bool, 0x00095003,
      14, QMetaType::Bool, 0x00095003,
      15, QMetaType::Bool, 0x00095103,

       0        // eod
};

void AnimatedLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimatedLayer *_t = static_cast<AnimatedLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->framesCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AnimatedLayer *_t = static_cast<AnimatedLayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_fileId; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->m_frameHeight; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->m_frameWidth; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_elementFrames; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->m_start; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->m_end; break;
        case 6: *reinterpret_cast< int*>(_v) = _t->m_speed; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_realtime; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->m_autoReplay; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->m_autoPlay; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->m_debug; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AnimatedLayer *_t = static_cast<AnimatedLayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImage(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFrameHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFrameWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setElementFrames(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setStart(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setEnd(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setSpeed(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setRealTime(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setAutoReplay(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAutoPlay(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDebug(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AnimatedLayer::staticMetaObject = {
    { &Layer::staticMetaObject, qt_meta_stringdata_AnimatedLayer.data,
      qt_meta_data_AnimatedLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AnimatedLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimatedLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnimatedLayer.stringdata0))
        return static_cast<void*>(this);
    return Layer::qt_metacast(_clname);
}

int AnimatedLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Layer::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
