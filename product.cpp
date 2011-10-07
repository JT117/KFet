#include "product.h"

CProduct::CProduct()
{
}

CProduct::CProduct( int id, QString nom, QString prix ) : iPROid( id ), sPROnom( nom ), sPROprix( prix )
{
}

void CProduct::afficher()
{
    qDebug() << iPROid << sPROnom << sPROprix << endl;
}
