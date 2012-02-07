#ifndef FENETRECHANGERLIMITEDETTE_H
#define FENETRECHANGERLIMITEDETTE_H

#include <QDialog>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QSettings>

#include "clog.h"

namespace Ui {
class FenetreChangerLimiteDette;
}

class FenetreChangerLimiteDette : public QDialog
{
    Q_OBJECT
    
public:
    explicit FenetreChangerLimiteDette(QWidget *parent = 0);
    ~FenetreChangerLimiteDette();
    
public slots:
    void validation();

private:
    Ui::FenetreChangerLimiteDette *ui;
    float detteClient;
    float detteKFtier;
    QSettings* settings;
};

#endif // FENETRECHANGERLIMITEDETTE_H
