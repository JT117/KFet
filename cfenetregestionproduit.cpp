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

    connect( ui->ppbFGPajouter, SIGNAL(clicked()), this, SLOT(ajouter()) );
    connect( ui->ppbFGPsupprimer, SIGNAL(clicked()), this, SLOT(supprimer()) );
    connect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
    connect( ui->ppbFGPok, SIGNAL(clicked()), this, SLOT(accept()) );
}

CFenetreGestionProduit::~CFenetreGestionProduit()
{
    delete ui;
    this->nettoyerListe();
    mainWindow->updateProduit();
}

void CFenetreGestionProduit::nettoyerListe()
{
    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        delete listProduct.at( iBoucle );
    }
    listProduct.clear();
}

void CFenetreGestionProduit::ajouter()
{
    CFenetreAjoutProduit fenetreAjout;
    fenetreAjout.exec();
    this->updateTable();
}

void CFenetreGestionProduit::updateTable()
{
    ui->ptwFGPtableProduct->clear();

    this->setupTable();
}

void CFenetreGestionProduit::supprimer()
{
    if( ui->ptwFGPtableProduct->rowCount() > 0 )
    {
        int row  = ui->ptwFGPtableProduct->currentRow();

        CProduct* product;

        for( int iBoucle =0; iBoucle < listProduct.size(); iBoucle++ )
        {
            if( listProduct.at( iBoucle )->getNumLigne() ==  row )
            {
                product = listProduct.at( iBoucle );
            }
        }

        QMessageBox msgBox;
        msgBox.setText("Etes-vous sûr de vouloir suppimer le produit ?");
        msgBox.setInformativeText( product->getNom() + " " + product->getPrix() );
        msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setIcon( QMessageBox::Question );
        int ret = msgBox.exec();

        if( ret == QMessageBox::Ok )
        {
            CLog::ecrire( "Suppression du produit : " + product->getNom() + " " + product->getPrix() );
            QFile image( QDir::currentPath() + product->getChemin() );
            image.remove();
            CGestionBDD::removeProduct( *product );
            this->updateTable();
        }
    }
}

void CFenetreGestionProduit::setupTable()
{
    disconnect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
    disconnect(ui->ptwFGPtableProduct, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(celluleClicked(int,int) ));

    QStringList header;
    header << "Produit" << "Prix" << "Chemin de l'image";

    this->nettoyerListe();
    CGestionBDD::getProductList( listProduct );

    ui->ptwFGPtableProduct->setColumnCount(3);
    ui->ptwFGPtableProduct->setHorizontalHeaderLabels( header );

    ui->ptwFGPtableProduct->setRowCount( listProduct.size() );

    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        QTableWidgetItem* nom = new QTableWidgetItem( listProduct.at( iBoucle )->getNom() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 0, nom );
        QTableWidgetItem* prix = new QTableWidgetItem( listProduct.at( iBoucle )->getPrix() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 1, prix );
        QTableWidgetItem* chemin = new QTableWidgetItem( listProduct.at( iBoucle )->getChemin() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 2, chemin );

        listProduct.at(iBoucle)->setNumLigne( iBoucle );
    }

     connect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
     connect( ui->ptwFGPtableProduct, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(celluleClicked(int,int) ));
}

void CFenetreGestionProduit::celluleChanged( int row, int y )
{
    QTableWidgetItem* nom = ui->ptwFGPtableProduct->item( row, 0 );
    QTableWidgetItem* prix = ui->ptwFGPtableProduct->item( row, 1 );
    QTableWidgetItem* cheminImage = ui->ptwFGPtableProduct->item( row, 2 );

    for( int i = 0; i < listProduct.size(); i++ )
    {
        if( listProduct.at(i)->getNumLigne() == row )
        {
            CProduct product( listProduct.at(i)->getId(), nom->text(), prix->text(), cheminImage->text() );
            CLog::ecrire( "Modification d'un produit : " + QString::number( listProduct.at(i)->getId() ) + " " + nom->text() + " " + prix->text() + " " + cheminImage->text() );
            CGestionBDD::updateProduct( product );

            this->updateTable();
        }
    }
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
        for( int i = 0; i < listProduct.size(); i++ )
        {
            if( listProduct.at(i)->getNumLigne() == x )
            {
                QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir", listProduct.at(i)->getChemin() , "Image (*.png *.jpg *.bmp)" );

                if( fileName.isEmpty() == false )
                {
                    QFile image( fileName );
                    QStringList listDecoupeChemin = fileName.split( '/' );
                    image.copy( QDir::currentPath() + "/systeme/image/" + listDecoupeChemin.last() );

                    listProduct.at(i)->setChemin( "/systeme/image/" + listDecoupeChemin.last() );
                    CGestionBDD::updateProduct( *(listProduct.at(i)) );
                }

                i = listProduct.size()+1;
            }
        }
        this->updateTable();
    }
}


