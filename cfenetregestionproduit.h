#ifndef CFENETREGESTIONPRODUIT_H
#define CFENETREGESTIONPRODUIT_H

#include <QDialog>
#include <QList>
#include <QDebug>
#include <QEvent>
#include <QKeyEvent>

#include "product.h"
#include "cgestionbdd.h"
#include "cfenetreajoutproduit.h"

namespace Ui {
    class CFenetreGestionProduit;
}

class CFenetreGestionProduit : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreGestionProduit(QWidget *parent = 0);
    ~CFenetreGestionProduit();
    void setupTable();
    void nettoyerListe();
    void keyPressEvent ( QKeyEvent * event );

public slots:
    void ajouter();
    void updateTable();
    void supprimer();
    void celluleChanged(int x, int y);

private:
    Ui::CFenetreGestionProduit *ui;
    QList<CProduct*> listProduct;
};

#endif // CFENETREGESTIONPRODUIT_H
