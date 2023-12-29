/****************************************************************************
** Meta object code from reading C++ file 'notepad.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20231031notepadDemo_mainWindow/notepad.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Notepad_t {
    const uint offsetsAndSize[34];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Notepad_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Notepad_t qt_meta_stringdata_Notepad = {
    {
QT_MOC_LITERAL(0, 7), // "Notepad"
QT_MOC_LITERAL(8, 5), // "nuevo"
QT_MOC_LITERAL(14, 0), // ""
QT_MOC_LITERAL(15, 5), // "abrir"
QT_MOC_LITERAL(21, 7), // "guardar"
QT_MOC_LITERAL(29, 12), // "guardar_como"
QT_MOC_LITERAL(42, 11), // "elegir_nada"
QT_MOC_LITERAL(54, 16), // "toolBarra_arriba"
QT_MOC_LITERAL(71, 15), // "toolBarra_abajo"
QT_MOC_LITERAL(87, 19), // "toolBarra_izquierda"
QT_MOC_LITERAL(107, 17), // "toolBarra_derecha"
QT_MOC_LITERAL(125, 28), // "on_plainTextEdit_textChanged"
QT_MOC_LITERAL(154, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(186, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(203, 4), // "item"
QT_MOC_LITERAL(208, 10), // "borrarItem"
QT_MOC_LITERAL(219, 16) // "productos_agrego"

    },
    "Notepad\0nuevo\0\0abrir\0guardar\0guardar_como\0"
    "elegir_nada\0toolBarra_arriba\0"
    "toolBarra_abajo\0toolBarra_izquierda\0"
    "toolBarra_derecha\0on_plainTextEdit_textChanged\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0borrarItem\0"
    "productos_agrego"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Notepad[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    1,  102,    2, 0x08,   11 /* Private */,
      15,    0,  105,    2, 0x08,   13 /* Private */,
      16,    0,  106,    2, 0x08,   14 /* Private */,

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
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Notepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Notepad *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nuevo(); break;
        case 1: _t->abrir(); break;
        case 2: _t->guardar(); break;
        case 3: _t->guardar_como(); break;
        case 4: _t->elegir_nada(); break;
        case 5: _t->toolBarra_arriba(); break;
        case 6: _t->toolBarra_abajo(); break;
        case 7: _t->toolBarra_izquierda(); break;
        case 8: _t->toolBarra_derecha(); break;
        case 9: _t->on_plainTextEdit_textChanged(); break;
        case 10: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->borrarItem(); break;
        case 12: _t->productos_agrego(); break;
        default: ;
        }
    }
}

const QMetaObject Notepad::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Notepad.offsetsAndSize,
    qt_meta_data_Notepad,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Notepad_t
, QtPrivate::TypeAndForceComplete<Notepad, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Notepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Notepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Notepad.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Notepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
