#include "cfenetregestionproduit.h"
#include "ui_cfenetregestionproduit.h"

CFenetreGestionProduit::CFenetreGestionProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreGestionProduit)
{
    ui->setupUi(this);

    this->setupTable();

    connect( ui->ppbFGPajouter, SIGNAL(clicked()), this, SLOT(ajouter()) );
    connect( ui->ppbFGPsupprimer, SIGNAL(clicked()), this, SLOT(supprimer()) );
    connect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
}

CFenetreGestionProduit::~CFenetreGestionProduit()
{
    delete ui;
    this->nettoyerListe();
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

        QTableWidgetItem* item = ui->ptwFGPtableProduct->item( row, 0 );

        CProduct* product;

        for( int iBoucle =0; iBoucle < listProduct.size(); iBoucle++ )
        {
            if( listProduct.at( iBoucle )->getId() ==  item->text().toInt() )
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

    QStringList header;
    header << "ID" << "Nom" << "Prix" << "Chemin image";

    this->nettoyerListe();
    CGestionBDD::getProductList( listProduct );

    ui->ptwFGPtableProduct->setColumnCount(4);
    ui->ptwFGPtableProduct->setHorizontalHeaderLabels( header );

    ui->ptwFGPtableProduct->setRowCount( listProduct.size() );

    for( int iBoucle = 0; iBoucle < listProduct.size(); iBoucle++ )
    {
        QTableWidgetItem* id = new QTableWidgetItem( QString::number( listProduct.at( iBoucle )->getId() ) );
        ui->ptwFGPtableProduct->setItem( iBoucle, 0, id );
        QTableWidgetItem* nom = new QTableWidgetItem( listProduct.at( iBoucle )->getNom() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 1, nom );
        QTableWidgetItem* prix = new QTableWidgetItem( listProduct.at( iBoucle )->getPrix() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 2, prix );
        QTableWidgetItem* chemin = new QTableWidgetItem( listProduct.at( iBoucle )->getChemin() );
        ui->ptwFGPtableProduct->setItem( iBoucle, 3, chemin );
    }

     connect( ui->ptwFGPtableProduct, SIGNAL(cellChanged(int,int)), this, SLOT( celluleChanged(int,int) ) );
}

void CFenetreGestionProduit::celluleChanged( int row, int y )
{
    QTableWidgetItem* id = ui->ptwFGPtableProduct->item( row, 0 );
    QTableWidgetItem* nom = ui->ptwFGPtableProduct->item( row, 1 );
    QTableWidgetItem* prix = ui->ptwFGPtableProduct->item( row, 2 );
    QTableWidgetItem* cheminImage = ui->ptwFGPtableProduct->item( row, 3 );

    CProduct product( id->text().toInt(), nom->text(), prix->text(), cheminImage->text() );
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
