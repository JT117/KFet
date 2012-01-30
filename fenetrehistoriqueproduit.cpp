#include "fenetrehistoriqueproduit.h"
#include "ui_fenetrehistoriqueproduit.h"

fenetreHistoriqueProduit::fenetreHistoriqueProduit( int i, QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::fenetreHistoriqueProduit)
{
    ui->setupUi(this);

    scene = new QGraphicsScene( 0, 0, 880, 601 );
    ui->graphicsView->setScene( scene );
    ui->graphicsView->setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    ui->graphicsView->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );

    int nombreSemaine = 6;

    QList<int> quantite = CGestionBDD::getHistorique( i, nombreSemaine );
    CProduct produit = CGestionBDD::getProduct( i );

    ui->titre->setText( "Produit : " + produit.getNom() + " - prix : " + produit.getPrix() );

    if( quantite.size() == 0 )
    {
        for( int i = 0; i < nombreSemaine; i++ )
        {
            quantite.append(0);
        }
    }

    int largeur = ui->graphicsView->width();
    int hauteur = ui->graphicsView->height();
    int largeurColonne = (int)(largeur / nombreSemaine);
    int positionDepartX = 1;
    int max = maximumListInt( quantite );
    int pasHauteur = (int)( (hauteur - 30) / max );

    QDate date = QDate::currentDate();
    QDate date1 = date;
    date = date.addDays( -7 );

    QLabel* l1 = new QLabel( QString::number( max ) );
    ui->verticalLayout->addWidget( l1 );
    ui->verticalLayout->addStretch( 2 );

    QLabel* l2 = new QLabel( QString::number( (float)max/2 ) );
    ui->verticalLayout->addWidget( l2 );
    ui->verticalLayout->addStretch( 2 );

    QLabel* l3 = new QLabel( QString::number( 0 ) );
    ui->verticalLayout->addWidget( l3 );

    ui->horizontalLayout->addStretch( 1 );

    for( int i = 0; i < nombreSemaine; i++ )
    {
        QLabel* label = new QLabel( "Du " + date.toString( Qt::ISODate ) + "\nau " + date1.toString( Qt::ISODate ) );
        ui->horizontalLayout->addWidget( label );

        if( i != (nombreSemaine-1) )
        {
            ui->horizontalLayout->addStretch( 2 );
        }
        else
        {
            ui->horizontalLayout->addStretch( 1 );
        }

        date1 = date1.addDays( -7 );
        date = date.addDays( -7 );

        QGraphicsRectItem* rect = scene->addRect( positionDepartX, hauteur - ( quantite.at(i) * pasHauteur ) - 2, largeurColonne, quantite.at(i) * pasHauteur, QPen(),
                        QBrush( QColor( 0, 204, 204 ) ) );

        rect->setToolTip( "Quantité : " + QString::number( quantite.at(i) ) + "\nValeur : " +  QString::number( quantite.at(i) * produit.getPrix().toFloat() ) );

        positionDepartX += largeurColonne;
    }

}

fenetreHistoriqueProduit::~fenetreHistoriqueProduit()
{
    delete ui;
    delete scene;
}

int fenetreHistoriqueProduit::maximumListInt(QList<int> liste)
{
    int max = liste.at(0);

    for( int i = 1; i < liste.size(); i++ )
    {
        if( liste.at(i) >= max )
        {
            max = liste.at(i);
        }
    }

    if( max == 0 )
    {
        max = 1;
    }

    return max;
}

