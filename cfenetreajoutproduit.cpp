#include "cfenetreajoutproduit.h"
#include "ui_cfenetreajoutproduit.h"

CFenetreAjoutProduit::CFenetreAjoutProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreAjoutProduit)
{
    ui->setupUi(this);

    connect(ui->ppbFAPAnnuler,SIGNAL(clicked()),this,SLOT(close()));

    connect(ui->ppbFAPboutonOK,SIGNAL(clicked()),this,SLOT(afficher()));


}

CFenetreAjoutProduit::~CFenetreAjoutProduit()
{
    delete ui;
}

void CFenetreAjoutProduit::afficher()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName("kfet");
    bool ok = db.open();
    qDebug() << db.tables() << endl;

    if (ok)
    {
        QSqlQuery query;
        query.exec("INSERT INTO Product (id, nom, prix)"
       "VALUES ( '', '" + ui->pleFAPnomproduit->text() + "', '" + ui->pleFAPnomproduit->text() + "' )");

        qDebug() << "INSERT INTO Product(id, nom, prix) VALUES( '', '" + ui->pleFAPnomproduit->text() + "', '" + ui->pleFAPprix->text() + "' )" ;

        query.exec("SELECT * FROM Product");

        QString nom = query.value(1).toString();

        qDebug() << ui->pleFAPnomproduit->text() << ui->pleFAPprix->text() << endl;

        qDebug() << nom << endl;
    }




}
