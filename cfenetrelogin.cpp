#include "cfenetrelogin.h"
#include "ui_cfenetrelogin.h"

CFenetreLogin::CFenetreLogin( MainWindow* main, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFenetreLogin)
{
    ui->setupUi(this);
    fenetrePrincipale = main;
    connect( ui->buttonBox, SIGNAL( accepted() ), this, SLOT( login() ) );
    ui->lineEdit->setFocus();
}

CFenetreLogin::~CFenetreLogin()
{
    delete ui;
}


void CFenetreLogin::login()
{
    if( CGestionBDD::identification( ui->lineEdit->text() ) )
    {
        qDebug() << "Succes" << endl;
        QString test = ui->lineEdit->text();
        QMessageBox::information( this, "KFet", "Vous avez maintenant tous les droits sur le logiciel");
        fenetrePrincipale->rendreAdmin();
    }
    else
    {
        qDebug() << "Acces Denied"  << endl;
        QMessageBox::warning( this, "KFet", "L'authentification a echou�. Veuillez recommencer");
    }
}
