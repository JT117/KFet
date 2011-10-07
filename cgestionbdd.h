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

    static QList<CProduct*>* getProductList();

private:
    static QString sGESnomBDD;
    static QString sGEShostName;
};

#endif // CGESTIONBDD_H
