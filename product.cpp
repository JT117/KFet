#include "product.h"

CProduct::CProduct()
{
}

CProduct::CProduct( int id, QString nom, QString prix, QString cheminImage ) : iPROid( id ), sPROnom( nom ), sPROprix( prix ), sPROcheminImage( cheminImage )
{
}

void CProduct::afficher()
{
    qDebug() << iPROid << sPROnom << sPROprix << sPROcheminImage << endl;
}

CProduct::~CProduct()
{
}
