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
#include <QHBoxLayout>
#include <QContextMenuEvent>

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
#include "fenetrechangerlimitedette.h"
#include "settings.h"
#include "fenetresetdette.h"
#include "fenetrenouvelletab.h"
#include "filterobject.h"
#include "fenetresuppressiononglet.h"

class ToolButton;

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
    void updatePanneauClient();
    void contextMenuSuppressionTab();

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
    void editionClient();
    void changerLimiteDette();
    void updateLabelDette();
    void setDette();
    void changementDeTab(int num);
    void supprOnglet();
    void promoUp();

private:
    Ui::MainWindow *ui;
    QTableWidget* etuTable;
    QList<CProduct*> listProduct;
    QList<ToolButton*> listBouton;
    QList<CTab*> listTab;

    bool admin;

    void construirePanneauProduit();
    void construirePanneauClient();
    void contextMenuEvent( QContextMenuEvent * event );

};

#endif // MAINWINDOW_H
