/****************************************************************************
** Meta object code from reading C++ file 'ventana_principal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ventana_principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventana_principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ventana_principal_t {
    QByteArrayData data[7];
    char stringdata[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Ventana_principal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Ventana_principal_t qt_meta_stringdata_Ventana_principal = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 22),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 27),
QT_MOC_LITERAL(4, 70, 20),
QT_MOC_LITERAL(5, 91, 23),
QT_MOC_LITERAL(6, 115, 20)
    },
    "Ventana_principal\0on_Btn_Iniciar_clicked\0"
    "\0on_Btn_estadisticas_clicked\0"
    "on_Btn_Ayuda_clicked\0on_Btn_acercaDe_clicked\0"
    "on_Btn_Salir_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ventana_principal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    0,   43,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ventana_principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ventana_principal *_t = static_cast<Ventana_principal *>(_o);
        switch (_id) {
        case 0: _t->on_Btn_Iniciar_clicked(); break;
        case 1: _t->on_Btn_estadisticas_clicked(); break;
        case 2: _t->on_Btn_Ayuda_clicked(); break;
        case 3: _t->on_Btn_acercaDe_clicked(); break;
        case 4: _t->on_Btn_Salir_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Ventana_principal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Ventana_principal.data,
      qt_meta_data_Ventana_principal,  qt_static_metacall, 0, 0}
};


const QMetaObject *Ventana_principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ventana_principal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ventana_principal.stringdata))
        return static_cast<void*>(const_cast< Ventana_principal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Ventana_principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
