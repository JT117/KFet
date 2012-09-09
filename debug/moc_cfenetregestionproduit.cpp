/****************************************************************************
** Meta object code from reading C++ file 'cfenetregestionproduit.h'
**
** Created: Sun 9. Sep 15:50:45 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cfenetregestionproduit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cfenetregestionproduit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFenetreGestionProduit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
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
     112,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CFenetreGestionProduit[] = {
    "CFenetreGestionProduit\0\0ajouter()\0"
    "updateTable()\0supprimer()\0x,y\0"
    "celluleChanged(int,int)\0celluleClicked(int,int)\0"
    "historique()\0"
};

void CFenetreGestionProduit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CFenetreGestionProduit *_t = static_cast<CFenetreGestionProduit *>(_o);
        switch (_id) {
        case 0: _t->ajouter(); break;
        case 1: _t->updateTable(); break;
        case 2: _t->supprimer(); break;
        case 3: _t->celluleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->celluleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->historique(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CFenetreGestionProduit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CFenetreGestionProduit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CFenetreGestionProduit,
      qt_meta_data_CFenetreGestionProduit, &staticMetaObjectExtraData }
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
