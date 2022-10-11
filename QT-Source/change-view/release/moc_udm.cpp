/****************************************************************************
** Meta object code from reading C++ file 'udm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../UDM/udm.h"
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
    uint offsetsAndSizes[30];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[2];
    char stringdata5[11];
    char stringdata6[18];
    char stringdata7[18];
    char stringdata8[23];
    char stringdata9[27];
    char stringdata10[20];
    char stringdata11[30];
    char stringdata12[12];
    char stringdata13[30];
    char stringdata14[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_UdmWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_UdmWindow_t qt_meta_stringdata_UdmWindow = {
    {
        QT_MOC_LITERAL(0, 9),  // "UdmWindow"
        QT_MOC_LITERAL(10, 8),  // "menushow"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 9),  // "judge_int"
        QT_MOC_LITERAL(30, 1),  // "a"
        QT_MOC_LITERAL(32, 10),  // "receiveudm"
        QT_MOC_LITERAL(43, 17),  // "on_exit_triggered"
        QT_MOC_LITERAL(61, 17),  // "on_back_triggered"
        QT_MOC_LITERAL(79, 22),  // "on_radioButton_clicked"
        QT_MOC_LITERAL(102, 26),  // "on_radioButton_pic_clicked"
        QT_MOC_LITERAL(129, 19),  // "on_action_triggered"
        QT_MOC_LITERAL(149, 29),  // "on_pushButton_opendir_clicked"
        QT_MOC_LITERAL(179, 11),  // "timerUpdate"
        QT_MOC_LITERAL(191, 29),  // "on_pushButton_openpic_clicked"
        QT_MOC_LITERAL(221, 6)   // "doWork"
    },
    "UdmWindow",
    "menushow",
    "",
    "judge_int",
    "a",
    "receiveudm",
    "on_exit_triggered",
    "on_back_triggered",
    "on_radioButton_clicked",
    "on_radioButton_pic_clicked",
    "on_action_triggered",
    "on_pushButton_opendir_clicked",
    "timerUpdate",
    "on_pushButton_openpic_clicked",
    "doWork"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_UdmWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   87,    2, 0x08,    2 /* Private */,
       5,    0,   90,    2, 0x08,    4 /* Private */,
       6,    0,   91,    2, 0x08,    5 /* Private */,
       7,    0,   92,    2, 0x08,    6 /* Private */,
       8,    0,   93,    2, 0x08,    7 /* Private */,
       9,    0,   94,    2, 0x08,    8 /* Private */,
      10,    0,   95,    2, 0x08,    9 /* Private */,
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    0,   97,    2, 0x08,   11 /* Private */,
      13,    0,   98,    2, 0x08,   12 /* Private */,
      14,    0,   99,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'judge_int'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_opendir_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timerUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_openpic_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doWork'
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
        case 1: { bool _r = _t->judge_int((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->receiveudm(); break;
        case 3: _t->on_exit_triggered(); break;
        case 4: _t->on_back_triggered(); break;
        case 5: _t->on_radioButton_clicked(); break;
        case 6: _t->on_radioButton_pic_clicked(); break;
        case 7: _t->on_action_triggered(); break;
        case 8: _t->on_pushButton_opendir_clicked(); break;
        case 9: _t->timerUpdate(); break;
        case 10: _t->on_pushButton_openpic_clicked(); break;
        case 11: _t->doWork(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
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
