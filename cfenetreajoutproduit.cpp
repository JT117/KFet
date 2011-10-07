#include "cfenetreajoutproduit.h"
#include "ui_cfenetreajoutproduit.h"

CFenetreAjoutProduit::CFenetreAjoutProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreAjoutProduit)
{
    ui->setupUi(this);

    connect(ui->ppbFAPAnnuler,SIGNAL(clicked()),this,SLOT(close()));

    connect(ui->ppbFAPboutonOK,SIGNAL(clicked()),this,SLOT(ajouter()));

    this->afficher();

}

CFenetreAjoutProduit::~CFenetreAjoutProduit()
{
    delete ui;
}

void CFenetreAjoutProduit::ajouter()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName("kfet");
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec("INSERT INTO Product (nom, prix) VALUES ( '" + ui->pleFAPnomproduit->text() + "', '" + ui->pleFAPprix->text() + "' )");

        db.close();
    }
    else
    {
        QMessageBox::warning( this, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }

}

void CFenetreAjoutProduit::afficher()
{
    QList<CProduct*>* listProduit = CGestionBDD::getProductList();

    for( int iBoucle = 0; iBoucle < listProduit->size(); iBoucle++ )
    {
        listProduit->at(iBoucle)->afficher();
    }
}

