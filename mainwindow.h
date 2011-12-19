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

public slots:
    void ouvrirGestionProduit();
    void ouvrirLogin();
    void ouvrirChangerMDP();
    void ouvrirAjoutClient();
    void ouvrirApproviosionnement();
    void rendreUser();
    void updateProduit();
    void updateClient();
    void selectionnerLigne(int row, int column );
    void ajouterEnDette();
    void supprimerClient();

private:
    Ui::MainWindow *ui;
    QTableWidget* etuTable;
    QList<CProduct*> listProduct;
    QList<QToolButton*> listBouton;
    QList<CClient*> listClient;
    bool admin;

    void construirePanneauProduit();
    void construirePanneauClient();
};

#endif // MAINWINDOW_H
