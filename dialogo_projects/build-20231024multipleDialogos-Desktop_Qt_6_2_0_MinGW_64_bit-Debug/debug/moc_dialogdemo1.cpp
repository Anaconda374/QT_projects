/****************************************************************************
** Meta object code from reading C++ file 'dialogdemo1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20231024multipleDialogos/dialogdemo1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogdemo1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogDemo1_t {
    const uint offsetsAndSize[10];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DialogDemo1_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DialogDemo1_t qt_meta_stringdata_DialogDemo1 = {
    {
QT_MOC_LITERAL(0, 11), // "DialogDemo1"
QT_MOC_LITERAL(12, 22), // "on_btnConPadre_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 22), // "on_btnSinPadre_clicked"
QT_MOC_LITERAL(59, 35) // "on_btnConPadre_modalDialogo_c..."

    },
    "DialogDemo1\0on_btnConPadre_clicked\0\0"
    "on_btnSinPadre_clicked\0"
    "on_btnConPadre_modalDialogo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogDemo1[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogDemo1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogDemo1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnConPadre_clicked(); break;
        case 1: _t->on_btnSinPadre_clicked(); break;
        case 2: _t->on_btnConPadre_modalDialogo_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject DialogDemo1::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogDemo1.offsetsAndSize,
    qt_meta_data_DialogDemo1,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DialogDemo1_t
, QtPrivate::TypeAndForceComplete<DialogDemo1, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *DialogDemo1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogDemo1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogDemo1.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogDemo1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
