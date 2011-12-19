#include "product.h"

CProduct::CProduct()
{
    iPROnumLigne = -1;
    iPROnumBouton = -1;
}

CProduct::CProduct( int id, QString nom, QString prix, QString cheminImage ) : iPROid( id ), sPROnom( nom ), sPROprix( prix ), sPROcheminImage( cheminImage )
{
    iPROnumLigne = -1;
    iPROnumBouton = -1;
}

void CProduct::afficher()
{
    qDebug() << iPROid << sPROnom << sPROprix << sPROcheminImage << endl;
}

CProduct::~CProduct()
{
}

void CProduct::setNumLigne(int i)
{
    iPROnumLigne = i;
}

void CProduct::setChemin(QString path)
{
    sPROcheminImage = path;
}

void CProduct::setNumBouton(int i)
{
    iPROnumBouton = i ;
}
