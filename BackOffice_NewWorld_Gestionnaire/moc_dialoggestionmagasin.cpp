/****************************************************************************
** Meta object code from reading C++ file 'dialoggestionmagasin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialoggestionmagasin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoggestionmagasin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogGestionMagasin_t {
    QByteArrayData data[11];
    char stringdata[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogGestionMagasin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogGestionMagasin_t qt_meta_stringdata_DialogGestionMagasin = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 33),
QT_MOC_LITERAL(2, 55, 0),
QT_MOC_LITERAL(3, 56, 4),
QT_MOC_LITERAL(4, 61, 31),
QT_MOC_LITERAL(5, 93, 37),
QT_MOC_LITERAL(6, 131, 33),
QT_MOC_LITERAL(7, 165, 37),
QT_MOC_LITERAL(8, 203, 33),
QT_MOC_LITERAL(9, 237, 39),
QT_MOC_LITERAL(10, 277, 35)
    },
    "DialogGestionMagasin\0"
    "on_lineEditAjoutRayon_textChanged\0\0"
    "arg1\0on_pushButtonAjoutRayon_clicked\0"
    "on_pushButtonAjoutTypeProduit_clicked\0"
    "on_pushButtonAjoutProduit_clicked\0"
    "on_pushButtonSupprTypeProduit_clicked\0"
    "on_pushButtonSupprProduit_clicked\0"
    "on_lineEditAjoutTypeProduit_textChanged\0"
    "on_lineEditAjoutProduit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogGestionMagasin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void DialogGestionMagasin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogGestionMagasin *_t = static_cast<DialogGestionMagasin *>(_o);
        switch (_id) {
        case 0: _t->on_lineEditAjoutRayon_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonAjoutRayon_clicked(); break;
        case 2: _t->on_pushButtonAjoutTypeProduit_clicked(); break;
        case 3: _t->on_pushButtonAjoutProduit_clicked(); break;
        case 4: _t->on_pushButtonSupprTypeProduit_clicked(); break;
        case 5: _t->on_pushButtonSupprProduit_clicked(); break;
        case 6: _t->on_lineEditAjoutTypeProduit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEditAjoutProduit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogGestionMagasin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogGestionMagasin.data,
      qt_meta_data_DialogGestionMagasin,  qt_static_metacall, 0, 0}
};


const QMetaObject *DialogGestionMagasin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogGestionMagasin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogGestionMagasin.stringdata))
        return static_cast<void*>(const_cast< DialogGestionMagasin*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogGestionMagasin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
