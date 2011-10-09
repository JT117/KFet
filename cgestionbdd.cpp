#include "cgestionbdd.h"

QString CGestionBDD::sGESnomBDD = "kfet";
QString CGestionBDD::sGEShostName = "localhost";

CGestionBDD::CGestionBDD()
{
}

void CGestionBDD::getProductList( QList<CProduct*>& listProduct )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "SELECT * FROM PRODUCT;");

        while( query.next() )
        {
            int id = query.value(0).toInt();                                                  // on recupere l'id ne pas oublier la convertion dans le bon type
            QString nom = query.value(1).toString();                                          // recuperation du nom
            QString prix = query.value(2).toString();                                         // recuperation du prix
            QString cheminImage = query.value(3).toString();

            CProduct* product = new CProduct( id, nom, prix, cheminImage );
            listProduct.append( product );
        }

        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "KFet", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::addProduct( CProduct& product )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "INSERT INTO Product (nom, prix, cheminImage ) VALUES ( '" + product.getNom() + "', '" + product.getPrix() + "', '"+ product.getChemin() + "' );" );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::removeProduct( CProduct& product )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "DELETE FROM PRODUCT WHERE id = '"+ QString::number( product.getId() ) +"';" );
        db.close();    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::updateProduct( CProduct& product )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "UPDATE PRODUCT SET nom = '" + product.getNom() + "', prix = '" + product.getPrix() + "', cheminImage = '"+ product.getChemin() +
                    "'WHERE id = '" + QString::number( product.getId() ) + "';" );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

