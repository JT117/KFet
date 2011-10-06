#include "cfenetreajouttab.h"
#include "ui_cfenetreajouttab.h"
#include "Qstring"


cfenetreajouttab::cfenetreajouttab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cfenetreajouttab)
{
    ui->setupUi(this);
    connect(ui->ppbFATboutonok,SIGNAL(clicked()),this,SLOT(ajoutertab()));
    connect(ui->ppbFATboutonannuler,SIGNAL(clicked()),this,SLOT(close()));
}

cfenetreajouttab::~cfenetreajouttab()
{
    delete ui;
}


void cfenetreajouttab::ajoutertab()
{


    qDebug() <<     ui->pleFATlineeditnomdelatabulation->text()<< ui->pleFATlineeditnombredecolonne->text() <<endl;
}
