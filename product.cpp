#include "product.h"

CProduct::CProduct()
{
    iPROnumBouton = -1;
    iPROid = -1;
}

CProduct::CProduct( int id, QString nom, QString prix, QString cheminImage ) : iPROid( id ), sPROnom( nom ), sPROprix( prix ), sPROcheminImage( cheminImage )
{
    iPROnumBouton = -1;
}

void CProduct::afficher()
{
    qDebug() << iPROid << sPROnom << sPROprix << sPROcheminImage << endl;
}

CProduct::~CProduct()
{
}

void CProduct::setChemin(QString path)
{
    sPROcheminImage = path;
}

void CProduct::setNumBouton(int i)
{
    iPROnumBouton = i ;
}
