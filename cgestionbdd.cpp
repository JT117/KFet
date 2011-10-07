#include "cgestionbdd.h"

QString CGestionBDD::sGESnomBDD = "kfet";
QString CGestionBDD::sGEShostName = "localhost";

CGestionBDD::CGestionBDD()
{
}

QList<CProduct*>* CGestionBDD::getProductList()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QList<CProduct*>* listeProduit = new QList<CProduct*>();
        QSqlQuery query;
        query.exec( "SELECT * FROM PRODUCT;");

        while( query.next() )
        {
            int id = query.value(0).toInt();                                                  // on recupere l'id ne pas oublier la convertion dans le bon type
            QString nom = query.value(1).toString();                                          // recuperation du nom
            QString prix = query.value(2).toString();                                         // recuperation du prix

            CProduct* product = new CProduct( id, nom, prix );
            listeProduit->append( product );
        }

        db.close();
        return listeProduit;
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}
