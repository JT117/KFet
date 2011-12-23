/****************************************************************************
** Meta object code from reading C++ file 'cfenetregestionproduit.h'
**
** Created: Fri 23. Dec 15:54:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cfenetregestionproduit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cfenetregestionproduit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFenetreGestionProduit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      34,   23,   23,   23, 0x0a,
      48,   23,   23,   23, 0x0a,
      64,   60,   23,   23, 0x0a,
      88,   60,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CFenetreGestionProduit[] = {
    "CFenetreGestionProduit\0\0ajouter()\0"
    "updateTable()\0supprimer()\0x,y\0"
    "celluleChanged(int,int)\0celluleClicked(int,int)\0"
};

const QMetaObject CFenetreGestionProduit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CFenetreGestionProduit,
      qt_meta_data_CFenetreGestionProduit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CFenetreGestionProduit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CFenetreGestionProduit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CFenetreGestionProduit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFenetreGestionProduit))
        return static_cast<void*>(const_cast< CFenetreGestionProduit*>(this));
    return QDialog::qt_metacast(_clname);
}

int CFenetreGestionProduit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ajouter(); break;
        case 1: updateTable(); break;
        case 2: supprimer(); break;
        case 3: celluleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: celluleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
