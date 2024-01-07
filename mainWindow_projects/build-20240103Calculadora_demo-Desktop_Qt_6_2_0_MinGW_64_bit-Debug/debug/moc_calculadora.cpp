/****************************************************************************
** Meta object code from reading C++ file 'calculadora.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20240103Calculadora_demo/calculadora.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculadora.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculadora_t {
    const uint offsetsAndSize[26];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Calculadora_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Calculadora_t qt_meta_stringdata_Calculadora = {
    {
QT_MOC_LITERAL(0, 11), // "Calculadora"
QT_MOC_LITERAL(12, 7), // "limpiar"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 5), // "sumar"
QT_MOC_LITERAL(27, 8), // "sustraer"
QT_MOC_LITERAL(36, 11), // "multiplicar"
QT_MOC_LITERAL(48, 7), // "dividir"
QT_MOC_LITERAL(56, 6), // "numero"
QT_MOC_LITERAL(63, 10), // "actualizar"
QT_MOC_LITERAL(74, 14), // "anadirEcuacion"
QT_MOC_LITERAL(89, 21), // "on_btnAceptar_clicked"
QT_MOC_LITERAL(111, 21), // "on_btnLimpiar_clicked"
QT_MOC_LITERAL(133, 19) // "on_btnNueva_clicked"

    },
    "Calculadora\0limpiar\0\0sumar\0sustraer\0"
    "multiplicar\0dividir\0numero\0actualizar\0"
    "anadirEcuacion\0on_btnAceptar_clicked\0"
    "on_btnLimpiar_clicked\0on_btnNueva_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculadora[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

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

       0        // eod
};

void Calculadora::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculadora *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->limpiar(); break;
        case 1: _t->sumar(); break;
        case 2: _t->sustraer(); break;
        case 3: _t->multiplicar(); break;
        case 4: _t->dividir(); break;
        case 5: _t->numero(); break;
        case 6: _t->actualizar(); break;
        case 7: _t->anadirEcuacion(); break;
        case 8: _t->on_btnAceptar_clicked(); break;
        case 9: _t->on_btnLimpiar_clicked(); break;
        case 10: _t->on_btnNueva_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Calculadora::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Calculadora.offsetsAndSize,
    qt_meta_data_Calculadora,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Calculadora_t
, QtPrivate::TypeAndForceComplete<Calculadora, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Calculadora::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculadora::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculadora.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calculadora::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
