#ifndef CFENETREAJOUTPRODUIT_H
#define CFENETREAJOUTPRODUIT_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>

#include "cgestionbdd.h"
#include "product.h"
#include "clog.h"

namespace Ui {
    class CFenetreAjoutProduit;
}

class CFenetreAjoutProduit : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreAjoutProduit(QWidget *parent = 0);
    ~CFenetreAjoutProduit();

public slots :
    void ajouter();
    void ouvrirFichier();

private:
    Ui::CFenetreAjoutProduit *ui;

};

#endif // CFENETREAJOUTPRODUIT_H
