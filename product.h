#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QDebug>
#include <QTableWidgetItem>

class CProduct
{
public:
    CProduct();
    ~CProduct();
    CProduct( int id, QString nom, QString prix, QString cheminImage );

    void afficher();
    void setChemin( QString path );
    void setNumBouton( int i );

    inline QString getNom()const { return sPROnom; }
    inline QString getPrix()const { return sPROprix; }
    inline QString getChemin()const { return sPROcheminImage; }
    inline int getId()const { return iPROid; }
    inline int getNumBouton()const { return iPROnumBouton; }
    inline QList<QTableWidgetItem*>& getListItem() { return listItem; }

private:
    int iPROid;
    QString sPROnom;
    QString sPROprix;
    QString sPROcheminImage;
    int iPROnumBouton;
    QList<QTableWidgetItem*> listItem;

};

#endif // PRODUCT_H
