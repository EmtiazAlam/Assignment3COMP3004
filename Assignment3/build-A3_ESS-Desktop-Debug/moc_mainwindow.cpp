/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../A3_ESS/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_startSystem_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_passengerOne_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_passengerTwo_clicked"
QT_MOC_LITERAL(5, 83, 25), // "on_passengerThree_clicked"
QT_MOC_LITERAL(6, 109, 23), // "on_elevatorFire_clicked"
QT_MOC_LITERAL(7, 133, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(8, 155, 19), // "on_openDoor_clicked"
QT_MOC_LITERAL(9, 175, 20), // "on_closeDoor_clicked"
QT_MOC_LITERAL(10, 196, 25), // "on_overloadSystem_clicked"
QT_MOC_LITERAL(11, 222, 21), // "on_fireSystem_clicked"
QT_MOC_LITERAL(12, 244, 25), // "on_poweroutSystem_clicked"
QT_MOC_LITERAL(13, 270, 22), // "on_blockSystem_clicked"
QT_MOC_LITERAL(14, 293, 32), // "on_initialFloorPick_valueChanged"
QT_MOC_LITERAL(15, 326, 5), // "value"
QT_MOC_LITERAL(16, 332, 19), // "on_upButton_pressed"
QT_MOC_LITERAL(17, 352, 21), // "on_downButton_pressed"
QT_MOC_LITERAL(18, 374, 18), // "createFloorButtons"
QT_MOC_LITERAL(19, 393, 9), // "numFloors"
QT_MOC_LITERAL(20, 403, 15), // "createElevators"
QT_MOC_LITERAL(21, 419, 12) // "numElevators"

    },
    "MainWindow\0on_startSystem_clicked\0\0"
    "on_passengerOne_clicked\0on_passengerTwo_clicked\0"
    "on_passengerThree_clicked\0"
    "on_elevatorFire_clicked\0on_helpButton_clicked\0"
    "on_openDoor_clicked\0on_closeDoor_clicked\0"
    "on_overloadSystem_clicked\0"
    "on_fireSystem_clicked\0on_poweroutSystem_clicked\0"
    "on_blockSystem_clicked\0"
    "on_initialFloorPick_valueChanged\0value\0"
    "on_upButton_pressed\0on_downButton_pressed\0"
    "createFloorButtons\0numFloors\0"
    "createElevators\0numElevators"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    1,  111,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    1,  116,    2, 0x08 /* Private */,
      20,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_startSystem_clicked(); break;
        case 1: _t->on_passengerOne_clicked(); break;
        case 2: _t->on_passengerTwo_clicked(); break;
        case 3: _t->on_passengerThree_clicked(); break;
        case 4: _t->on_elevatorFire_clicked(); break;
        case 5: _t->on_helpButton_clicked(); break;
        case 6: _t->on_openDoor_clicked(); break;
        case 7: _t->on_closeDoor_clicked(); break;
        case 8: _t->on_overloadSystem_clicked(); break;
        case 9: _t->on_fireSystem_clicked(); break;
        case 10: _t->on_poweroutSystem_clicked(); break;
        case 11: _t->on_blockSystem_clicked(); break;
        case 12: _t->on_initialFloorPick_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_upButton_pressed(); break;
        case 14: _t->on_downButton_pressed(); break;
        case 15: _t->createFloorButtons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->createElevators((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
