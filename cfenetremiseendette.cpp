#include "cfenetremiseendette.h"
#include "ui_cfenetremiseendette.h"

CFenetreMiseEnDette::CFenetreMiseEnDette(MainWindow* main, CClient* client1, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreMiseEnDette)
{
    ui->setupUi(this);

    mainWindow = main;
    client = client1;

    connect( ui->boutonAnnuler, SIGNAL(clicked()), this, SLOT(close()) );
    connect( ui->boutonAjouter, SIGNAL(clicked()), this, SLOT(validation()) );
}

CFenetreMiseEnDette::~CFenetreMiseEnDette()
{
    delete ui;
}

void CFenetreMiseEnDette::validation()
{
    if( ui->spinBox->value() > 0 )
    {
        QDate date = QDate::currentDate();
        QTime time = QTime::currentTime();
        QString dateString = date.toString( Qt::ISODate );
        QString timeString = time.toString();

        int idDate = CGestionBDD::addDate( dateString, timeString );
        int idClient = client->getID();

        CGestionBDD::addDette(idClient, -1, idDate, ui->spinBox->value() );

        client->ajouterDette( ui->spinBox->value() );
        CGestionBDD::updateClient( *client );

        CLog::ecrire( "Dette de : " + QString::number( ui->spinBox->value() ) + " à " + client->getNom() + " " + client->getPrenom() );

        QMessageBox::information( this, "KFet", "Vous avez bien ajouté " + QString::number( ui->spinBox->value() ) + QString(8364) +" en dette à " + client->getNom() +
                                  " " + client->getPrenom() );

        mainWindow->updateClient();
        this->close();
    }
}
