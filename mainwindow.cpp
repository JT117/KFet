#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    admin = false;

    QVBoxLayout* vbox = new QVBoxLayout;

    etuTable = new QTableWidget( );
    construirePanneauClient();
    construirePanneauProduit();

    vbox->addWidget( etuTable );
    ui->tab->setLayout( vbox );

    connect( ui->actionGestion_des_produits, SIGNAL(triggered()), this, SLOT( ouvrirGestionProduit() ) );
    connect( ui->actionSuper_Utilisateur, SIGNAL(triggered()), this, SLOT( ouvrirLogin() ) );
    connect( ui->actionSe_deconnecter, SIGNAL(triggered()), this, SLOT( rendreUser() ) );
    connect( ui->actionChanger_mot_de_passe_Admin, SIGNAL(triggered()), this, SLOT(ouvrirChangerMDP()) );

    ui->actionGestion_des_produits->setEnabled(false);
    ui->actionSe_deconnecter->setVisible(false);
    ui->actionChanger_mot_de_passe_Admin->setVisible(false);

    CLog::ecrire( "--------------------------------------------------------------");
    CLog::ecrire( "Ouverture de l'application" );
}

MainWindow::~MainWindow()
{
    delete ui;
    delete etuTable;

    for( int i = 0; i < listProduct.size(); i++ )
    {
        delete listProduct.at(i);
    }
    for( int i = 0; i < listBouton.size(); i++ )
    {
        delete listBouton.at(i);
    }
    for( int i = 0; i < listClient.size(); i++ )
    {
        delete listClient.at(i);
    }
    CLog::ecrire( "Fermeture de l'application" );
    CLog::ecrire( "--------------------------------------------------------------");
}

void MainWindow::ouvrirGestionProduit()
{
    CFenetreGestionProduit fenetreGestionProduit(this, this);
    fenetreGestionProduit.exec();
}

void MainWindow::ouvrirLogin()
{
   CFenetreLogin fenetreLogin(this, this);
   fenetreLogin.exec();
}

void MainWindow::ouvrirChangerMDP()
{
    FenetreChangerMDP changerMDP(this);
    changerMDP.exec();
}

void MainWindow::rendreAdmin()
{
    CLog::ecrire( "Droit Admin donnés à l'utilisateur" );
    admin = true;
    ui->actionGestion_des_produits->setEnabled(true);
    ui->actionSuper_Utilisateur->setVisible(false);
    ui->actionSe_deconnecter->setVisible(true);
    ui->actionChanger_mot_de_passe_Admin->setVisible(true);
}

void MainWindow::rendreUser()
{
    CLog::ecrire( "L'utilisateur perd les droits d'administrateur" );
    admin = false;
    ui->actionGestion_des_produits->setEnabled(false);
    ui->actionSuper_Utilisateur->setVisible(true);
    ui->actionSe_deconnecter->setVisible(false);
    ui->actionChanger_mot_de_passe_Admin->setVisible(false);
}

void MainWindow::updateProduit()
{
    listProduct.clear();
    for( int i = 0; i < listBouton.size(); i++ )
    {
        ui->gridLayout_6->removeWidget( listBouton.at(i) );
        listBouton.at(i)->~QToolButton();
    }
    listBouton.clear();

    construirePanneauProduit();
}

void MainWindow::construirePanneauClient()
{
    QStringList header;
    header << "Nom" << "Prénom" << "Promo" << "Dette";
    etuTable->setColumnCount(4);
    etuTable->setHorizontalHeaderLabels( header );

    CGestionBDD::getClientList( listClient );
    etuTable->setRowCount( listClient.size() );

    for( int i = 0; i < listClient.size(); i++ )
    {
        QTableWidgetItem* item = new QTableWidgetItem( listClient.at(i)->getNom() );
        etuTable->setItem(i,0, item );
        QTableWidgetItem* item2 = new QTableWidgetItem( listClient.at(i)->getPrenom() );
        etuTable->setItem(i,1, item2 );
        QTableWidgetItem* item3 = new QTableWidgetItem( listClient.at(i)->getPromo() );
        etuTable->setItem(i,2, item3 );
        QTableWidgetItem* item4 = new QTableWidgetItem( QString::number( listClient.at(i)->getDette() ) );
        etuTable->setItem(i,3, item4 );
    }
}

void MainWindow::construirePanneauProduit()
{
    CGestionBDD::getProductList( listProduct );

    int ligne = 0;
    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        QToolButton* bouton = new QToolButton();
        bouton->setIcon( QIcon( QDir::currentPath()+listProduct[iBoucle]->getChemin() ) );
        bouton->setText( listProduct[iBoucle]->getNom()+" "+listProduct[iBoucle]->getPrix()+ QString(8364) );
        bouton->setIconSize(QSize(64,64));
        bouton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        bouton->setFont( QFont( "Raavi", 12, QFont::Bold ) );
        listBouton.append(bouton);

        ui->gridLayout_6->addWidget( bouton, ligne, iBoucle%3, 1, 1 );

        if( ((iBoucle+1) % 3) == 0 && iBoucle != 0 )
        {
            ligne++;
        }
    }
}
