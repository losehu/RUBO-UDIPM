/****************************************************************************
** Meta object code from reading C++ file 'udm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../udm.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udm.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_UdmWindow_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[18];
    char stringdata5[18];
    char stringdata6[23];
    char stringdata7[27];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_UdmWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_UdmWindow_t qt_meta_stringdata_UdmWindow = {
    {
        QT_MOC_LITERAL(0, 9),  // "UdmWindow"
        QT_MOC_LITERAL(10, 8),  // "menushow"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 10),  // "receiveudm"
        QT_MOC_LITERAL(31, 17),  // "on_exit_triggered"
        QT_MOC_LITERAL(49, 17),  // "on_back_triggered"
        QT_MOC_LITERAL(67, 22),  // "on_radioButton_clicked"
        QT_MOC_LITERAL(90, 26),  // "on_radioButton_pic_clicked"
        QT_MOC_LITERAL(117, 19)   // "on_action_triggered"
    },
    "UdmWindow",
    "menushow",
    "",
    "receiveudm",
    "on_exit_triggered",
    "on_back_triggered",
    "on_radioButton_clicked",
    "on_radioButton_pic_clicked",
    "on_action_triggered"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_UdmWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UdmWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UdmWindow.offsetsAndSizes,
    qt_meta_data_UdmWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_UdmWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UdmWindow, std::true_type>,
        // method 'menushow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveudm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_pic_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UdmWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UdmWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->menushow(); break;
        case 1: _t->receiveudm(); break;
        case 2: _t->on_exit_triggered(); break;
        case 3: _t->on_back_triggered(); break;
        case 4: _t->on_radioButton_clicked(); break;
        case 5: _t->on_radioButton_pic_clicked(); break;
        case 6: _t->on_action_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UdmWindow::*)();
            if (_t _q_method = &UdmWindow::menushow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *UdmWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdmWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UdmWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UdmWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UdmWindow::menushow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
