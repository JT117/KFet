#include "fenetrenouvelletab.h"
#include "ui_fenetrenouvelletab.h"

fenetreNouvelleTab::fenetreNouvelleTab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fenetreNouvelleTab)
{
    ui->setupUi(this);

    connect( ui->bontouOK, SIGNAL(clicked()), this, SLOT( validation() ) );
    connect( ui->boutonAnnuler, SIGNAL(clicked()), this, SLOT(close()) );
}

fenetreNouvelleTab::~fenetreNouvelleTab()
{
    delete ui;
}

void fenetreNouvelleTab::validation()
{
    QStringList liste = Settings::getTablist();

    if( ui->lineEdit->text().isEmpty() )
    {
        QMessageBox::warning( this, "KFet", "Veuillez donner un nom au nouvel onglet." );
    }
    else if( liste.contains( ui->lineEdit->text() ) )
    {
        QMessageBox::warning( this, "KFet", "Ce nom est déjà utilisé, veuillez en choisir un autre." );
        ui->lineEdit->clear();
    }
    else
    {
        liste.append( ui->lineEdit->text() );

        Settings::setTabList( liste );

        QMessageBox::information( this, "KFet", "Onglet " + ui->lineEdit->text() + " bien ajouté" );

        close();
    }
}
