/****************************************************************************
** Meta object code from reading C++ file 'cfenetrelogin.h'
**
** Created: Fri 23. Dec 16:02:15 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cfenetrelogin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cfenetrelogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFenetreLogin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CFenetreLogin[] = {
    "CFenetreLogin\0\0login()\0"
};

const QMetaObject CFenetreLogin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CFenetreLogin,
      qt_meta_data_CFenetreLogin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CFenetreLogin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CFenetreLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CFenetreLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFenetreLogin))
        return static_cast<void*>(const_cast< CFenetreLogin*>(this));
    return QDialog::qt_metacast(_clname);
}

int CFenetreLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: login(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
