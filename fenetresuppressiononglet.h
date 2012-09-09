#ifndef FENETRESUPPRESSIONONGLET_H
#define FENETRESUPPRESSIONONGLET_H

#include <QDialog>

#include "settings.h"
#include "cgestionbdd.h"
#include "clog.h"
#include <QMessageBox>

namespace Ui {
class FenetreSuppressionOnglet;
}

class FenetreSuppressionOnglet : public QDialog
{
    Q_OBJECT
    
public:
    explicit FenetreSuppressionOnglet(QWidget *parent = 0);
    ~FenetreSuppressionOnglet();

public slots:
    void validation();
    
private:
    Ui::FenetreSuppressionOnglet *ui;
};

#endif // FENETRESUPPRESSIONONGLET_H
