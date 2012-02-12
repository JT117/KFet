#include "fenetresetdette.h"
#include "ui_fenetresetdette.h"

FenetreSetDette::FenetreSetDette(int index, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreSetDette)
{
    ui->setupUi(this);

    client = CGestionBDD::getClient( index );
    ancienneValeur = client.getDette();

    ui->doubleSpinBox->setValue( ancienneValeur );
    ui->doubleSpinBox->setFocus();

    connect( ui->boutonOK, SIGNAL(clicked()), this, SLOT( validation() ) );
    connect( ui->boutonAnnuler, SIGNAL(clicked()), this, SLOT(close() ) );
}

FenetreSetDette::~FenetreSetDette()
{
    delete ui;
}

void FenetreSetDette::validation()
{
    if( ui->doubleSpinBox->value() != ancienneValeur )
    {
        client.setDette( (float)ui->doubleSpinBox->value() );
        CGestionBDD::updateClient( client );

        CLog::ecrire( "Set dette du client " + client.getNom() + " " + client.getPrenom() + " de : " + QString::number( ancienneValeur ) + " à " +
                      ui->doubleSpinBox->value() );
    }

    close();
}
