#ifndef CFENETREAJOUTCLIENT_H
#define CFENETREAJOUTCLIENT_H

#include <QDialog>

namespace Ui {
    class CFenetreAjoutClient;
}

class CFenetreAjoutClient : public QDialog
{
    Q_OBJECT

public:
    explicit CFenetreAjoutClient(QWidget *parent = 0);
    ~CFenetreAjoutClient();

public slots:


private:
    Ui::CFenetreAjoutClient *ui;
};

#endif // CFENETREAJOUTCLIENT_H
