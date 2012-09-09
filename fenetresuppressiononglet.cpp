#include "fenetresuppressiononglet.h"
#include "ui_fenetresuppressiononglet.h"

FenetreSuppressionOnglet::FenetreSuppressionOnglet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreSuppressionOnglet)
{
    ui->setupUi(this);

    QStringList listTab = Settings::getTablist();
    ui->comboBox->addItems( listTab );

    connect( ui->pushButtonOk, SIGNAL(clicked()), this, SLOT( validation()) );
    connect( ui->pushButtonAnnuler, SIGNAL(clicked()), this, SLOT( close()) );
}

FenetreSuppressionOnglet::~FenetreSuppressionOnglet()
{
    delete ui;
}

void FenetreSuppressionOnglet::validation()
{
    QMessageBox msgBox;
    msgBox.setText("Etes-vous sûr de vouloir suppimer cet onglet" + ui->comboBox->currentText() + "?");
    msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setIcon( QMessageBox::Question );
    int ret = msgBox.exec();

    if( ret == QMessageBox::Ok && ui->comboBox->currentText() != "Save" )
    {
        CLog::ecrire( "Suppression de l'onglet : " + ui->comboBox->currentText() );
        CGestionBDD::updatePromo( ui->comboBox->currentText(), "Save" );
        QStringList listTab = Settings::getTablist();
        listTab.removeAll( ui->comboBox->currentText() );
        Settings::setTabList( listTab );

        close();
    }
}
