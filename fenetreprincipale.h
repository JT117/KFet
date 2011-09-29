#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>
#include <QPushButton>
#include <QTableWidget>
#include <QToolButton>

namespace Ui {
    class FenetrePrincipale;
}

class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = 0);
    ~FenetrePrincipale();

public slots:

private:
    Ui::FenetrePrincipale *ui;
};

#endif // FENETREPRINCIPALE_H
