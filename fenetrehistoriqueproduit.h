#ifndef FENETREHISTORIQUEPRODUIT_H
#define FENETREHISTORIQUEPRODUIT_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QPropertyAnimation>

#include "cgestionbdd.h"

namespace Ui {
class fenetreHistoriqueProduit;
}

class fenetreHistoriqueProduit : public QDialog
{
    Q_OBJECT
    
public:
    explicit fenetreHistoriqueProduit( int i, QWidget *parent = 0);
    ~fenetreHistoriqueProduit();

    int maximumListInt( QList<int> liste );
    
private:
    Ui::fenetreHistoriqueProduit *ui;
    QGraphicsScene* scene;
};

#endif // FENETREHISTORIQUEPRODUIT_H
