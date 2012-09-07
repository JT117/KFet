#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>
#include <QDir>
#include <QStringList>
#include <QDebug>
#include <QList>

class Settings
{

public:

    static float getDetteClient();
    static float getDetteKFtier();
    static QStringList getTablist();
    static QList<int> getBoutonList();
    static void setBoutonList( QList<int> liste );
    static void clearBouton();
    static void setTabList( QStringList liste );

};

#endif // SETTINGS_H
