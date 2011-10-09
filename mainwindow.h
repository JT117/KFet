#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTableWidget>
#include <QToolButton>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>

#include "cfenetregestionproduit.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void ouvrirGestionProduit();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
