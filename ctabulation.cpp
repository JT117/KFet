#include "ctabulation.h"
#include "ui_ctabulation.h"

CTabulation::CTabulation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTabulation)
{
    ui->setupUi(this);
}

CTabulation::~CTabulation()
{
    delete ui;
}
