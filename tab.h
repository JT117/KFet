#ifndef TAB_H
#define TAB_H

#include <QList>
#include <QStringList>
#include <QString>
#include <QTabWidget>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHeaderView>

#include "client.h"
#include "cgestionbdd.h"

class CTab : public QWidget
{
public:
    CTab();
    CTab( QString nom1 );
    ~CTab();

    bool clientSelectionner();
    CClient* getSelectedClient();
    void updateClient();

private:
    QString nom;
    QList<CClient*> listClient;
    QTableWidget* etuTable;
    QVBoxLayout* vbox;

    void setupClient();

};

#endif // TAB_H
