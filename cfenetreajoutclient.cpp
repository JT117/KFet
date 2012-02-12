#include "cfenetreajoutclient.h"
#include "ui_cfenetreajoutclient.h"

CFenetreAjoutClient::CFenetreAjoutClient(MainWindow* main, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreAjoutClient)
{
    ui->setupUi(this);

    mainWindow = main;

    ui->promoComboBox->addItems( Settings::getTablist() );
    ui->nomLineEdit->setFocus();

    connect( ui->boutonAjouter, SIGNAL(clicked()), this, SLOT(validation()) );
    connect( ui->boutonAnnuler, SIGNAL(clicked()), this, SLOT(close()) );
}

CFenetreAjoutClient::~CFenetreAjoutClient()
{
    delete ui;
}

void CFenetreAjoutClient::validation()
{
    if( !ui->nomLineEdit->text().isEmpty() && !ui->prenomLineEdtit->text().isEmpty() && !ui->promoComboBox->currentText().isEmpty() )
    {
        CClient client(0, ui->nomLineEdit->text(), ui->prenomLineEdtit->text(), 0, ui->promoComboBox->currentText() , "none" );
        CGestionBDD::addClient( client );
        CLog::ecrire( "Client ajouté :" + ui->nomLineEdit->text() + " " + ui->prenomLineEdtit->text() + " " + ui->promoComboBox->currentText() );
        mainWindow->updateAllClient();
        this->close();
    }
    else
    {
        QMessageBox::information( this, "KFet", "Veuillez remplir tous les champs du formulaire" );
    }
}
