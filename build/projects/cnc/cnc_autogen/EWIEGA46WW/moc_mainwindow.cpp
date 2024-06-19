/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../projects/cnc/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[510];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_toolButton_fit_all_pressed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 32), // "on_toolButton_view_front_pressed"
QT_MOC_LITERAL(4, 75, 31), // "on_toolButton_view_back_pressed"
QT_MOC_LITERAL(5, 107, 30), // "on_toolButton_view_top_pressed"
QT_MOC_LITERAL(6, 138, 33), // "on_toolButton_view_bottom_pre..."
QT_MOC_LITERAL(7, 172, 31), // "on_toolButton_view_left_pressed"
QT_MOC_LITERAL(8, 204, 32), // "on_toolButton_view_right_pressed"
QT_MOC_LITERAL(9, 237, 29), // "on_toolButton_view_3d_pressed"
QT_MOC_LITERAL(10, 267, 30), // "on_toolButton_zoom_min_pressed"
QT_MOC_LITERAL(11, 298, 31), // "on_toolButton_zoom_plus_pressed"
QT_MOC_LITERAL(12, 330, 31), // "on_toolButton_file_open_pressed"
QT_MOC_LITERAL(13, 362, 26), // "on_pushButton_open_pressed"
QT_MOC_LITERAL(14, 389, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(15, 411, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(16, 441, 4), // "arg1"
QT_MOC_LITERAL(17, 446, 31), // "on_doubleSpinBox_2_valueChanged"
QT_MOC_LITERAL(18, 478, 31) // "on_doubleSpinBox_3_valueChanged"

    },
    "MainWindow\0on_toolButton_fit_all_pressed\0"
    "\0on_toolButton_view_front_pressed\0"
    "on_toolButton_view_back_pressed\0"
    "on_toolButton_view_top_pressed\0"
    "on_toolButton_view_bottom_pressed\0"
    "on_toolButton_view_left_pressed\0"
    "on_toolButton_view_right_pressed\0"
    "on_toolButton_view_3d_pressed\0"
    "on_toolButton_zoom_min_pressed\0"
    "on_toolButton_zoom_plus_pressed\0"
    "on_toolButton_file_open_pressed\0"
    "on_pushButton_open_pressed\0"
    "on_pushButton_pressed\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_doubleSpinBox_2_valueChanged\0"
    "on_doubleSpinBox_3_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      17,    1,  110,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   16,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toolButton_fit_all_pressed(); break;
        case 1: _t->on_toolButton_view_front_pressed(); break;
        case 2: _t->on_toolButton_view_back_pressed(); break;
        case 3: _t->on_toolButton_view_top_pressed(); break;
        case 4: _t->on_toolButton_view_bottom_pressed(); break;
        case 5: _t->on_toolButton_view_left_pressed(); break;
        case 6: _t->on_toolButton_view_right_pressed(); break;
        case 7: _t->on_toolButton_view_3d_pressed(); break;
        case 8: _t->on_toolButton_zoom_min_pressed(); break;
        case 9: _t->on_toolButton_zoom_plus_pressed(); break;
        case 10: _t->on_toolButton_file_open_pressed(); break;
        case 11: _t->on_pushButton_open_pressed(); break;
        case 12: _t->on_pushButton_pressed(); break;
        case 13: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->on_doubleSpinBox_2_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->on_doubleSpinBox_3_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
