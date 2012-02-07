#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QTableWidgetItem>

class CClient
{
public:
    CClient();
    CClient( int id, QString nom, QString prenom, float dette, QString promo, QString droit );

    QString getNom();
    QString getPrenom();
    QString getPromo();
    QString getDroit();
    int getID();
    float getDette();
    void setID( int id );
    void setNom( QString nom);
    void setDette( float value);
    void setNumLigne( int row );
    int getNumLigne()const;
    void ajouterDette(double somme);
    void ajouterApprovisionnement( double somme );

    inline QList<QTableWidgetItem*>& getListItem() { return listItem; }

protected:
    QString sCLInom;
    QString sCLIprenom;
    int iCLIid;
    float fCLIdette;
    QString sCLIpromo;
    QString sCLIdroit;
    int iCLInumLigne;
    QList<QTableWidgetItem*> listItem;
};

#endif // CLIENT_H
