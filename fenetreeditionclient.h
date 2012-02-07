#ifndef FENETREEDITIONCLIENT_H
#define FENETREEDITIONCLIENT_H

#include <QDialog>

#include "client.h"
#include "cgestionbdd.h"
#include "clog.h"
#include "settings.h"

namespace Ui {
class FenetreEditionClient;
}

class FenetreEditionClient : public QDialog
{
    Q_OBJECT
    
public:
    explicit FenetreEditionClient(int id, QWidget *parent = 0);
    ~FenetreEditionClient();

public slots:
    void edition();
    
private:
    Ui::FenetreEditionClient *ui;
    CClient client;
};

#endif // FENETREEDITIONCLIENT_H
