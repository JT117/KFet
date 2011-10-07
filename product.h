#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QDebug>

class CProduct
{
public:
    CProduct();
    CProduct( int id, QString nom, QString prix );
    void afficher();

private:
    int iPROid;
    QString sPROnom;
    QString sPROprix;
    QString sPROcheminImage;

};

#endif // PRODUCT_H
