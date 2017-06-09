/****************************************************************************
** Meta object code from reading C++ file 'dialoggestionpersonnel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialoggestionpersonnel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoggestionpersonnel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogGestionPersonnel_t {
    QByteArrayData data[7];
    char stringdata[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogGestionPersonnel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogGestionPersonnel_t qt_meta_stringdata_DialogGestionPersonnel = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 33),
QT_MOC_LITERAL(2, 57, 0),
QT_MOC_LITERAL(3, 58, 33),
QT_MOC_LITERAL(4, 92, 33),
QT_MOC_LITERAL(5, 126, 33),
QT_MOC_LITERAL(6, 160, 34)
    },
    "DialogGestionPersonnel\0"
    "on_pushButtonAjoutEmploye_clicked\0\0"
    "on_pushButtonSupprEmploye_clicked\0"
    "on_pushButtonModifEmploye_clicked\0"
    "on_pushButtonRefuserModif_clicked\0"
    "on_pushButtonAccepterModif_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogGestionPersonnel[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogGestionPersonnel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogGestionPersonnel *_t = static_cast<DialogGestionPersonnel *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonAjoutEmploye_clicked(); break;
        case 1: _t->on_pushButtonSupprEmploye_clicked(); break;
        case 2: _t->on_pushButtonModifEmploye_clicked(); break;
        case 3: _t->on_pushButtonRefuserModif_clicked(); break;
        case 4: _t->on_pushButtonAccepterModif_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DialogGestionPersonnel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogGestionPersonnel.data,
      qt_meta_data_DialogGestionPersonnel,  qt_static_metacall, 0, 0}
};


const QMetaObject *DialogGestionPersonnel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogGestionPersonnel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogGestionPersonnel.stringdata))
        return static_cast<void*>(const_cast< DialogGestionPersonnel*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogGestionPersonnel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
