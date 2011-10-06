#include "cfenetregestioncalendrier.h"
#include "ui_cfenetregestioncalendrier.h"

CFenetreGestionCalendrier::CFenetreGestionCalendrier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreGestionCalendrier)
{
    ui->setupUi(this);

    connect(ui->ppbFGCboutonannuler,SIGNAL(clicked()),this,SLOT(close()));


}

CFenetreGestionCalendrier::~CFenetreGestionCalendrier()
{
    delete ui;
}
