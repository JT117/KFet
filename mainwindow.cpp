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
    connect( ui->addContact, SIGNAL(clicked()), this, SLOT(ouvrirAjoutClient()) );
    connect( etuTable, SIGNAL(cellClicked(int,int)), this, SLOT(selectionnerLigne(int,int)) );
    connect( ui->addMoney, SIGNAL(clicked()), this, SLOT(ouvrirApproviosionnement()) );
    connect( ui->delContact, SIGNAL(clicked()), this, SLOT(supprimerClient()) );
    connect( ui->subMoney, SIGNAL(clicked()), this, SLOT(ouvrirAjoutEnDette()) );

    ui->actionGestion_des_produits->setEnabled(false);
    ui->actionSe_deconnecter->setVisible(false);
    ui->actionChanger_mot_de_passe_Admin->setVisible(false);
    ui->delContact->setEnabled( false );
    ui->subMoney->setEnabled( false );

    ui->addContact->setIcon( QIcon(QDir::currentPath()+"/systeme/image/add_user.gif") );
    ui->addMoney->setIcon( QIcon( QDir::currentPath()+"/systeme/image/add_money.png" )); 
    ui->delContact->setIcon( QIcon( QDir::currentPath()+"/systeme/image/del_user.png" ));
    ui->subMoney->setIcon( QIcon( QDir::currentPath()+"/systeme/image/sub_money.png" ));

    CLog::ecrire( "--------------------------------------------------------------");
    CLog::ecrire( "Ouverture de l'application" );
}

MainWindow::~MainWindow()
{
    delete ui;
    delete etuTable;

    for( int i = 0; i < listProduct.size(); i++ )
    {
        delete listProduct[i];
    }
    for( int i = 0; i < listBouton.size(); i++ )
    {
        delete listBouton[i];
    }
    for( int i = 0; i < listClient.size(); i++ )
    {
        delete listClient[i];
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
    ui->delContact->setEnabled( true );
    ui->subMoney->setEnabled( true );
}

void MainWindow::rendreUser()
{
    CLog::ecrire( "L'utilisateur perd les droits d'administrateur" );
    admin = false;
    ui->actionGestion_des_produits->setEnabled(false);
    ui->actionSuper_Utilisateur->setVisible(true);
    ui->actionSe_deconnecter->setVisible(false);
    ui->actionChanger_mot_de_passe_Admin->setVisible(false);
    ui->delContact->setEnabled( false );
    ui->subMoney->setEnabled( false );
}

void MainWindow::updateProduit()
{
    for( int i = 0; i < listProduct.size(); i++ )
    {
        delete listProduct.at(i);
    }

    listProduct.clear();

    for( int i = 0; i < listBouton.size(); i++ )
    {
        disconnect( listBouton.at(i), SIGNAL(clicked()), this, SLOT(ajouterEnDette()) );
        ui->gridLayout_6->removeWidget( listBouton.at(i) );
        delete listBouton.at(i);
    }
    listBouton.clear();

    construirePanneauProduit();
}

void MainWindow::updateClient()
{
    for( int i = 0; i < listClient.size(); i++ )
    {
        delete listClient.at(i);
    }

    listClient.clear();
    etuTable->clear();
    this->construirePanneauClient();
}

void MainWindow::construirePanneauClient()
{
    QStringList header;
    header << "Nom" << "Prénom" << "Promo" << "Dette";
    etuTable->setColumnCount(4);
    etuTable->setHorizontalHeaderLabels( header );
    etuTable->setColumnWidth(0,126);
    etuTable->setColumnWidth(1,126);

    CGestionBDD::getClientList( listClient );
    etuTable->setRowCount( listClient.size() );

    for( int i = 0; i < listClient.size(); i++ )
    {
        listClient.at(i)->setNumLigne(i);

        QColor couleur( 255, 255, 255 );

        if( listClient.at(i)->getDette() < 10 )
        {
            couleur.setRgb( 104, 255, 122 );
        }
        else
        {
            couleur.setRgb( 255, 95, 25 );
        }

        QTableWidgetItem* item = new QTableWidgetItem( listClient.at(i)->getNom() );
        item->setBackgroundColor( couleur );
        item->setTextAlignment(Qt::AlignCenter);
        item->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,0, item );

        QTableWidgetItem* item2 = new QTableWidgetItem( listClient.at(i)->getPrenom() );
        item2->setBackgroundColor( couleur );
        item2->setTextAlignment(Qt::AlignCenter);
        item2->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,1, item2 );

        QTableWidgetItem* item3 = new QTableWidgetItem( listClient.at(i)->getPromo() );
        item3->setBackgroundColor( couleur );
        item3->setTextAlignment( Qt::AlignCenter );
        item3->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,2, item3 );

        QTableWidgetItem* item4 = new QTableWidgetItem( QString::number( listClient.at(i)->getDette() ) );
        item4->setBackgroundColor( couleur );
        item4->setTextAlignment(Qt::AlignCenter);
        item4->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,3, item4 );
    }
}

void MainWindow::construirePanneauProduit()
{
    CGestionBDD::getProductList( listProduct );

    int ligne = 0;
    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        listProduct.at(iBoucle)->setNumBouton(iBoucle);

        QToolButton* bouton = new QToolButton();
        bouton->setIcon( QIcon( QDir::currentPath()+listProduct[iBoucle]->getChemin() ) );
        bouton->setText( listProduct[iBoucle]->getNom()+" "+listProduct[iBoucle]->getPrix()+ QString(8364) );
        bouton->setIconSize(QSize(72,72));
        bouton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        bouton->setFont( QFont( "Raavi", 12, QFont::Bold ) );
        bouton->setFixedSize( 160, 110 );
        connect( bouton, SIGNAL(clicked()), this, SLOT(ajouterEnDette()) );
        listBouton.append(bouton);

        ui->gridLayout_6->addWidget( bouton, ligne, iBoucle%3, 1, 1 );

        if( ((iBoucle+1) % 3) == 0 && iBoucle != 0 )
        {
            ligne++;
        }
    }
}

void MainWindow::ouvrirAjoutClient()
{
    CFenetreAjoutClient fenetre(this, this);
    fenetre.exec();
}

void MainWindow::selectionnerLigne(int row, int column)
{
    int nbColumn = etuTable->columnCount();

    etuTable->clearSelection();

    for( int i = 0; i < nbColumn; i++ )
    {
        QTableWidgetItem* widget = etuTable->item( row, i );
        widget->setSelected( true );
    }
}

bool MainWindow::clientSelectionner()
{
    QList<QTableWidgetItem*> listItem = etuTable->selectedItems();

    return !listItem.isEmpty();
}

CClient* MainWindow::getSelectedClient()
{
     QList<QTableWidgetItem*> listItem = etuTable->selectedItems();

     if( !listItem.isEmpty() )
     {
         int row = listItem.at(0)->row();

         for( int i = 0; i < listClient.size(); i++ )
         {
             if( row == listClient.at(i)->getNumLigne() )
             {
                 return (listClient[i]);
             }
         }
     }
     return NULL;
}

void MainWindow::ouvrirApproviosionnement()
{
    if( this->clientSelectionner() )
    {
        CClient* client = this->getSelectedClient();
        CFenetreApprovisionnement fenetre(this, client, this);
        fenetre.exec();
    }
    else
    {
        QMessageBox::warning(this, "KFet", "Veuillez d'abord selectionner un client dans la liste" );
    }
}

void MainWindow::ouvrirAjoutEnDette()
{
    if( this->clientSelectionner() )
    {
        CClient* client = this->getSelectedClient();
        CFenetreMiseEnDette fenetre(this, client, this);
        fenetre.exec();
    }
    else
    {
        QMessageBox::warning(this, "KFet", "Veuillez d'abord selectionner un client dans la liste" );
    }
}

void MainWindow::ajouterEnDette()
{
    if( this->clientSelectionner() )
    {
        QObject* object = QObject::sender();
        QToolButton* bouton = (QToolButton*)object;
        int numBouton = -1;

        for( int i = 0; i < listBouton.size(); i++ )
        {
            if( bouton == listBouton[i] )
            {
                numBouton = i;
            }
        }

        CProduct* produit = NULL;

        for( int i = 0; i < listProduct.size(); i++ )
        {
            if( numBouton == listProduct.at(i)->getNumBouton() )
            {
                produit = listProduct[i];
            }
        }

        if( produit != NULL )
        {
            CClient* client = getSelectedClient();

            QMessageBox msgBox;
            msgBox.setText("Etes-vous sûr de vouloir ajouter en dette un " + produit->getNom() +" soit " + produit->getPrix() + " à "
                           + client->getNom() + " " + client->getPrenom() );
            msgBox.setInformativeText( produit->getPrix() + " " + client->getPrenom() + " " + client->getNom() );
            msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.setIcon( QMessageBox::Question );
            int ret = msgBox.exec();

            if( ret == QMessageBox::Ok )
            {
                QDate date = QDate::currentDate();
                QTime time = QTime::currentTime();
                QString dateString = date.toString( Qt::ISODate );
                QString timeString = time.toString();

                int idDate = CGestionBDD::addDate( dateString, timeString );
                int idClient = client->getID();
                int idProduct = produit->getId();

                CGestionBDD::addDette( idClient, idProduct, idDate, produit->getPrix().toDouble() );

                client->ajouterDette( produit->getPrix().toDouble() );
                CGestionBDD::updateClient( *client );

                CLog::ecrire( "Ajout en dette : " + produit->getNom() + " " + produit->getPrix() + " à " + client->getNom() + " " + client->getPrenom() );

                this->updateClient();
            }
        }
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Veuillez selectionner un client en premier");
    }

}

void MainWindow::supprimerClient()
{
    if( clientSelectionner() )
    {
        CClient* client = getSelectedClient();

        QMessageBox msgBox;
        msgBox.setText("Etes-vous sûr de vouloir supprimer définitivement" + client->getNom() + " " + client->getPrenom() + " ?" );
        msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setIcon( QMessageBox::Question );
        int ret = msgBox.exec();

        if( ret == QMessageBox::Ok )
        {
            CLog::ecrire( "Suppression du client : " + client->getNom() + " " + client->getPrenom() + " " + client->getDette() + " " +
                          client->getPromo() + " " + client->getDroit() + " " + client->getID() );
            CGestionBDD::removeClient( *client );
            this->updateClient();
        }
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Veuillez selectionner un client en premier");
    }
}


