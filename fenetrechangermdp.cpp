#include "fenetrechangermdp.h"
#include "ui_fenetrechangermdp.h"

FenetreChangerMDP::FenetreChangerMDP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreChangerMDP)
{
    ui->setupUi(this);

    connect( ui->buttonBox, SIGNAL(accepted()), this, SLOT(changerMotDePasse()) );
}

FenetreChangerMDP::~FenetreChangerMDP()
{
    delete ui;
}

void FenetreChangerMDP::changerMotDePasse()
{
    qDebug() << ui->lineEdit->text() << ui->lineEdit_2->text() << ui->lineEdit_3->text() <<( ui->lineEdit_2->text() == ui->lineEdit_3->text() );

    if( CGestionBDD::identification( ui->lineEdit->text() ) && ( ui->lineEdit_2->text() == ui->lineEdit_3->text() ) )
    {
        CGestionBDD::changerMDP( ui->lineEdit_3->text() );
        QMessageBox::information( this, "KFet", "Votre mot de passe a bien été changé.");
        CLog::ecrire( "Le mot de passe à été changé" );
    }
    else
    {
        QMessageBox::warning( this, "KFet", "Impossible de changer le mot de passe veuillez ressayer." );
        CLog::ecrire( "Echec du changement de mot de passe" );
    }
}
