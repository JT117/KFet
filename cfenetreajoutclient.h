#ifndef CFENETREAJOUTCLIENT_H
#define CFENETREAJOUTCLIENT_H

#include <QDialog>

#include "cgestionbdd.h"
#include "client.h"
#include "clog.h"
#include "mainwindow.h"

namespace Ui {
    class CFenetreAjoutClient;
}

class CFenetreAjoutClient : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreAjoutClient( MainWindow* main, QWidget *parent = 0);
    ~CFenetreAjoutClient();

public slots:
    void validation();

private:
    Ui::CFenetreAjoutClient *ui;
    MainWindow* mainWindow;
};

#endif // CFENETREAJOUTCLIENT_H
