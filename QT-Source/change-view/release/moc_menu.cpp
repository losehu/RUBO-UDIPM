/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../menu.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MenuWindow_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[10];
    char stringdata5[12];
    char stringdata6[22];
    char stringdata7[26];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MenuWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MenuWindow_t qt_meta_stringdata_MenuWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MenuWindow"
        QT_MOC_LITERAL(11, 7),  // "ipmshow"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 7),  // "udmshow"
        QT_MOC_LITERAL(28, 9),  // "udipmshow"
        QT_MOC_LITERAL(38, 11),  // "receivemenu"
        QT_MOC_LITERAL(50, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(72, 25),  // "on_action_about_triggered"
        QT_MOC_LITERAL(98, 24)   // "on_action_exit_triggered"
    },
    "MenuWindow",
    "ipmshow",
    "",
    "udmshow",
    "udipmshow",
    "receivemenu",
    "on_pushButton_clicked",
    "on_action_about_triggered",
    "on_action_exit_triggered"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MenuWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MenuWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MenuWindow.offsetsAndSizes,
    qt_meta_data_MenuWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MenuWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MenuWindow, std::true_type>,
        // method 'ipmshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'udmshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'udipmshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receivemenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_about_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_exit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MenuWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ipmshow(); break;
        case 1: _t->udmshow(); break;
        case 2: _t->udipmshow(); break;
        case 3: _t->receivemenu(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_action_about_triggered(); break;
        case 6: _t->on_action_exit_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuWindow::*)();
            if (_t _q_method = &MenuWindow::ipmshow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuWindow::*)();
            if (_t _q_method = &MenuWindow::udmshow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuWindow::*)();
            if (_t _q_method = &MenuWindow::udipmshow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *MenuWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MenuWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MenuWindow::ipmshow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MenuWindow::udmshow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MenuWindow::udipmshow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
