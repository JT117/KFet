#include "cfenetreajoutproduit.h"
#include "ui_cfenetreajoutproduit.h"

CFenetreAjoutProduit::CFenetreAjoutProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreAjoutProduit)
{
    ui->setupUi(this);

    connect(ui->ppbFAPAnnuler,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->ppbFAPboutonOK,SIGNAL(clicked()),this,SLOT(ajouter()));
    connect( ui->ppbFAPparcourir, SIGNAL(clicked()), this, SLOT( ouvrirFichier() ) );
}

CFenetreAjoutProduit::~CFenetreAjoutProduit()
{
    delete ui;
}

void CFenetreAjoutProduit::ajouter()
{
    if( ui->pleFAPnomproduit->text() != "" && ui->pleFAPprix->text() != "" && ui->pleFAPcheminImage->text() != "" )
    {
        bool ok = true;
        float prix = ui->pleFAPprix->text().toFloat( &ok );

        if( ok && prix > 0.0 && prix < 50 )
        {
            QString fileName = ui->pleFAPcheminImage->text();
            QFile image( fileName );
            QStringList listDecoupeChemin = fileName.split( '/' );

            image.copy( QDir::currentPath() + "/systeme/image/" + listDecoupeChemin.last() );

            CProduct product( 0, ui->pleFAPnomproduit->text(), ui->pleFAPprix->text(), "/systeme/image/" + listDecoupeChemin.last() );
            CGestionBDD::addProduct( product );
            this->accept();
        }
        else
        {
            QMessageBox::warning( this, "KFet", "Veuillez indiquez un prix valide." );
        }
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Veuillez remplir tout les champs." );
    }
}

void CFenetreAjoutProduit::ouvrirFichier()
{
    QString currentDir = QDir::currentPath();
    QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir", currentDir , "Image (*.png *.jpg *.bmp)" );

    ui->pleFAPcheminImage->setText( fileName );

}
