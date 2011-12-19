#ifndef CFENETREMISEENDETTE_H
#define CFENETREMISEENDETTE_H

#include <QDialog>

#include "cgestionbdd.h"
#include "mainwindow.h"
#include "client.h"
#include "clog.h"

namespace Ui {
class CFenetreMiseEnDette;
}

class CFenetreMiseEnDette : public QDialog
{
    Q_OBJECT
    
public:
    explicit CFenetreMiseEnDette(MainWindow* main, CClient* client, QWidget *parent = 0);
    ~CFenetreMiseEnDette();

public slots:
    void validation();
    
private:
    Ui::CFenetreMiseEnDette *ui;
    MainWindow* mainWindow;
    CClient* client;
};

#endif // CFENETREMISEENDETTE_H
