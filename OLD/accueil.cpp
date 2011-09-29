#include "accueil.h"
#include "ui_accueil.h"

accueil::accueil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accueil)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    ui->frame->setStyleSheet("QFrame{ background-color : #6666FF; border-style: outset; border-width: 2px; border-radius: 10px;} QLabel{ border-style : none;}");

}

accueil::~accueil()
{
    delete ui;
}
