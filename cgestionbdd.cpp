#include "cgestionbdd.h"

QString CGestionBDD::sGESnomBDD = "kfet";
QString CGestionBDD::sGEShostName = "localhost";

CGestionBDD::CGestionBDD()
{
}

//******************** Gestion des produits ************************************
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
                    "' WHERE id = '" + QString::number( product.getId() ) + "';" );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

//******************** Gestion des Clients ***********************************

void CGestionBDD::getClientList( QList<CClient*>& listClient )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "SELECT * FROM CLIENT;");

        while( query.next() )
        {
            int id = query.value(0).toInt();                                                  // on recupere l'id ne pas oublier la convertion dans le bon type
            QString nom = query.value(1).toString();                                          // recuperation du nom
            QString prenom = query.value(2).toString();                                       // recuperation du prix
            float dette = query.value(3).toFloat();
            QString promo = query.value(4).toString();
            QString droit = query.value(5).toString();

            CClient* client = new CClient( id, nom, prenom, dette, promo, droit );
            listClient.append( client );
        }

        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "KFet", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::addClient( CClient& client )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "INSERT INTO CLIENT (nom, prenom, dette, promo, droit ) VALUES ( '" + client.getNom() + "', '" + client.getPrenom() + "', '"+ QString::number( client.getDette() ) + "', '"+ client.getPromo()+ "', '" + client.getDroit() + "' );" );
        client.setID( query.lastInsertId().toInt() );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::removeClient( CClient& client )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "DELETE FROM CLIENT WHERE id = '"+ QString::number( client.getID() ) +"';" );
        db.close();    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::updateClient( CClient& client )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "UPDATE CLIENT SET nom = '" + client.getNom() + "', prenom = '" + client.getPrenom() + "', dette = '"+ QString::number(client.getDette())  + "', promo = '" + client.getPromo() + "', droit = '" + client.getDroit() +
                    "' WHERE id = '"+ QString::number( client.getID() ) + "';" );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

bool CGestionBDD::identification(QString username, QString password)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "SELECT username, password FROM ADMIN;" );

        while( query.next() )
        {
            QString id = query.value(0).toString();                                                  // on recupere l'id ne pas oublier la convertion dans le bon type
            QString pass = query.value(1).toString();
            QByteArray cryptedPass = QCryptographicHash::hash( password.toUtf8(), QCryptographicHash::Md5 );

            if( id == username &&  cryptedPass.toHex() == pass )
            {
                return true;
            }
        }

        db.close();

        return false;
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
        return false;
    }
}

//***************************Gestion Admin******************************************
bool CGestionBDD::identification( QString password)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "SELECT password FROM ADMIN;" ) ;

        while( query.next() )
        {
            QString pass = query.value(0).toString();
            QByteArray cryptedPass = QCryptographicHash::hash( password.toUtf8(), QCryptographicHash::Md5 );

            if( cryptedPass.toHex() == pass )
            {
                return true;
            }
        }

        db.close();

        return false;
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
        return false;
    }
}

void CGestionBDD::changerMDP(QString newPassword)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        QByteArray cryptedPass = QCryptographicHash::hash( newPassword.toUtf8(), QCryptographicHash::Md5 );
        query.exec( "UPDATE ADMIN SET password = '" + cryptedPass.toHex() + "' WHERE id = '1';");

        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

//**********************Gestion Date********************************

int CGestionBDD::addDate(QString date, QString time)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "INSERT INTO Date( date, time )VALUES ('" + date + "', '" + time + "');");
        return query.lastInsertId().toInt();
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
    return -1;
}

void CGestionBDD::addApprovisionnement(int idCli, int idDate, double value)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "INSERT INTO Approvisionne( idCli, idDate, somme )VALUES ('" + QString::number( idCli ) + "', '"
                    + QString::number( idDate ) + "', '"+ QString::number(value) +"' );");
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::addDette(int idCli, int idPro, int idDate, double somme)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName( sGEShostName );
    db.setDatabaseName( sGESnomBDD );
    bool baseOuverte = db.open();

    if( baseOuverte )
    {
        QSqlQuery query;
        query.exec( "INSERT INTO EnDette( idCli, idDate, somme, idPro )VALUES ('" + QString::number( idCli ) + "', '"
                    + QString::number( idDate ) + "', '"+ QString::number(somme) +"', '"+ QString::number(idPro) +"' );");
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}
