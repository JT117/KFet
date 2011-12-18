#include "cfenetreajoutclient.h"
#include "ui_cfenetreajoutclient.h"

CFenetreAjoutClient::CFenetreAjoutClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreAjoutClient)
{
    ui->setupUi(this);
}

CFenetreAjoutClient::~CFenetreAjoutClient()
{
    delete ui;
}
