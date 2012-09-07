#include "cgestionbdd.h"

QString CGestionBDD::sGESnomBDD = "kfet";
QString CGestionBDD::sGEShostName = "localhost";
QSqlDatabase CGestionBDD::db = QSqlDatabase::database();

bool CGestionBDD::connectionBDD()
{
    if( !QSqlDatabase::connectionNames().contains( "KFET" ) )
    {
        db = QSqlDatabase::addDatabase("QSQLITE", "KFET");
        db.setHostName( sGEShostName );
        db.setDatabaseName( sGESnomBDD );
    }

    bool ouvert = db.open();

    if( !ouvert )
    {
        QMessageBox::warning( NULL, "KFet", db.lastError().text() );
    }

    return ouvert;

}

void CGestionBDD::deconnectionBDD()
{
    db.close();
}

//******************** Gestion des produits ************************************
void CGestionBDD::getProductList( QList<CProduct*>& listProduct )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "INSERT INTO Product (nom, prix, cheminImage ) VALUES ( '" + product.getNom().replace( "'", "''") +
                    "', '" + product.getPrix().replace( "'", "''") + "', '"+ product.getChemin().replace( "'", "''") + "' );" );
         QList<int> liste = Settings::getBoutonList();
         liste.append( query.lastInsertId().toInt() );
         Settings::setBoutonList( liste );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::removeProduct( CProduct& product )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "DELETE FROM PRODUCT WHERE id = '"+ QString::number( product.getId() ) +"';" );
        QList<int> liste = Settings::getBoutonList();
        Settings::clearBouton();
        liste.removeOne( product.getId() );
        Settings::setBoutonList( liste );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::updateProduct( CProduct& product )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "UPDATE PRODUCT SET nom = '" + product.getNom().replace( "'", "''") + "', prix = '" + product.getPrix().replace( "'", "''")
                    + "', cheminImage = '"+ product.getChemin().replace( "'", "''") +
                    "' WHERE id = '" + QString::number( product.getId() ) + "';" );
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

CProduct CGestionBDD::getProduct(int i)
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "SELECT * from Product WHERE id = '"+ QString::number( i ) +"' ;" );

        while( query.next() )
        {
            int id = query.value(0).toInt();
            QString nom = query.value(1).toString();
            QString prix = query.value(2).toString();
            QString cheminImage = query.value(3).toString();

            CProduct product( id, nom, prix, cheminImage );
            return product;
        }

        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );  
    }
    CProduct product;
    return product;
}


//******************** Gestion des Clients ***********************************

CClient CGestionBDD::getClient( int id )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "SELECT * FROM CLIENT WHERE id = '" + QString::number( id ) + "' ;");

        while( query.next() )
        {
            int id = query.value(0).toInt();
            QString nom = query.value(1).toString();
            QString prenom = query.value(2).toString();
            float dette = query.value(3).toFloat();
            QString promo = query.value(4).toString();
            QString droit = query.value(5).toString();

            CClient client( id, nom, prenom, dette, promo, droit );
            return client;
        }

       db.close();
    }
    else
    {
        QMessageBox::warning( 0, "KFet", "La base de données n'a pas pu être ouverte." );
    }
}


void CGestionBDD::getClientList( QList<CClient*>& listClient )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
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

void CGestionBDD::getClientList( QList<CClient*>& listClient, QString critere )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "SELECT * FROM CLIENT WHERE promo = '"+ critere +"';");

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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "INSERT INTO CLIENT (nom, prenom, dette, promo, droit ) VALUES ( '" + client.getNom().replace( "'", "''") + "', '" + client.getPrenom().replace( "'", "''") + "', '"+ QString::number( client.getDette() ) + "', '"+ client.getPromo().replace( "'", "''") + "', '" + client.getDroit() + "' );" );
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "DELETE FROM CLIENT WHERE id = '"+ QString::number( client.getID() ) +"';" );
        db.close();    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

void CGestionBDD::updateClient( CClient& client )
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "UPDATE CLIENT SET nom = '" + client.getNom().replace( "'", "''") + "', prenom = '" + client.getPrenom().replace( "'", "''")
                    + "', dette = '"+ QString::number(client.getDette())  + "', promo = '" + client.getPromo() + "', droit = '" + client.getDroit() +
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "INSERT INTO Date( date, time )VALUES ('" + date + "', '" + time + "');");
        db.close();
        return query.lastInsertId().toInt();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
    return -1;
}

void CGestionBDD::addApprovisionnement(int idCli, int idDate, double value)
{
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
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
    if( CGestionBDD::connectionBDD() )
    {
        QSqlQuery query(db);
        query.exec( "INSERT INTO EnDette( idcli, iddate, somme, idprod ) VALUES ('" + QString::number( idCli ) + "', '"
                    + QString::number( idDate ) + "', '"+ QString::number(somme) +"', '"+ QString::number(idPro) +"' );");
        db.close();
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
    }
}

QList<int> CGestionBDD::getHistorique(int idPro, int nbSemaine)
{
    if( CGestionBDD::connectionBDD() )
    {
        QList<int> listeInt;
        QDate date = QDate::currentDate();
        QDate date1 = date;
        date = date.addDays( -7 );

        for( int i = 0; i < nbSemaine; i++ )
        {
            QSqlQuery query(db);
            query.exec( "SELECT COUNT(id) FROM Endette WHERE idprod = '"+ QString::number( idPro ) + "' AND iddate IN ( SELECT id FROM Date WHERE date >= '"
                        + date.toString( Qt::ISODate ) +"' AND date <= '"+ date1.toString( Qt::ISODate ) +"');");
            qDebug() << "SELECT COUNT(id) FROM Endette WHERE idprod = '"+ QString::number( idPro ) + "' AND iddate IN ( SELECT id FROM Date WHERE date >= '"
                        + date.toString( Qt::ISODate ) +"' AND date <= '"+ date1.toString( Qt::ISODate ) +"');" ;

            int nb;

            while( query.next() )
            {
                nb = query.value(0).toInt();
                qDebug() << nb;
            }

            listeInt.append(nb);
            date1 = date1.addDays( -7 );
            date = date.addDays( -7 );
        }

        db.close();
        return listeInt;
    }
    else
    {
        QMessageBox::warning( 0, "Avertissement", "La base de données n'a pas pu être ouverte." );
        QList<int> liste;
        return liste;
    }
}
