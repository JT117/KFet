#include "cfenetreapprovisionnement.h"
#include "ui_cfenetreapprovisionnement.h"

CFenetreApprovisionnement::CFenetreApprovisionnement(MainWindow* main, CClient* client1, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreApprovisionnement)
{
    ui->setupUi(this);

    mainWindow = main;
    client = client1;

    connect( ui->boutonAnnuler, SIGNAL(clicked()), this, SLOT(close()) );
    connect( ui->boutonAjouter, SIGNAL(clicked()), this, SLOT(validation()) );
}

CFenetreApprovisionnement::~CFenetreApprovisionnement()
{
    delete ui;
}

void CFenetreApprovisionnement::validation()
{
    if( ui->spinBox->value() > 0 )
    {
        QDate date = QDate::currentDate();
        QTime time = QTime::currentTime();
        QString dateString = date.toString( Qt::ISODate );
        QString timeString = time.toString();

        int idDate = CGestionBDD::addDate( dateString, timeString );
        int idClient = client->getID();

        CGestionBDD::addApprovisionnement( idClient, idDate, ui->spinBox->value() );

        qDebug() << client->getDette();
        client->ajouterApprovisionnement( ui->spinBox->value() );
        qDebug() << client->getDette();
        CGestionBDD::updateClient( *client );

        CLog::ecrire( "Credit de : " + QString::number( ui->spinBox->value() ) + " à " + client->getNom() + " " + client->getPrenom() );

        QMessageBox::information( this, "KFet", "Vous avez bien ajouté " + QString::number( ui->spinBox->value() ) + QString(8364) + " en crédit à " + client->getNom() +
                                  " " + client->getPrenom() );

        mainWindow->updateClient();
        this->close();
    }
}
