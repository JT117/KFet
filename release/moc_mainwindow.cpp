/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon 30. Jan 20:55:13 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      35,   11,   11,   11, 0x0a,
      49,   11,   11,   11, 0x0a,
      68,   11,   11,   11, 0x0a,
      88,   11,   11,   11, 0x0a,
     115,   11,   11,   11, 0x0a,
     136,   11,   11,   11, 0x0a,
     149,   11,   11,   11, 0x0a,
     165,   11,   11,   11, 0x0a,
     180,   11,   11,   11, 0x0a,
     197,   11,   11,   11, 0x0a,
     220,  215,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ouvrirGestionProduit()\0"
    "ouvrirLogin()\0ouvrirChangerMDP()\0"
    "ouvrirAjoutClient()\0ouvrirApproviosionnement()\0"
    "ouvrirAjoutEnDette()\0rendreUser()\0"
    "updateProduit()\0updateClient()\0"
    "ajouterEnDette()\0supprimerClient()\0"
    "text\0recherche(QString)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ouvrirGestionProduit(); break;
        case 1: ouvrirLogin(); break;
        case 2: ouvrirChangerMDP(); break;
        case 3: ouvrirAjoutClient(); break;
        case 4: ouvrirApproviosionnement(); break;
        case 5: ouvrirAjoutEnDette(); break;
        case 6: rendreUser(); break;
        case 7: updateProduit(); break;
        case 8: updateClient(); break;
        case 9: ajouterEnDette(); break;
        case 10: supprimerClient(); break;
        case 11: recherche((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
