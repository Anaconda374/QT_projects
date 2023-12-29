/****************************************************************************
** Meta object code from reading C++ file 'buscardialogo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20231204TextoRico_QTextEdit/buscardialogo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buscardialogo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BuscarDialogo_t {
    const uint offsetsAndSize[32];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BuscarDialogo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BuscarDialogo_t qt_meta_stringdata_BuscarDialogo = {
    {
QT_MOC_LITERAL(0, 13), // "BuscarDialogo"
QT_MOC_LITERAL(14, 16), // "buscarDatoEviado"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 9), // "TextoInfo"
QT_MOC_LITERAL(42, 4), // "dato"
QT_MOC_LITERAL(47, 20), // "reemplazarDataEviado"
QT_MOC_LITERAL(68, 22), // "on_btnRechazar_clicked"
QT_MOC_LITERAL(91, 22), // "on_btnAdelante_clicked"
QT_MOC_LITERAL(114, 20), // "on_btnDetras_clicked"
QT_MOC_LITERAL(135, 24), // "on_btnReemplazar_clicked"
QT_MOC_LITERAL(160, 28), // "on_btnReemplazarTodo_clicked"
QT_MOC_LITERAL(189, 29), // "on_cajaDistingue_stateChanged"
QT_MOC_LITERAL(219, 4), // "arg1"
QT_MOC_LITERAL(224, 28), // "on_cajaCoincide_stateChanged"
QT_MOC_LITERAL(253, 14), // "buscarDevolver"
QT_MOC_LITERAL(268, 18) // "reemplazarDevolver"

    },
    "BuscarDialogo\0buscarDatoEviado\0\0"
    "TextoInfo\0dato\0reemplazarDataEviado\0"
    "on_btnRechazar_clicked\0on_btnAdelante_clicked\0"
    "on_btnDetras_clicked\0on_btnReemplazar_clicked\0"
    "on_btnReemplazarTodo_clicked\0"
    "on_cajaDistingue_stateChanged\0arg1\0"
    "on_cajaCoincide_stateChanged\0"
    "buscarDevolver\0reemplazarDevolver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuscarDialogo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       5,    1,   83,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   86,    2, 0x08,    5 /* Private */,
       7,    0,   87,    2, 0x08,    6 /* Private */,
       8,    0,   88,    2, 0x08,    7 /* Private */,
       9,    0,   89,    2, 0x08,    8 /* Private */,
      10,    0,   90,    2, 0x08,    9 /* Private */,
      11,    1,   91,    2, 0x08,   10 /* Private */,
      13,    1,   94,    2, 0x08,   12 /* Private */,
      14,    0,   97,    2, 0x08,   14 /* Private */,
      15,    0,   98,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BuscarDialogo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BuscarDialogo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buscarDatoEviado((*reinterpret_cast< const TextoInfo(*)>(_a[1]))); break;
        case 1: _t->reemplazarDataEviado((*reinterpret_cast< const TextoInfo(*)>(_a[1]))); break;
        case 2: _t->on_btnRechazar_clicked(); break;
        case 3: _t->on_btnAdelante_clicked(); break;
        case 4: _t->on_btnDetras_clicked(); break;
        case 5: _t->on_btnReemplazar_clicked(); break;
        case 6: _t->on_btnReemplazarTodo_clicked(); break;
        case 7: _t->on_cajaDistingue_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_cajaCoincide_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->buscarDevolver(); break;
        case 10: _t->reemplazarDevolver(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BuscarDialogo::*)(const TextoInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuscarDialogo::buscarDatoEviado)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BuscarDialogo::*)(const TextoInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuscarDialogo::reemplazarDataEviado)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BuscarDialogo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BuscarDialogo.offsetsAndSize,
    qt_meta_data_BuscarDialogo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BuscarDialogo_t
, QtPrivate::TypeAndForceComplete<BuscarDialogo, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const TextoInfo &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const TextoInfo &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *BuscarDialogo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuscarDialogo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuscarDialogo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BuscarDialogo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BuscarDialogo::buscarDatoEviado(const TextoInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BuscarDialogo::reemplazarDataEviado(const TextoInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
