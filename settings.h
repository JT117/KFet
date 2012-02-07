#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>
#include <QDir>
#include <QStringList>
#include <QDebug>

class Settings
{
public:

    static float getDetteClient();
    static float getDetteKFtier();
    static QStringList getTablist();

};

#endif // SETTINGS_H
