#include "settings.h"

float Settings::getDetteClient()
{
    QSettings settings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings.beginGroup("Limite de dette");
    float detteClient = settings.value( "Client", sizeof( float ) ).toFloat();
    settings.endGroup();

    return detteClient;
}

float Settings::getDetteKFtier()
{
    QSettings settings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings.beginGroup("Limite de dette");
    float detteKFtier = settings.value( "KFtier", sizeof( float ) ).toFloat();
    settings.endGroup();

    return detteKFtier;
}

QStringList Settings::getTablist()
{
    QSettings settings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings.beginGroup("Tab");

    QStringList key = settings.childKeys();
    QStringList tab;

    for( int i = 0; i < key.size(); i++ )
    {
         tab.append( settings.value( key.at(i) ).toString() );
    }

    settings.endGroup();

    return tab;
}
