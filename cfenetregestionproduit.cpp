#include "cfenetregestionproduit.h"
#include "ui_cfenetregestionproduit.h"

CFenetreGestionProduit::CFenetreGestionProduit(MainWindow* main, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreGestionProduit)
{
    ui->setupUi(this);
    mainWindow = main;

    this->setupTable();
    this->setWindowTitle("KFet - Gestion des produits");

    ui->ppbFGPajouter->setIcon( QIcon( QDir::currentPath() + "/systeme/ajouter.ico" ) );
    ui->ppbFGPsupprimer->setIcon( QIcon( QDir::currentPath() + "/systeme/supprimer.ico" ) );
    ui->ppbFGPhistorique->setIcon( QIcon( QDir::currentPath() + "/systeme/historique.ico" ) );

    connect( ui->ppbFGPajouter, SIGNAL(clicked()), this, SLOT(ajouter()) );
    connect( ui->ppbFGPsupprimer, SIGNAL(clicked()), this, SLOT(supprimer()) );
    connect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
    connect( ui->ppbFGPok, SIGNAL(clicked()), this, SLOT(accept()) );
    connect( ui->ppbFGPhistorique, SIGNAL(clicked()), this, SLOT( historique() ) );
}

CFenetreGestionProduit::~CFenetreGestionProduit()
{
    delete ui;
    this->nettoyerListe();
    mainWindow->updateProduit();
}

void CFenetreGestionProduit::ajouter()
{
    CFenetreAjoutProduit fenetreAjout;
    fenetreAjout.exec();
}

void CFenetreGestionProduit::nettoyerListe()
{
    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        listProduct[iBoucle]->getListItem().clear();
        delete listProduct[iBoucle];
    }
    listProduct.clear();
}

void CFenetreGestionProduit::historique()
{
    if( ui->ptwFGPtableProduct->selectedItems().size() > 0 )
    {
        int row  = ui->ptwFGPtableProduct->currentRow();

        CProduct product = retrouverProduit( ui->ptwFGPtableProduct->item( row , 0 ) );

        fenetreHistoriqueProduit fenetreAjout( product.getId(), this );
        fenetreAjout.exec();
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Vous devez d'abord selectionner un produit pour voir son historique." );
    }
}

void CFenetreGestionProduit::updateTable()
{
    ui->ptwFGPtableProduct->clear();

    this->setupTable();
}

void CFenetreGestionProduit::supprimer()     //Besoin de retrouver le produit
{
    if( ui->ptwFGPtableProduct->rowCount() > 0 && ui->ptwFGPtableProduct->selectedItems().size() > 0 )
    {
        int row  = ui->ptwFGPtableProduct->currentRow();

        CProduct product = retrouverProduit( ui->ptwFGPtableProduct->item( row , 0 ) );

        QMessageBox msgBox;
        msgBox.setText("Etes-vous sûr de vouloir suppimer le produit ?");
        msgBox.setInformativeText( product.getNom() + " " + product.getPrix() );
        msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setIcon( QMessageBox::Question );
        int ret = msgBox.exec();

        if( ret == QMessageBox::Ok )
        {
            CLog::ecrire( "Suppression du produit : " + product.getNom() + " " + product.getPrix() );
            QFile image( QDir::currentPath() + product.getChemin() );
            image.remove();
            CGestionBDD::removeProduct( product );
            this->updateTable();
        }
    }
}

void CFenetreGestionProduit::setupTable()
{
    ui->ptwFGPtableProduct->reset();
    ui->ptwFGPtableProduct->setSortingEnabled(false);

    disconnect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
    disconnect(ui->ptwFGPtableProduct, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(celluleClicked(int,int) ));

    QStringList header;
    header << "Produit" << "Prix" << "Chemin de l'image";

    ui->ptwFGPtableProduct->setColumnCount(3);
    ui->ptwFGPtableProduct->setHorizontalHeaderLabels( header );

    this->nettoyerListe();
    CGestionBDD::getProductList( listProduct );

    ui->ptwFGPtableProduct->setRowCount( listProduct.size() );    

    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        QTableWidgetItem* nom = new QTableWidgetItem( listProduct[iBoucle]->getNom() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 0, nom );
        QTableWidgetItem* prix = new QTableWidgetItem( listProduct[iBoucle]->getPrix() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 1, prix );
        QTableWidgetItem* chemin = new QTableWidgetItem( listProduct[iBoucle]->getChemin() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 2, chemin );

        listProduct[iBoucle]->getListItem().append( nom );
        listProduct[iBoucle]->getListItem().append( prix );
        listProduct[iBoucle]->getListItem().append( chemin );
    }

    ui->ptwFGPtableProduct->setSortingEnabled( true );
    ui->ptwFGPtableProduct->sortItems( 0 );

    connect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
    connect( ui->ptwFGPtableProduct, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(celluleClicked(int,int) ));
}

void CFenetreGestionProduit::celluleChanged( int row, int y )
{
    QTableWidgetItem* nom = ui->ptwFGPtableProduct->item( row, 0 );
    QTableWidgetItem* prix = ui->ptwFGPtableProduct->item( row, 1 );
    QTableWidgetItem* cheminImage = ui->ptwFGPtableProduct->item( row, 2 );

    CProduct produit = retrouverProduit( nom );
    CProduct product( produit.getId(), nom->text(), prix->text(), cheminImage->text() );
    CLog::ecrire( "Modification d'un produit : " + QString::number( produit.getId() ) + " " + nom->text() + " " + prix->text() + " " + cheminImage->text() );
    CGestionBDD::updateProduct( product );

    this->updateTable();
}

void CFenetreGestionProduit::keyPressEvent ( QKeyEvent * event )
{
    if( event->key() == Qt::Key_Delete )
    {
        this->supprimer();
    }
}

void CFenetreGestionProduit::celluleClicked(int x, int y)
{
    if( y == 2 )
    {
        CProduct product = retrouverProduit( ui->ptwFGPtableProduct->item( x, 0 ) );

        QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir", product.getChemin() , "Image (*.png *.jpg *.bmp)" );

        if( fileName.isEmpty() == false )
        {
            QFile image( fileName );
            QStringList listDecoupeChemin = fileName.split( '/' );
            image.copy( QDir::currentPath() + "/systeme/image/" + listDecoupeChemin.last() );

            product.setChemin( "/systeme/image/" + listDecoupeChemin.last() );
            CGestionBDD::updateProduct( product );
        }

        this->updateTable();
    }
}

CProduct& CFenetreGestionProduit::retrouverProduit( QTableWidgetItem* item )
{
    for( int i = 0; i < listProduct.size(); i++ )
    {
        QList<QTableWidgetItem*> list = listProduct[i]->getListItem();

        if( list.contains( item ) )
        {
            qDebug() << listProduct[i]->getNom() ;
            return *(listProduct[i]);
        }
    }
}





