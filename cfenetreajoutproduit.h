#ifndef CFENETREAJOUTPRODUIT_H
#define CFENETREAJOUTPRODUIT_H

#include <QDialog>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
    class CFenetreAjoutProduit;
}

class CFenetreAjoutProduit : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreAjoutProduit(QWidget *parent = 0);
    ~CFenetreAjoutProduit();

private:
    Ui::CFenetreAjoutProduit *ui;

public slots :
    void afficher();
};

#endif // CFENETREAJOUTPRODUIT_H
