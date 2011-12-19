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
    void setNumBouton( int i );

    inline QString getNom()const { return sPROnom; }
    inline QString getPrix()const { return sPROprix; }
    inline QString getChemin()const { return sPROcheminImage; }
    inline int getId()const { return iPROid; }
    inline int getNumLigne()const { return iPROnumLigne; }
    inline int getNumBouton()const { return iPROnumBouton; }

private:
    int iPROid;
    QString sPROnom;
    QString sPROprix;
    QString sPROcheminImage;
    int iPROnumLigne;
    int iPROnumBouton;

};

#endif // PRODUCT_H
