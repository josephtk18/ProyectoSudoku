/****************************************************************************
** Meta object code from reading C++ file 'sudoku.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sudoku.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sudoku.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sudoku_t {
    QByteArrayData data[13];
    char stringdata[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Sudoku_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Sudoku_t qt_meta_stringdata_Sudoku = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 37),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 34),
QT_MOC_LITERAL(4, 81, 42),
QT_MOC_LITERAL(5, 124, 24),
QT_MOC_LITERAL(6, 149, 14),
QT_MOC_LITERAL(7, 164, 1),
QT_MOC_LITERAL(8, 166, 13),
QT_MOC_LITERAL(9, 180, 2),
QT_MOC_LITERAL(10, 183, 8),
QT_MOC_LITERAL(11, 192, 9),
QT_MOC_LITERAL(12, 202, 8)
    },
    "Sudoku\0on_actionVerificar_Soluci_n_triggered\0"
    "\0on_actionGuardar_partida_triggered\0"
    "on_actionVolver_al_men_principal_triggered\0"
    "on_actionSalir_triggered\0changeSelected\0"
    "o\0asignToSelect\0ob\0showTime\0startTime\0"
    "stopTime\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sudoku[] = {

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
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    1,   63,    2, 0x0a,
       8,    1,   66,    2, 0x0a,
      10,    0,   69,    2, 0x0a,
      11,    0,   70,    2, 0x0a,
      12,    0,   71,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sudoku::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sudoku *_t = static_cast<Sudoku *>(_o);
        switch (_id) {
        case 0: _t->on_actionVerificar_Soluci_n_triggered(); break;
        case 1: _t->on_actionGuardar_partida_triggered(); break;
        case 2: _t->on_actionVolver_al_men_principal_triggered(); break;
        case 3: _t->on_actionSalir_triggered(); break;
        case 4: _t->changeSelected((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->asignToSelect((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->showTime(); break;
        case 7: _t->startTime(); break;
        case 8: _t->stopTime(); break;
        default: ;
        }
    }
}

const QMetaObject Sudoku::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Sudoku.data,
      qt_meta_data_Sudoku,  qt_static_metacall, 0, 0}
};


const QMetaObject *Sudoku::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sudoku::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Sudoku.stringdata))
        return static_cast<void*>(const_cast< Sudoku*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Sudoku::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
