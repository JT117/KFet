#ifndef TAB_H
#define TAB_H

#include <QList>
#include <QStringList>
#include <QString>

class Tab
{
public:
    Tab();
private:
    QString nom;
    QStringList nomColonne;
    QList<int> listID;
};

#endif // TAB_H
