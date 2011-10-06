#ifndef CFENETREGESTIONCALENDRIER_H
#define CFENETREGESTIONCALENDRIER_H

#include <QDialog>

namespace Ui {
    class CFenetreGestionCalendrier;
}

class CFenetreGestionCalendrier : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreGestionCalendrier(QWidget *parent = 0);
    ~CFenetreGestionCalendrier();

private:
    Ui::CFenetreGestionCalendrier *ui;


};

#endif // CFENETREGESTIONCALENDRIER_H
