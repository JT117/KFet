#ifndef CLIENT_H
#define CLIENT_H

#include <QString>

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

protected:
    QString sCLInom;
    QString sCLIprenom;
    int iCLIid;
    float fCLIdette;
    QString sCLIpromo;
    QString sCLIdroit;
    int iCLInumLigne;
};

#endif // CLIENT_H
