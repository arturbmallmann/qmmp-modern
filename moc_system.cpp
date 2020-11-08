/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "system.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_System_t {
    QByteArrayData data[92];
    char stringdata0[867];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_System_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_System_t qt_meta_stringdata_System = {
    {
QT_MOC_LITERAL(0, 0, 6), // "System"
QT_MOC_LITERAL(1, 7, 7), // "playing"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 6), // "paused"
QT_MOC_LITERAL(4, 23, 7), // "stopped"
QT_MOC_LITERAL(5, 31, 7), // "resumed"
QT_MOC_LITERAL(6, 39, 13), // "volumeChanged"
QT_MOC_LITERAL(7, 53, 12), // "VariableList"
QT_MOC_LITERAL(8, 66, 4), // "args"
QT_MOC_LITERAL(9, 71, 8), // "previous"
QT_MOC_LITERAL(10, 80, 4), // "play"
QT_MOC_LITERAL(11, 85, 5), // "pause"
QT_MOC_LITERAL(12, 91, 4), // "stop"
QT_MOC_LITERAL(13, 96, 4), // "next"
QT_MOC_LITERAL(14, 101, 5), // "eject"
QT_MOC_LITERAL(15, 107, 9), // "className"
QT_MOC_LITERAL(16, 117, 2), // "id"
QT_MOC_LITERAL(17, 120, 11), // "scriptGroup"
QT_MOC_LITERAL(18, 132, 6), // "Group*"
QT_MOC_LITERAL(19, 139, 14), // "playItemString"
QT_MOC_LITERAL(20, 154, 22), // "playItemMetaDataString"
QT_MOC_LITERAL(21, 177, 4), // "type"
QT_MOC_LITERAL(22, 182, 14), // "playItemLength"
QT_MOC_LITERAL(23, 197, 10), // "messageBox"
QT_MOC_LITERAL(24, 208, 7), // "message"
QT_MOC_LITERAL(25, 216, 5), // "title"
QT_MOC_LITERAL(26, 222, 5), // "flags"
QT_MOC_LITERAL(27, 228, 11), // "configEntry"
QT_MOC_LITERAL(28, 240, 6), // "volume"
QT_MOC_LITERAL(29, 247, 9), // "setVolume"
QT_MOC_LITERAL(30, 257, 5), // "value"
QT_MOC_LITERAL(31, 263, 4), // "seek"
QT_MOC_LITERAL(32, 268, 8), // "position"
QT_MOC_LITERAL(33, 277, 14), // "runtimeVersion"
QT_MOC_LITERAL(34, 292, 6), // "status"
QT_MOC_LITERAL(35, 299, 10), // "privateInt"
QT_MOC_LITERAL(36, 310, 7), // "section"
QT_MOC_LITERAL(37, 318, 3), // "key"
QT_MOC_LITERAL(38, 322, 12), // "defaultValue"
QT_MOC_LITERAL(39, 335, 13), // "setPrivateInt"
QT_MOC_LITERAL(40, 349, 13), // "privateString"
QT_MOC_LITERAL(41, 363, 16), // "setPrivateString"
QT_MOC_LITERAL(42, 380, 7), // "integer"
QT_MOC_LITERAL(43, 388, 8), // "fraction"
QT_MOC_LITERAL(44, 397, 12), // "stringLength"
QT_MOC_LITERAL(45, 410, 6), // "string"
QT_MOC_LITERAL(46, 417, 11), // "stringUpper"
QT_MOC_LITERAL(47, 429, 11), // "stringLower"
QT_MOC_LITERAL(48, 441, 15), // "integerToString"
QT_MOC_LITERAL(49, 457, 15), // "stringToInteger"
QT_MOC_LITERAL(50, 473, 6), // "number"
QT_MOC_LITERAL(51, 480, 13), // "floatToString"
QT_MOC_LITERAL(52, 494, 9), // "precision"
QT_MOC_LITERAL(53, 504, 13), // "stringToFloat"
QT_MOC_LITERAL(54, 518, 17), // "integerToLongTime"
QT_MOC_LITERAL(55, 536, 13), // "integerToTime"
QT_MOC_LITERAL(56, 550, 12), // "MetaDataType"
QT_MOC_LITERAL(57, 563, 5), // "TITLE"
QT_MOC_LITERAL(58, 569, 5), // "ALBUM"
QT_MOC_LITERAL(59, 575, 6), // "ARTIST"
QT_MOC_LITERAL(60, 582, 11), // "ALBUMARTIST"
QT_MOC_LITERAL(61, 594, 7), // "COMMENT"
QT_MOC_LITERAL(62, 602, 4), // "YEAR"
QT_MOC_LITERAL(63, 607, 8), // "COMPOSER"
QT_MOC_LITERAL(64, 616, 5), // "GENRE"
QT_MOC_LITERAL(65, 622, 5), // "TRACK"
QT_MOC_LITERAL(66, 628, 4), // "DISC"
QT_MOC_LITERAL(67, 633, 21), // "REPLAYGAIN_TRACK_GAIN"
QT_MOC_LITERAL(68, 655, 21), // "REPLAYGAIN_ALBUM_GAIN"
QT_MOC_LITERAL(69, 677, 21), // "REPLAYGAIN_TRACK_PEAK"
QT_MOC_LITERAL(70, 699, 21), // "REPLAYGAIN_ALBUM_PEAK"
QT_MOC_LITERAL(71, 721, 6), // "LENGTH"
QT_MOC_LITERAL(72, 728, 7), // "BITRATE"
QT_MOC_LITERAL(73, 736, 5), // "SRATE"
QT_MOC_LITERAL(74, 742, 6), // "STEREO"
QT_MOC_LITERAL(75, 749, 3), // "VBR"
QT_MOC_LITERAL(76, 753, 4), // "GAIN"
QT_MOC_LITERAL(77, 758, 3), // "BPM"
QT_MOC_LITERAL(78, 762, 9), // "CONDUCTOR"
QT_MOC_LITERAL(79, 772, 3), // "KEY"
QT_MOC_LITERAL(80, 776, 4), // "MOOD"
QT_MOC_LITERAL(81, 781, 8), // "SUBTITLE"
QT_MOC_LITERAL(82, 790, 8), // "LYRICIST"
QT_MOC_LITERAL(83, 799, 4), // "ISRC"
QT_MOC_LITERAL(84, 804, 5), // "MEDIA"
QT_MOC_LITERAL(85, 810, 7), // "REMIXER"
QT_MOC_LITERAL(86, 818, 7), // "ENCODER"
QT_MOC_LITERAL(87, 826, 9), // "PUBLISHER"
QT_MOC_LITERAL(88, 836, 4), // "TOOL"
QT_MOC_LITERAL(89, 841, 6), // "PREGAP"
QT_MOC_LITERAL(90, 848, 7), // "POSTGAP"
QT_MOC_LITERAL(91, 856, 10) // "NUMSAMPLES"

    },
    "System\0playing\0\0paused\0stopped\0resumed\0"
    "volumeChanged\0VariableList\0args\0"
    "previous\0play\0pause\0stop\0next\0eject\0"
    "className\0id\0scriptGroup\0Group*\0"
    "playItemString\0playItemMetaDataString\0"
    "type\0playItemLength\0messageBox\0message\0"
    "title\0flags\0configEntry\0volume\0setVolume\0"
    "value\0seek\0position\0runtimeVersion\0"
    "status\0privateInt\0section\0key\0"
    "defaultValue\0setPrivateInt\0privateString\0"
    "setPrivateString\0integer\0fraction\0"
    "stringLength\0string\0stringUpper\0"
    "stringLower\0integerToString\0stringToInteger\0"
    "number\0floatToString\0precision\0"
    "stringToFloat\0integerToLongTime\0"
    "integerToTime\0MetaDataType\0TITLE\0ALBUM\0"
    "ARTIST\0ALBUMARTIST\0COMMENT\0YEAR\0"
    "COMPOSER\0GENRE\0TRACK\0DISC\0"
    "REPLAYGAIN_TRACK_GAIN\0REPLAYGAIN_ALBUM_GAIN\0"
    "REPLAYGAIN_TRACK_PEAK\0REPLAYGAIN_ALBUM_PEAK\0"
    "LENGTH\0BITRATE\0SRATE\0STEREO\0VBR\0GAIN\0"
    "BPM\0CONDUCTOR\0KEY\0MOOD\0SUBTITLE\0"
    "LYRICIST\0ISRC\0MEDIA\0REMIXER\0ENCODER\0"
    "PUBLISHER\0TOOL\0PREGAP\0POSTGAP\0NUMSAMPLES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_System[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       1,  312, // properties
       1,  315, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x06 /* Public */,
       3,    0,  210,    2, 0x06 /* Public */,
       4,    0,  211,    2, 0x06 /* Public */,
       5,    0,  212,    2, 0x06 /* Public */,
       6,    1,  213,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  216,    2, 0x0a /* Public */,
      10,    0,  217,    2, 0x0a /* Public */,
      11,    0,  218,    2, 0x0a /* Public */,
      12,    0,  219,    2, 0x0a /* Public */,
      13,    0,  220,    2, 0x0a /* Public */,
      14,    0,  221,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  222,    2, 0x02 /* Public */,
      16,    0,  223,    2, 0x02 /* Public */,
      17,    0,  224,    2, 0x02 /* Public */,
      19,    0,  225,    2, 0x02 /* Public */,
      20,    1,  226,    2, 0x02 /* Public */,
      22,    0,  229,    2, 0x02 /* Public */,
      23,    4,  230,    2, 0x02 /* Public */,
      28,    0,  239,    2, 0x02 /* Public */,
      29,    1,  240,    2, 0x02 /* Public */,
      31,    1,  243,    2, 0x02 /* Public */,
      32,    0,  246,    2, 0x02 /* Public */,
      33,    0,  247,    2, 0x02 /* Public */,
      34,    0,  248,    2, 0x02 /* Public */,
      35,    3,  249,    2, 0x02 /* Public */,
      39,    3,  256,    2, 0x02 /* Public */,
      40,    3,  263,    2, 0x02 /* Public */,
      41,    3,  270,    2, 0x02 /* Public */,
      42,    1,  277,    2, 0x02 /* Public */,
      43,    1,  280,    2, 0x02 /* Public */,
      44,    1,  283,    2, 0x02 /* Public */,
      46,    1,  286,    2, 0x02 /* Public */,
      47,    1,  289,    2, 0x02 /* Public */,
      48,    1,  292,    2, 0x02 /* Public */,
      49,    1,  295,    2, 0x02 /* Public */,
      51,    2,  298,    2, 0x02 /* Public */,
      53,    1,  303,    2, 0x02 /* Public */,
      54,    1,  306,    2, 0x02 /* Public */,
      55,    1,  309,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 18,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   21,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,   24,   25,   26,   27,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Int,
    QMetaType::Double,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   36,   37,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   36,   37,   30,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   37,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   37,   30,
    QMetaType::Int, QMetaType::Double,   30,
    QMetaType::Double, QMetaType::Double,   30,
    QMetaType::Int, QMetaType::QString,   45,
    QMetaType::QString, QMetaType::QString,   45,
    QMetaType::QString, QMetaType::QString,   45,
    QMetaType::QString, QMetaType::Int,   30,
    QMetaType::Int, QMetaType::QString,   50,
    QMetaType::QString, QMetaType::Float, QMetaType::Int,   30,   52,
    QMetaType::Float, QMetaType::QString,   50,
    QMetaType::QString, QMetaType::Int,   30,
    QMetaType::QString, QMetaType::Int,   30,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
      56, 0x0,   35,  319,

 // enum data: key, value
      57, uint(System::TITLE),
      58, uint(System::ALBUM),
      59, uint(System::ARTIST),
      60, uint(System::ALBUMARTIST),
      61, uint(System::COMMENT),
      62, uint(System::YEAR),
      63, uint(System::COMPOSER),
      64, uint(System::GENRE),
      65, uint(System::TRACK),
      66, uint(System::DISC),
      67, uint(System::REPLAYGAIN_TRACK_GAIN),
      68, uint(System::REPLAYGAIN_ALBUM_GAIN),
      69, uint(System::REPLAYGAIN_TRACK_PEAK),
      70, uint(System::REPLAYGAIN_ALBUM_PEAK),
      71, uint(System::LENGTH),
      72, uint(System::BITRATE),
      73, uint(System::SRATE),
      74, uint(System::STEREO),
      75, uint(System::VBR),
      76, uint(System::GAIN),
      77, uint(System::BPM),
      78, uint(System::CONDUCTOR),
      79, uint(System::KEY),
      80, uint(System::MOOD),
      81, uint(System::SUBTITLE),
      82, uint(System::LYRICIST),
      83, uint(System::ISRC),
      84, uint(System::MEDIA),
      85, uint(System::REMIXER),
      86, uint(System::ENCODER),
      87, uint(System::PUBLISHER),
      88, uint(System::TOOL),
      89, uint(System::PREGAP),
      90, uint(System::POSTGAP),
      91, uint(System::NUMSAMPLES),

       0        // eod
};

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        System *_t = static_cast<System *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playing(); break;
        case 1: _t->paused(); break;
        case 2: _t->stopped(); break;
        case 3: _t->resumed(); break;
        case 4: _t->volumeChanged((*reinterpret_cast< VariableList(*)>(_a[1]))); break;
        case 5: _t->previous(); break;
        case 6: _t->play(); break;
        case 7: _t->pause(); break;
        case 8: _t->stop(); break;
        case 9: _t->next(); break;
        case 10: _t->eject(); break;
        case 11: { QString _r = _t->className();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->id();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { Group* _r = _t->scriptGroup();
            if (_a[0]) *reinterpret_cast< Group**>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->playItemString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->playItemMetaDataString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->playItemLength();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->messageBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->volume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: { int _r = _t->position();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: { double _r = _t->runtimeVersion();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 23: { int _r = _t->status();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 24: { int _r = _t->privateInt((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setPrivateInt((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: { QString _r = _t->privateString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setPrivateString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 28: { int _r = _t->integer((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 29: { double _r = _t->fraction((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 30: { int _r = _t->stringLength((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 31: { QString _r = _t->stringUpper((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 32: { QString _r = _t->stringLower((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 33: { QString _r = _t->integerToString((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 34: { int _r = _t->stringToInteger((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: { QString _r = _t->floatToString((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: { float _r = _t->stringToFloat((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->integerToLongTime((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->integerToTime((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (System::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::playing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (System::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::paused)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (System::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::stopped)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (System::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::resumed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (System::*_t)(VariableList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::volumeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        System *_t = static_cast<System *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_id; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        System *_t = static_cast<System *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject System::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_System.data,
      qt_meta_data_System,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_System.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void System::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void System::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void System::volumeChanged(VariableList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
