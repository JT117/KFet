#ifndef CFENETRELOGIN_H
#define CFENETRELOGIN_H

#include <QDialog>
#include <QDebug>
#include "cgestionbdd.h"
#include "mainwindow.h"

class MainWindow;

namespace Ui {
    class CFenetreLogin;
}

class CFenetreLogin : public QDialog
{
    Q_OBJECT

public:
    CFenetreLogin();
    explicit CFenetreLogin( MainWindow* main, QWidget* parent = 0 );
    ~CFenetreLogin();

public slots:
    void login();

private:
    Ui::CFenetreLogin *ui;
    MainWindow* fenetrePrincipale;
};

#endif // CFENETRELOGIN_H
