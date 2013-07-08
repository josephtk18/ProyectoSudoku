/****************************************************************************
** Meta object code from reading C++ file 'cronometro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cronometro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cronometro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cronometro_t {
    QByteArrayData data[6];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Cronometro_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Cronometro_t qt_meta_stringdata_Cronometro = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 16),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 15),
QT_MOC_LITERAL(4, 45, 16),
QT_MOC_LITERAL(5, 62, 20)
    },
    "Cronometro\0btnReset_clicked\0\0"
    "btnTime_clicked\0timTimer_timeout\0"
    "timTimerConf_timeout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cronometro[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08,
       3,    1,   37,    2, 0x08,
       4,    0,   40,    2, 0x08,
       5,    0,   41,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cronometro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cronometro *_t = static_cast<Cronometro *>(_o);
        switch (_id) {
        case 0: _t->btnReset_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->btnTime_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->timTimer_timeout(); break;
        case 3: _t->timTimerConf_timeout(); break;
        default: ;
        }
    }
}

const QMetaObject Cronometro::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Cronometro.data,
      qt_meta_data_Cronometro,  qt_static_metacall, 0, 0}
};


const QMetaObject *Cronometro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cronometro::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cronometro.stringdata))
        return static_cast<void*>(const_cast< Cronometro*>(this));
    return QWidget::qt_metacast(_clname);
}

int Cronometro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
