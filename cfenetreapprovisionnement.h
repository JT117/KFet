#ifndef CFENETREAPPROVISIONNEMENT_H
#define CFENETREAPPROVISIONNEMENT_H

#include <QDialog>

#include "cgestionbdd.h"
#include "mainwindow.h"
#include "client.h"
#include "clog.h"

namespace Ui {
    class CFenetreApprovisionnement;
}

class CFenetreApprovisionnement : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreApprovisionnement(MainWindow* main, CClient* client, QWidget *parent = 0);
    ~CFenetreApprovisionnement();

public slots:
    void validation();

private:
    Ui::CFenetreApprovisionnement *ui;
    MainWindow* mainWindow;
    CClient* client;
};

#endif // CFENETREAPPROVISIONNEMENT_H
