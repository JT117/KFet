#include "mainwindow.h"
#include "toolbutton.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    admin = false;

    construirePanneauClient();
    construirePanneauProduit();

    ui->centralwidget->setLayout( ui->verticalLayout );
    ui->centralwidget->setContentsMargins( 5, 5, 5, 5 );

    ui->tabWidget->setMovable( true );
    FilterObject* filter = new FilterObject( this );
    ui->tabWidget->installEventFilter( filter );

    connect( ui->actionGestion_des_produits, SIGNAL(triggered()), this, SLOT( ouvrirGestionProduit() ) );
    connect( ui->actionSuper_Utilisateur, SIGNAL(triggered()), this, SLOT( ouvrirLogin() ) );
    connect( ui->actionSe_deconnecter, SIGNAL(triggered()), this, SLOT( rendreUser() ) );
    connect( ui->actionChanger_mot_de_passe_Admin, SIGNAL(triggered()), this, SLOT(ouvrirChangerMDP()) );
    connect( ui->addContact, SIGNAL(clicked()), this, SLOT(ouvrirAjoutClient()) );
    connect( ui->addMoney, SIGNAL(clicked()), this, SLOT(ouvrirApproviosionnement()) );
    connect( ui->delContact, SIGNAL(clicked()), this, SLOT(supprimerClient()) );
    connect( ui->subMoney, SIGNAL(clicked()), this, SLOT(ouvrirAjoutEnDette()) );
    connect( ui->manageProduct, SIGNAL(clicked()), this, SLOT(ouvrirGestionProduit()) );
    connect( ui->actionA_propros, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect( ui->edition, SIGNAL(clicked()), this, SLOT(editionClient()) );
    connect( ui->actionLimite_de_dette, SIGNAL(triggered()), this, SLOT( changerLimiteDette() ) );
    connect( ui->tabWidget, SIGNAL(currentChanged(int)), this, SLOT(updateLabelDette()) );
    connect( ui->actionPromo_UP, SIGNAL(triggered()), this, SLOT(promoUp()) );

    ui->actionGestion_des_produits->setEnabled(false);
    ui->actionSe_deconnecter->setVisible(false);
    ui->actionChanger_mot_de_passe_Admin->setVisible(false);
    ui->delContact->setEnabled( false );
    ui->subMoney->setEnabled( false );
    ui->manageProduct->setEnabled( false );
    ui->supprTextRecherche->setVisible(false);
    ui->actionLimite_de_dette->setEnabled( false );
    ui->actionPromo_UP->setEnabled( false );

    ui->addContact->setIcon( QIcon( QDir::currentPath()+"/systeme/image/add_user.gif") );
    ui->addMoney->setIcon( QIcon( QDir::currentPath()+"/systeme/image/add_money.png" ) );
    ui->delContact->setIcon( QIcon( QDir::currentPath()+"/systeme/image/del_user.png" ) );
    ui->subMoney->setIcon( QIcon( QDir::currentPath()+"/systeme/image/sub_money.png" ) );
    ui->manageProduct->setIcon( QIcon( QDir::currentPath()+"/systeme/image/product_management.png" ) );
    ui->supprTextRecherche->setIcon( QIcon( QDir::currentPath()+"/systeme/image/delete.png" ) );
    ui->edition->setIcon( QIcon( QDir::currentPath()+"/systeme/editer.ico" ) );

    updateLabelDette();

    CLog::ecrire( "--------------------------------------------------------------");
    CLog::ecrire( "Ouverture de l'application" );
}

MainWindow::~MainWindow()
{
    for( int i = 0; i < listTab.size(); i++ )
    {
        delete listTab[i];
    }
    for( int i = 0; i < listProduct.size(); i++ )
    {
        delete listProduct[i];
    }
    for( int i = 0; i < listBouton.size(); i++ )
    {
        delete listBouton[i];
    }

    CGestionBDD::deconnectionBDD();

    delete ui;

    CLog::ecrire( "Fermeture de l'application" );
    CLog::ecrire( "--------------------------------------------------------------");
}

void MainWindow::updatePanneauClient()
{
    for( int i = 0; i < listTab.size(); i++ )
    {
        delete listTab[i];
    }

    listTab.clear();

    construirePanneauClient();
}

void MainWindow::construirePanneauClient()
{
    QStringList listeNomTab = Settings::getTablist();
    ui->tabWidget->clear();

    for( int i = 0; i < listeNomTab.size(); i++ )
    {
        CTab* tab = new CTab( listeNomTab.at(i) );
        ui->tabWidget->addTab( tab, listeNomTab.at(i) );
        listTab.append( tab );
    }

    CTab* tab = new CTab( "+" );
    ui->tabWidget->addTab( tab, "+" );
    listTab.append( tab );

    connect( ui->tabWidget, SIGNAL(currentChanged(int)), this, SLOT( changementDeTab(int) ) );
}

void MainWindow::changementDeTab(int num)
{
    if( num == ( listTab.size() - 1 ) )
    {
        fenetreNouvelleTab fenetre( this );
        fenetre.exec();

        updatePanneauClient();
    }
}

void MainWindow::supprOnglet()
{
    FenetreSuppressionOnglet fenetre( this );
    fenetre.exec();

    construirePanneauClient();
}

void MainWindow::promoUp()
{
    QMessageBox msgBox;
    msgBox.setText("Attention vous êtes sur le point de passer une année. Les clients en DI3 se retrouveront en DI4 etc... Etes vous sûr de vouloir faire cela ?");
    msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon( QMessageBox::Warning );
    int ret = msgBox.exec();

    if( ret == QMessageBox::Ok )
    {
        CLog::ecrire( "Promo Up éffectué");
        CGestionBDD::updatePromo( "DI6", "Save" );
        CGestionBDD::updatePromo( "DI5", "DI6" );
        CGestionBDD::updatePromo( "DI4", "DI5" );
        CGestionBDD::updatePromo( "DI3", "DI4" );

        QStringList listTab = Settings::getTablist();

        qDebug() << listTab;

        if( !listTab.contains( "DI3", Qt::CaseInsensitive ) )
            listTab << "DI3";

        if( !listTab.contains( "DI4", Qt::CaseInsensitive ) )
            listTab << "DI4";

        if( !listTab.contains( "DI5", Qt::CaseInsensitive ) )
            listTab << "DI5";

        if( !listTab.contains( "DI6", Qt::CaseInsensitive ) )
            listTab << "DI6";

        Settings::setTabList( listTab );
        qDebug() << listTab;
        construirePanneauClient();
    }
}

void MainWindow::setDette()
{
    CClient* client = getSelectedClient();
    FenetreSetDette fenetre( client->getID(), this );
    fenetre.exec();
    updateAllClient();
}

void MainWindow::contextMenuEvent( QContextMenuEvent *event )
{
    int x = event->x();
    int y = event->y();

    if( clientSelectionner() && x > 5 && x < 470 && y > 125 )
    {
        QMenu menu(this);
        QAction* actionSetDette = menu.addAction( "Fixer la dette", this, SLOT( setDette() ), 0 );
        menu.move( this->cursor().pos().x(), this->cursor().pos().y() );

        if( admin )
        {
            actionSetDette->setEnabled( true );
        }
        else
        {
            actionSetDette->setEnabled( false );
        }

        menu.exec();

        delete actionSetDette;
    }
}

void MainWindow::contextMenuSuppressionTab()
{
    QMenu menu(this);
    QAction* actionSupprTab = menu.addAction( "Supprimer un onglet", this, SLOT( supprOnglet() ), 0 );
    menu.move( this->cursor().pos().x(), this->cursor().pos().y() );

    if( admin )
    {
        actionSupprTab->setEnabled( true );
    }
    else
    {
        actionSupprTab->setEnabled( false );
    }

    menu.exec();

    delete actionSupprTab;
}

void MainWindow::updateLabelDette()
{
    if( ui->tabWidget->tabText( ui->tabWidget->currentIndex() ) == "KFtier" )
    {
        ui->labelDette->setText( "Dette limitée à : " + QString::number( Settings::getDetteKFtier() ) + QString(8364) );
    }
    else
    {
        ui->labelDette->setText( "Dette limitée à : " + QString::number( Settings::getDetteClient() ) + QString(8364) );
    }
}

void MainWindow::editionClient()
{
    if( this->clientSelectionner() )
    {
        CClient* client = this->getSelectedClient();
        FenetreEditionClient fenetre( client->getID(), this );
        fenetre.exec();
        updateAllClient();
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Veuillez d'abord selectionner un client.");
    }
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
    ui->actionPromo_UP->setEnabled( true );
    ui->delContact->setEnabled( true );
    ui->subMoney->setEnabled( true );
    ui->manageProduct->setEnabled( true );
    ui->actionLimite_de_dette->setEnabled( true );
}

void MainWindow::rendreUser()
{
    CLog::ecrire( "L'utilisateur perd les droits d'administrateur" );
    admin = false;
    ui->actionPromo_UP->setEnabled( false );
    ui->actionGestion_des_produits->setEnabled(false);
    ui->actionSuper_Utilisateur->setVisible(true);
    ui->actionSe_deconnecter->setVisible(false);
    ui->actionChanger_mot_de_passe_Admin->setVisible(false);
    ui->delContact->setEnabled( false );
    ui->subMoney->setEnabled( false );
    ui->manageProduct->setEnabled( false );
    ui->actionLimite_de_dette->setEnabled( false );
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
    CTab* tab = static_cast<CTab*>( ui->tabWidget->widget( ui->tabWidget->currentIndex() ) );

    return tab->updateClient();
}

void MainWindow::updateAllClient()
{
    for( int i = 0; i < listTab.size(); i++ )
    {
        listTab[i]->updateClient();
    }
}

void MainWindow::construirePanneauProduit()
{
    QList<int> listIdBouton = Settings::getBoutonList();

    int ligne = 0;
    for( int iBoucle = 0; iBoucle < listIdBouton.size(); iBoucle++ )
    {
        CProduct product = CGestionBDD::getProduct( listIdBouton[iBoucle] );
        product.setNumBouton(iBoucle);

        CProduct* produit = new CProduct( product );
        listProduct.append( produit );

        ToolButton* bouton = new ToolButton( ui->gridLayout_6, iBoucle, this );
        bouton->setIcon( QIcon( QDir::currentPath() + product.getChemin() ) );
        bouton->setText( product.getNom() + " " + product.getPrix() + QString(8364) );
        bouton->setIconSize( QSize( 72, 72 ) );
        bouton->setToolButtonStyle( Qt::ToolButtonTextUnderIcon );
        bouton->setFont( QFont( "Raavi", 11, QFont::Bold ) );
        bouton->setFixedSize( 165, 110 );
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

bool MainWindow::clientSelectionner()
{
    CTab* tab = static_cast<CTab*>( ui->tabWidget->widget( ui->tabWidget->currentIndex() ) );

    return tab->clientSelectionner();
}

CClient* MainWindow::getSelectedClient()
{
    CTab* tab = static_cast<CTab*>( ui->tabWidget->widget( ui->tabWidget->currentIndex() ) );

    return tab->getSelectedClient();
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
        ToolButton* bouton = static_cast<ToolButton*>( object );
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
        msgBox.setText("Etes-vous sûr de vouloir supprimer définitivement " + client->getNom() + " " + client->getPrenom() + " ?" );
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

void MainWindow::changerLimiteDette()
{
    FenetreChangerLimiteDette fenetre( this );
    fenetre.exec();
    updateLabelDette();
    updateAllClient();
}
