/****************************************************************************
** Meta object code from reading C++ file 'cfenetremiseendette.h'
**
** Created: Tue 7. Feb 15:29:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cfenetremiseendette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cfenetremiseendette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFenetreMiseEnDette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CFenetreMiseEnDette[] = {
    "CFenetreMiseEnDette\0\0validation()\0"
};

void CFenetreMiseEnDette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CFenetreMiseEnDette *_t = static_cast<CFenetreMiseEnDette *>(_o);
        switch (_id) {
        case 0: _t->validation(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CFenetreMiseEnDette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CFenetreMiseEnDette::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CFenetreMiseEnDette,
      qt_meta_data_CFenetreMiseEnDette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CFenetreMiseEnDette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CFenetreMiseEnDette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CFenetreMiseEnDette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFenetreMiseEnDette))
        return static_cast<void*>(const_cast< CFenetreMiseEnDette*>(this));
    return QDialog::qt_metacast(_clname);
}

int CFenetreMiseEnDette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE