/****************************************************************************
** Meta object code from reading C++ file 'principal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20240107TCP_Servidor/principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Principal_t {
    const uint offsetsAndSize[18];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Principal_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Principal_t qt_meta_stringdata_Principal = {
    {
QT_MOC_LITERAL(0, 9), // "Principal"
QT_MOC_LITERAL(10, 10), // "esCambiado"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 21), // "on_btnAceptar_clicked"
QT_MOC_LITERAL(44, 22), // "on_btnRechazar_clicked"
QT_MOC_LITERAL(67, 22), // "on_btnAdelante_clicked"
QT_MOC_LITERAL(90, 19), // "on_btnAtras_clicked"
QT_MOC_LITERAL(110, 21), // "on_btnEmpezar_clicked"
QT_MOC_LITERAL(132, 21) // "on_btnDetener_clicked"

    },
    "Principal\0esCambiado\0\0on_btnAceptar_clicked\0"
    "on_btnRechazar_clicked\0on_btnAdelante_clicked\0"
    "on_btnAtras_clicked\0on_btnEmpezar_clicked\0"
    "on_btnDetener_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Principal[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Principal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->esCambiado(); break;
        case 1: _t->on_btnAceptar_clicked(); break;
        case 2: _t->on_btnRechazar_clicked(); break;
        case 3: _t->on_btnAdelante_clicked(); break;
        case 4: _t->on_btnAtras_clicked(); break;
        case 5: _t->on_btnEmpezar_clicked(); break;
        case 6: _t->on_btnDetener_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Principal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Principal.offsetsAndSize,
    qt_meta_data_Principal,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Principal_t
, QtPrivate::TypeAndForceComplete<Principal, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Principal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Principal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
