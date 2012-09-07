#ifndef FENETRENOUVELLETAB_H
#define FENETRENOUVELLETAB_H

#include <QDialog>
#include <QMessageBox>
#include "settings.h"

namespace Ui {
class fenetreNouvelleTab;
}

class fenetreNouvelleTab : public QDialog
{
    Q_OBJECT
    
public:
    explicit fenetreNouvelleTab(QWidget *parent = 0);
    ~fenetreNouvelleTab();
public slots:
    void validation();
    
private:
    Ui::fenetreNouvelleTab *ui;
};

#endif // FENETRENOUVELLETAB_H
