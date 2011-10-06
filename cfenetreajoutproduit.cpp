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
    qDebug() << ui->pleFAPnomproduit->text() << ui->pleFAPprix->text() << endl;


}
