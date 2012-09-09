/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun 9. Sep 12:37:33 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
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
     215,   11,   11,   11, 0x0a,
     231,   11,   11,   11, 0x0a,
     252,   11,   11,   11, 0x0a,
     271,   11,   11,   11, 0x0a,
     286,  282,   11,   11, 0x0a,
     307,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ouvrirGestionProduit()\0"
    "ouvrirLogin()\0ouvrirChangerMDP()\0"
    "ouvrirAjoutClient()\0ouvrirApproviosionnement()\0"
    "ouvrirAjoutEnDette()\0rendreUser()\0"
    "updateProduit()\0updateClient()\0"
    "ajouterEnDette()\0supprimerClient()\0"
    "editionClient()\0changerLimiteDette()\0"
    "updateLabelDette()\0setDette()\0num\0"
    "changementDeTab(int)\0supprOnglet()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->ouvrirGestionProduit(); break;
        case 1: _t->ouvrirLogin(); break;
        case 2: _t->ouvrirChangerMDP(); break;
        case 3: _t->ouvrirAjoutClient(); break;
        case 4: _t->ouvrirApproviosionnement(); break;
        case 5: _t->ouvrirAjoutEnDette(); break;
        case 6: _t->rendreUser(); break;
        case 7: _t->updateProduit(); break;
        case 8: _t->updateClient(); break;
        case 9: _t->ajouterEnDette(); break;
        case 10: _t->supprimerClient(); break;
        case 11: _t->editionClient(); break;
        case 12: _t->changerLimiteDette(); break;
        case 13: _t->updateLabelDette(); break;
        case 14: _t->setDette(); break;
        case 15: _t->changementDeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->supprOnglet(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
