/****************************************************************************
** Meta object code from reading C++ file 'holonomeui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../holonomeui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'holonomeui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HolonomeUI_t {
    QByteArrayData data[11];
    char stringdata[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HolonomeUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HolonomeUI_t qt_meta_stringdata_HolonomeUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HolonomeUI"
QT_MOC_LITERAL(1, 11, 26), // "on_pushButton_Pcan_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "timerOut"
QT_MOC_LITERAL(4, 48, 37), // "on_pushButton_PropStateEnable..."
QT_MOC_LITERAL(5, 86, 38), // "on_pushButton_PropStateDisabl..."
QT_MOC_LITERAL(6, 125, 35), // "on_pushButton_PropStateTest_c..."
QT_MOC_LITERAL(7, 161, 31), // "on_pushButton_SetPosend_clicked"
QT_MOC_LITERAL(8, 193, 30), // "on_pushButton_MoveSend_clicked"
QT_MOC_LITERAL(9, 224, 11), // "resizeEvent"
QT_MOC_LITERAL(10, 236, 30) // "on_pushButton_GotoSend_clicked"

    },
    "HolonomeUI\0on_pushButton_Pcan_clicked\0"
    "\0timerOut\0on_pushButton_PropStateEnable_clicked\0"
    "on_pushButton_PropStateDisable_clicked\0"
    "on_pushButton_PropStateTest_clicked\0"
    "on_pushButton_SetPosend_clicked\0"
    "on_pushButton_MoveSend_clicked\0"
    "resizeEvent\0on_pushButton_GotoSend_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HolonomeUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void HolonomeUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HolonomeUI *_t = static_cast<HolonomeUI *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Pcan_clicked(); break;
        case 1: _t->timerOut(); break;
        case 2: _t->on_pushButton_PropStateEnable_clicked(); break;
        case 3: _t->on_pushButton_PropStateDisable_clicked(); break;
        case 4: _t->on_pushButton_PropStateTest_clicked(); break;
        case 5: _t->on_pushButton_SetPosend_clicked(); break;
        case 6: _t->on_pushButton_MoveSend_clicked(); break;
        case 7: _t->resizeEvent(); break;
        case 8: _t->on_pushButton_GotoSend_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HolonomeUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HolonomeUI.data,
      qt_meta_data_HolonomeUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HolonomeUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HolonomeUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HolonomeUI.stringdata))
        return static_cast<void*>(const_cast< HolonomeUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HolonomeUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
