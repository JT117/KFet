#include "fenetreeditionclient.h"
#include "ui_fenetreeditionclient.h"

FenetreEditionClient::FenetreEditionClient( int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreEditionClient)
{
    ui->setupUi(this);

    client = CGestionBDD::getClient( id );

    ui->nomLineEdit->setText( client.getNom() );
    ui->prenomLineEdit->setText( client.getPrenom() );

    ui->promoComboBox->addItem( "DI3");
    ui->promoComboBox->addItem( "DI4");
    ui->promoComboBox->addItem( "DI5");
    ui->promoComboBox->addItem( "DA3");
    ui->promoComboBox->addItem( "DA4");
    ui->promoComboBox->addItem( "DA5");
    ui->promoComboBox->addItem( "DP3");
    ui->promoComboBox->addItem( "DP4");
    ui->promoComboBox->addItem( "DP5");

    int match = 0;

    for( int i = 0; i < ui->promoComboBox->count(); i++ )
    {
        ui->promoComboBox->setCurrentIndex( i );

        if( ui->promoComboBox->currentText() == client.getPromo() )
        {
            match = i;
        }
    }

    ui->promoComboBox->setCurrentIndex( match );

    connect( ui->boutonOK, SIGNAL(clicked()), this, SLOT( edition() ) );
    connect( ui->boutonAnnuler, SIGNAL(clicked()), this, SLOT(close()) );
}

FenetreEditionClient::~FenetreEditionClient()
{
    delete ui;
}

void FenetreEditionClient::edition()
{
    if( ui->nomLineEdit->text() != "" && ui->prenomLineEdit->text() != "" )
    {
        CClient client1( client.getID(), ui->nomLineEdit->text(), ui->prenomLineEdit->text(), client.getDette(), ui->promoComboBox->currentText(), "none" );
        CLog::ecrire( "Edition d'un client : " + client.getNom() + " -> " + client1.getNom() + " | " + client.getPrenom()
                      + " -> " + client1.getPrenom() + " | " + client.getPromo() + " -> " + client1.getPromo() );

        CGestionBDD::updateClient( client1 );
        close();
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Veuillez remplir correctement les champs nom et prénom." );
    }
}







