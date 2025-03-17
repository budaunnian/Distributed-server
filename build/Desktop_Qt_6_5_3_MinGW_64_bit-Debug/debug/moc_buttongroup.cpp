/****************************************************************************
** Meta object code from reading C++ file 'buttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../buttongroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSButtonGroupENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSButtonGroupENDCLASS = QtMocHelpers::stringData(
    "ButtonGroup",
    "sigMyFile",
    "",
    "sigShareList",
    "sigDownload",
    "sigTransform",
    "sigSwitchUser",
    "closeWindow",
    "minWindow",
    "maxWindow",
    "slotButtonClick",
    "Page",
    "cur",
    "text",
    "setParent",
    "QWidget*",
    "parent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSButtonGroupENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[10];
    char stringdata9[10];
    char stringdata10[16];
    char stringdata11[5];
    char stringdata12[4];
    char stringdata13[5];
    char stringdata14[10];
    char stringdata15[9];
    char stringdata16[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSButtonGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSButtonGroupENDCLASS_t qt_meta_stringdata_CLASSButtonGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ButtonGroup"
        QT_MOC_LITERAL(12, 9),  // "sigMyFile"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 12),  // "sigShareList"
        QT_MOC_LITERAL(36, 11),  // "sigDownload"
        QT_MOC_LITERAL(48, 12),  // "sigTransform"
        QT_MOC_LITERAL(61, 13),  // "sigSwitchUser"
        QT_MOC_LITERAL(75, 11),  // "closeWindow"
        QT_MOC_LITERAL(87, 9),  // "minWindow"
        QT_MOC_LITERAL(97, 9),  // "maxWindow"
        QT_MOC_LITERAL(107, 15),  // "slotButtonClick"
        QT_MOC_LITERAL(123, 4),  // "Page"
        QT_MOC_LITERAL(128, 3),  // "cur"
        QT_MOC_LITERAL(132, 4),  // "text"
        QT_MOC_LITERAL(137, 9),  // "setParent"
        QT_MOC_LITERAL(147, 8),  // "QWidget*"
        QT_MOC_LITERAL(156, 6)   // "parent"
    },
    "ButtonGroup",
    "sigMyFile",
    "",
    "sigShareList",
    "sigDownload",
    "sigTransform",
    "sigSwitchUser",
    "closeWindow",
    "minWindow",
    "maxWindow",
    "slotButtonClick",
    "Page",
    "cur",
    "text",
    "setParent",
    "QWidget*",
    "parent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSButtonGroupENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    0,   82,    2, 0x06,    3 /* Public */,
       5,    0,   83,    2, 0x06,    4 /* Public */,
       6,    0,   84,    2, 0x06,    5 /* Public */,
       7,    0,   85,    2, 0x06,    6 /* Public */,
       8,    0,   86,    2, 0x06,    7 /* Public */,
       9,    0,   87,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   88,    2, 0x0a,    9 /* Public */,
      10,    1,   91,    2, 0x0a,   11 /* Public */,
      14,    1,   94,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject ButtonGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSButtonGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSButtonGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSButtonGroupENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ButtonGroup, std::true_type>,
        // method 'sigMyFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigShareList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigTransform'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigSwitchUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Page, std::false_type>,
        // method 'slotButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setParent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void ButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ButtonGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigMyFile(); break;
        case 1: _t->sigShareList(); break;
        case 2: _t->sigDownload(); break;
        case 3: _t->sigTransform(); break;
        case 4: _t->sigSwitchUser(); break;
        case 5: _t->closeWindow(); break;
        case 6: _t->minWindow(); break;
        case 7: _t->maxWindow(); break;
        case 8: _t->slotButtonClick((*reinterpret_cast< std::add_pointer_t<Page>>(_a[1]))); break;
        case 9: _t->slotButtonClick((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setParent((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::sigMyFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::sigShareList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::sigDownload; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::sigTransform; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::sigSwitchUser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::closeWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::minWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ButtonGroup::*)();
            if (_t _q_method = &ButtonGroup::maxWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *ButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSButtonGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ButtonGroup::sigMyFile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ButtonGroup::sigShareList()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ButtonGroup::sigDownload()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ButtonGroup::sigTransform()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ButtonGroup::sigSwitchUser()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ButtonGroup::closeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ButtonGroup::minWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ButtonGroup::maxWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
