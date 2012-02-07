#ifndef FENETRESETDETTE_H
#define FENETRESETDETTE_H

#include <QDialog>

#include "cgestionbdd.h"
#include "clog.h"
#include "client.h"

namespace Ui {
class FenetreSetDette;
}

class FenetreSetDette : public QDialog
{
    Q_OBJECT
    
public:
    explicit FenetreSetDette( int index, QWidget *parent = 0);
    ~FenetreSetDette();

public slots:
    void validation();
    
private:
    Ui::FenetreSetDette *ui;
    float ancienneValeur;
    CClient client;
};

#endif // FENETRESETDETTE_H
