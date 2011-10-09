#ifndef CGESTIONBDD_H
#define CGESTIONBDD_H

#include <QString>
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QVariant>

#include "product.h"

class CGestionBDD
{
public:
    CGestionBDD();

    static void getProductList( QList<CProduct*>& listProduct );
    static void addProduct( CProduct& product );
    static void removeProduct( CProduct& product );
    static void updateProduct( CProduct& product );

private:
    static QString sGESnomBDD;
    static QString sGEShostName;
};

#endif // CGESTIONBDD_H
