/****************************************************************************
** Meta object code from reading C++ file 'tablamodelovisto.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20231224tablaModelo_QStandardItemModel/tablamodelovisto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablamodelovisto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TablaModeloVisto_t {
    const uint offsetsAndSize[12];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TablaModeloVisto_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TablaModeloVisto_t qt_meta_stringdata_TablaModeloVisto = {
    {
QT_MOC_LITERAL(0, 16), // "TablaModeloVisto"
QT_MOC_LITERAL(17, 13), // "celdaCambiada"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 14), // "QStandardItem*"
QT_MOC_LITERAL(47, 4), // "item"
QT_MOC_LITERAL(52, 21) // "on_aceptarBtn_clicked"

    },
    "TablaModeloVisto\0celdaCambiada\0\0"
    "QStandardItem*\0item\0on_aceptarBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TablaModeloVisto[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       5,    0,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void TablaModeloVisto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TablaModeloVisto *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->celdaCambiada((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 1: _t->on_aceptarBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject TablaModeloVisto::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TablaModeloVisto.offsetsAndSize,
    qt_meta_data_TablaModeloVisto,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TablaModeloVisto_t
, QtPrivate::TypeAndForceComplete<TablaModeloVisto, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStandardItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TablaModeloVisto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TablaModeloVisto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TablaModeloVisto.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TablaModeloVisto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
