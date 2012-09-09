#ifndef TABBAR_H
#define TABBAR_H

#include <QTabBar>
#include <QMouseEvent>
#include <QDebug>

class TabBar : public QTabBar
{
public:
    TabBar();

protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // TABBAR_H
