#ifndef CGESTIONBDD_H
#define CGESTIONBDD_H

#include <QString>
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QVariant>
#include <QCryptographicHash>
#include <QSqlError>
#include <QDate>

#include "product.h"
#include "client.h"
#include "product.h"
#include "settings.h"

class CGestionBDD
{
public:
    static bool connectionBDD();
    static void deconnectionBDD();

    static void getProductList( QList<CProduct*>& listProduct );
    static void addProduct( CProduct& product );
    static void removeProduct( CProduct& product );
    static void updateProduct( CProduct& product );
    static CProduct getProduct( int i );

    static void getClientList( QList<CClient*>& listClient );
    static void getClientList( QList<CClient*>& listClient, QString critere );
    static void addClient( CClient& client );
    static void removeClient( CClient& client );
    static void updateClient( CClient& client );
    static CClient getClient( int i );

    static bool identification( QString username, QString password );
    static bool identification( QString password );
    static void changerMDP( QString newPassword );

    static int addDate( QString date, QString time );
    static void addApprovisionnement( int idCli, int idDate, double value );
    static void addDette( int idCli, int idPro, int idDate, double somme );
    static QList<int> getHistorique( int idPro, int nbSemaine );



private:
    static QString sGESnomBDD;
    static QString sGEShostName;
    static QSqlDatabase db;
};

#endif // CGESTIONBDD_H
