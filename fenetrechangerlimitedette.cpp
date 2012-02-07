#include "fenetrechangerlimitedette.h"
#include "ui_fenetrechangerlimitedette.h"

FenetreChangerLimiteDette::FenetreChangerLimiteDette(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreChangerLimiteDette)
{
    ui->setupUi(this);

    settings = new QSettings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings->beginGroup("Limite de dette");
    detteClient = settings->value( "Client", sizeof( float ) ).toFloat();
    detteKFtier = settings->value( "KFtier", sizeof( float ) ).toFloat();
    settings->endGroup();

    ui->spinBoxClient->setValue( (double)detteClient );
    ui->spinBoxKFtier->setValue( (double)detteKFtier );

    connect( ui->boutonOk, SIGNAL(clicked()), this, SLOT(validation()) );
}

FenetreChangerLimiteDette::~FenetreChangerLimiteDette()
{
    delete ui;
    delete settings;
}

void FenetreChangerLimiteDette::validation()
{
    settings->beginGroup("Limite de dette");
    settings->setValue( "Client", (float)ui->spinBoxClient->value() );
    settings->setValue( "KFtier", (float)ui->spinBoxKFtier->value() );
    settings->endGroup();

    close();
}
