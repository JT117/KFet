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

#include "product.h"
#include "client.h"

class CGestionBDD
{
public:
    CGestionBDD();

    static bool connectionBDD();

    static void getProductList( QList<CProduct*>& listProduct );
    static void addProduct( CProduct& product );
    static void removeProduct( CProduct& product );
    static void updateProduct( CProduct& product );

    static void getClientList( QList<CClient*>& listClient );
    static void getClientList( QList<CClient*>& listClient, QString critere );
    static void addClient( CClient& client );
    static void removeClient( CClient& client );
    static void updateClient( CClient& client );

    static bool identification( QString username, QString password );
    static bool identification( QString password );
    static void changerMDP( QString newPassword );

    static int addDate( QString date, QString time );
    static void addApprovisionnement( int idCli, int idDate, double value );
    static void addDette( int idCli, int idPro, int idDate, double somme );

private:
    static QString sGESnomBDD;
    static QString sGEShostName;
    static QSqlDatabase db;
};

#endif // CGESTIONBDD_H
