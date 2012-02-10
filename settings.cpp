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

QList<int> Settings::getBoutonList()
{
    QSettings settings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings.beginGroup("Bouton");

    QStringList key = settings.childKeys();
    QList<int> bouton;

    for( int i = 0; i < key.size(); i++ )
    {
         bouton.append( settings.value( key.at(i) ).toInt() );
    }

    settings.endGroup();

    return bouton;
}

void Settings::setBoutonList( QList<int> liste )
{
    QSettings settings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings.beginGroup("Bouton");

    for( int i = 0; i < liste.size(); i++ )
    {
        settings.setValue( "bouton" + QString::number( i ), liste.at(i) );
    }

    settings.endGroup();
}

void Settings::clearBouton()
{
    QSettings settings( QDir::currentPath() + "/systeme/setting.ini", QSettings::IniFormat );

    settings.beginGroup("Bouton");

    settings.remove("");

    settings.endGroup();
}
