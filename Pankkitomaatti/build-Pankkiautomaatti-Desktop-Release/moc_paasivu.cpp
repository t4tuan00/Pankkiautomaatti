/****************************************************************************
** Meta object code from reading C++ file 'paasivu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Pankkiautomaatti/paasivu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paasivu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Paasivu_t {
    QByteArrayData data[6];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Paasivu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Paasivu_t qt_meta_stringdata_Paasivu = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 27),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 36),
QT_MOC_LITERAL(4, 74, 27),
QT_MOC_LITERAL(5, 102, 29)
    },
    "Paasivu\0on_pushButton_Saldo_clicked\0"
    "\0on_pushButton_Tilitapahtumat_clicked\0"
    "on_pushButton_Nosto_clicked\0"
    "on_pushButton_Peruuta_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Paasivu[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Paasivu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Paasivu *_t = static_cast<Paasivu *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Saldo_clicked(); break;
        case 1: _t->on_pushButton_Tilitapahtumat_clicked(); break;
        case 2: _t->on_pushButton_Nosto_clicked(); break;
        case 3: _t->on_pushButton_Peruuta_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Paasivu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Paasivu.data,
      qt_meta_data_Paasivu,  qt_static_metacall, 0, 0}
};


const QMetaObject *Paasivu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Paasivu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Paasivu.stringdata))
        return static_cast<void*>(const_cast< Paasivu*>(this));
    return QDialog::qt_metacast(_clname);
}

int Paasivu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
