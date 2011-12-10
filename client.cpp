#include "client.h"

CClient::CClient()
{
}

CClient::CClient( int id, QString nom, QString prenom, float dette, QString promo, QString droit )
{
    iCLIid = id;
    sCLInom = nom;
    sCLIprenom = prenom;
    fCLIdette = dette;
    sCLIpromo = promo;
    sCLIdroit = droit;
}

void CClient::setID(int id)
{
    iCLIid = id;
}

void CClient::setNom(QString nom)
{
    sCLInom = nom;
}

QString CClient::getNom()
{
    return sCLInom;
}

QString CClient::getPrenom()
{
    return sCLIprenom;
}

QString CClient::getPromo()
{
    return sCLIpromo;
}

QString CClient::getDroit()
{
    return sCLIdroit;
}

int CClient::getID()
{
    return iCLIid;
}

float CClient::getDette()
{
    return fCLIdette;
}
