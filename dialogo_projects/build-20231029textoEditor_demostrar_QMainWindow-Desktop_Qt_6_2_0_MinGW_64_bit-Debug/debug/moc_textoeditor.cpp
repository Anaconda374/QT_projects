/****************************************************************************
** Meta object code from reading C++ file 'textoeditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../20231029textoEditor_demostrar_QMainWindow/textoeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textoeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextoEditor_t {
    const uint offsetsAndSize[16];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TextoEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TextoEditor_t qt_meta_stringdata_TextoEditor = {
    {
QT_MOC_LITERAL(0, 11), // "TextoEditor"
QT_MOC_LITERAL(12, 24), // "on_accionAbrir_triggered"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 28), // "on_accionAlmacenar_triggered"
QT_MOC_LITERAL(67, 25), // "on_accionCopiar_triggered"
QT_MOC_LITERAL(93, 25), // "on_accionCortar_triggered"
QT_MOC_LITERAL(119, 24), // "on_accionPegar_triggered"
QT_MOC_LITERAL(144, 24) // "on_accionNuevo_triggered"

    },
    "TextoEditor\0on_accionAbrir_triggered\0"
    "\0on_accionAlmacenar_triggered\0"
    "on_accionCopiar_triggered\0"
    "on_accionCortar_triggered\0"
    "on_accionPegar_triggered\0"
    "on_accionNuevo_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextoEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TextoEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextoEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_accionAbrir_triggered(); break;
        case 1: _t->on_accionAlmacenar_triggered(); break;
        case 2: _t->on_accionCopiar_triggered(); break;
        case 3: _t->on_accionCortar_triggered(); break;
        case 4: _t->on_accionPegar_triggered(); break;
        case 5: _t->on_accionNuevo_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject TextoEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TextoEditor.offsetsAndSize,
    qt_meta_data_TextoEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TextoEditor_t
, QtPrivate::TypeAndForceComplete<TextoEditor, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TextoEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextoEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextoEditor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TextoEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
