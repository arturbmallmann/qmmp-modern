/****************************************************************************
** Meta object code from reading C++ file 'bitmapfont.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bitmapfont.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitmapfont.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitmapFont_t {
    QByteArrayData data[9];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitmapFont_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitmapFont_t qt_meta_stringdata_BitmapFont = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitmapFont"
QT_MOC_LITERAL(1, 11, 9), // "className"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "id"
QT_MOC_LITERAL(4, 25, 4), // "file"
QT_MOC_LITERAL(5, 30, 9), // "charwidth"
QT_MOC_LITERAL(6, 40, 10), // "charheight"
QT_MOC_LITERAL(7, 51, 8), // "hspacing"
QT_MOC_LITERAL(8, 60, 8) // "vspacing"

    },
    "BitmapFont\0className\0\0id\0file\0charwidth\0"
    "charheight\0hspacing\0vspacing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitmapFont[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::Int, 0x00095003,
       6, QMetaType::Int, 0x00095003,
       7, QMetaType::Int, 0x00095003,
       8, QMetaType::Int, 0x00095003,

       0        // eod
};

void BitmapFont::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitmapFont *_t = static_cast<BitmapFont *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->className();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->id();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BitmapFont *_t = static_cast<BitmapFont *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_file; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->m_charWidth; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_charHeight; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->m_hSpacing; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->m_vSpacing; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BitmapFont *_t = static_cast<BitmapFont *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFile(*reinterpret_cast< QString*>(_v)); break;
        case 2:
            if (_t->m_charWidth != *reinterpret_cast< int*>(_v)) {
                _t->m_charWidth = *reinterpret_cast< int*>(_v);
            }
            break;
        case 3:
            if (_t->m_charHeight != *reinterpret_cast< int*>(_v)) {
                _t->m_charHeight = *reinterpret_cast< int*>(_v);
            }
            break;
        case 4:
            if (_t->m_hSpacing != *reinterpret_cast< int*>(_v)) {
                _t->m_hSpacing = *reinterpret_cast< int*>(_v);
            }
            break;
        case 5:
            if (_t->m_vSpacing != *reinterpret_cast< int*>(_v)) {
                _t->m_vSpacing = *reinterpret_cast< int*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BitmapFont::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BitmapFont.data,
      qt_meta_data_BitmapFont,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BitmapFont::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitmapFont::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitmapFont.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BitmapFont::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
