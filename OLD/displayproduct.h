#ifndef DISPLAYPRODUCT_H
#define DISPLAYPRODUCT_H

#include <QDialog>
#include <QLabel>
#include <QToolButton>
#include <QIcon>

namespace Ui {
    class DisplayProduct;
}

class DisplayProduct : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayProduct(QWidget *parent = 0);
    ~DisplayProduct();

private:
    Ui::DisplayProduct *ui;
    //necessite d'un vector contenant les produits de la BDD
    //l'affichage doit s'adapter au nombre de produits
};

#endif // DISPLAYPRODUCT_H
