#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTableWidget>
#include <QToolButton>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QList>
#include <QVariant>

#include "cfenetregestionproduit.h"
#include "product.h"
#include "cgestionbdd.h"
#include "cfenetrelogin.h"
#include "fenetrechangermdp.h"
#include "client.h"
#include "clog.h"
#include "cfenetreajoutclient.h"
#include "cfenetreapprovisionnement.h"
#include "cfenetremiseendette.h"
#include "tab.h"
#include "fenetrehistoriqueproduit.h"
#include "fenetreeditionclient.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void rendreAdmin();
    bool clientSelectionner();
    CClient* getSelectedClient();
    void updateAllClient();

public slots:
    void ouvrirGestionProduit();
    void ouvrirLogin();
    void ouvrirChangerMDP();
    void ouvrirAjoutClient();
    void ouvrirApproviosionnement();
    void ouvrirAjoutEnDette();
    void rendreUser();
    void updateProduit();
    void updateClient();
    void ajouterEnDette();
    void supprimerClient();
    void recherche(QString text );
    void editionClient();

private:
    Ui::MainWindow *ui;
    QTableWidget* etuTable;
    QList<CProduct*> listProduct;
    QList<QToolButton*> listBouton;
    QList<CTab*> listTab;

    bool admin;

    void construirePanneauProduit();
};

#endif // MAINWINDOW_H
