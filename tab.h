#ifndef TAB_H
#define TAB_H

#include <QList>
#include <QStringList>
#include <QString>

class CTab
{
public:
    CTab();
private:
    QString sTABnom;
    QStringList slTABnomColonne;
    QList<int> ilTABid;
};

#endif // TAB_H
