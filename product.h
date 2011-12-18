#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QDebug>

class CProduct
{
public:
    CProduct();
    ~CProduct();
    CProduct( int id, QString nom, QString prix, QString cheminImage );

    void afficher();
    void setNumLigne(int i );
    void setChemin( QString path );

    inline QString getNom()const { return sPROnom; }
    inline QString getPrix()const { return sPROprix; }
    inline QString getChemin()const { return sPROcheminImage; }
    inline int getId()const { return iPROid; }
    inline int getNumLigne()const { return iPROnumLigne; }

private:
    int iPROid;
    QString sPROnom;
    QString sPROprix;
    QString sPROcheminImage;
    int iPROnumLigne;

};

#endif // PRODUCT_H
