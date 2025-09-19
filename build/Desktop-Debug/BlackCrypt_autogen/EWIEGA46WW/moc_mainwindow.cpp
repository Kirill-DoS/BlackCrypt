/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[31];
    char stringdata5[32];
    char stringdata6[33];
    char stringdata7[34];
    char stringdata8[30];
    char stringdata9[29];
    char stringdata10[30];
    char stringdata11[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 31),  // "on_operation_comboBox_activated"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 5),  // "index"
        QT_MOC_LITERAL(50, 30),  // "on_algoritm_comboBox_activated"
        QT_MOC_LITERAL(81, 31),  // "on_input_lineEdit_returnPressed"
        QT_MOC_LITERAL(113, 32),  // "on_output_lineEdit_returnPressed"
        QT_MOC_LITERAL(146, 33),  // "on_keyfile_lineEdit_returnPre..."
        QT_MOC_LITERAL(180, 29),  // "on_execute_pushButton_clicked"
        QT_MOC_LITERAL(210, 28),  // "on_browseInputButton_clicked"
        QT_MOC_LITERAL(239, 29),  // "on_browseOutputButton_clicked"
        QT_MOC_LITERAL(269, 30)   // "on_browseKeyfileButton_clicked"
    },
    "MainWindow",
    "on_operation_comboBox_activated",
    "",
    "index",
    "on_algoritm_comboBox_activated",
    "on_input_lineEdit_returnPressed",
    "on_output_lineEdit_returnPressed",
    "on_keyfile_lineEdit_returnPressed",
    "on_execute_pushButton_clicked",
    "on_browseInputButton_clicked",
    "on_browseOutputButton_clicked",
    "on_browseKeyfileButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    1 /* Private */,
       4,    1,   71,    2, 0x08,    3 /* Private */,
       5,    0,   74,    2, 0x08,    5 /* Private */,
       6,    0,   75,    2, 0x08,    6 /* Private */,
       7,    0,   76,    2, 0x08,    7 /* Private */,
       8,    0,   77,    2, 0x08,    8 /* Private */,
       9,    0,   78,    2, 0x08,    9 /* Private */,
      10,    0,   79,    2, 0x08,   10 /* Private */,
      11,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_operation_comboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_algoritm_comboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_input_lineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_output_lineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_keyfile_lineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_execute_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_browseInputButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_browseOutputButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_browseKeyfileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_operation_comboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_algoritm_comboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_input_lineEdit_returnPressed(); break;
        case 3: _t->on_output_lineEdit_returnPressed(); break;
        case 4: _t->on_keyfile_lineEdit_returnPressed(); break;
        case 5: _t->on_execute_pushButton_clicked(); break;
        case 6: _t->on_browseInputButton_clicked(); break;
        case 7: _t->on_browseOutputButton_clicked(); break;
        case 8: _t->on_browseKeyfileButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
