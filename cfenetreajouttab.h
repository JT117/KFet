#ifndef CFENETREAJOUTTAB_H
#define CFENETREAJOUTTAB_H

#include <QDialog>
#include <Qdebug>
namespace Ui {
    class cfenetreajouttab;
}

class cfenetreajouttab : public QDialog
{
    Q_OBJECT

public:
    explicit cfenetreajouttab(QWidget *parent = 0);
    ~cfenetreajouttab();

private:
    Ui::cfenetreajouttab *ui;
public slots:

    void ajoutertab();

};



#endif // CFENETREAJOUTTAB_H
