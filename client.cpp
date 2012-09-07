#include "client.h"

CClient::CClient()
{
    iCLInumLigne = -1;
    fCLIdette = 0;
    iCLIid = -1;
}

CClient::CClient( int id, QString nom, QString prenom, float dette, QString promo, QString droit )
{
    iCLIid = id;
    sCLInom = nom;
    sCLIprenom = prenom;
    fCLIdette = dette;
    sCLIpromo = promo;
    sCLIdroit = droit;
    iCLInumLigne = -1;
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

int CClient::getNumLigne()const
{
    return iCLInumLigne;
}

void CClient::setNumLigne(int row)
{
    iCLInumLigne = row;
}

void CClient::ajouterDette( double somme )
{
    fCLIdette += (float)somme;
}

void CClient::ajouterApprovisionnement( double somme )
{
    fCLIdette -= (float)somme;
}
void CClient::setDette(float value)
{
    fCLIdette = value;
}
