#ifndef FENETRECHANGERMDP_H
#define FENETRECHANGERMDP_H

#include "cgestionbdd.h"
#include "clog.h"

#include <QDialog>

namespace Ui {
    class FenetreChangerMDP;
}

class FenetreChangerMDP : public QDialog
{
    Q_OBJECT

public:
    explicit FenetreChangerMDP(QWidget *parent = 0);
    ~FenetreChangerMDP();

public slots:
    void changerMotDePasse();

private:
    Ui::FenetreChangerMDP *ui;
};

#endif // FENETRECHANGERMDP_H
