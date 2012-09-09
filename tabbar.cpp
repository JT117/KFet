#include "tabbar.h"

TabBar::TabBar() : QTabBar()
{
}

void TabBar::mousePressEvent(QMouseEvent *event)
{
    if( event->button() == Qt::RightButton )
    {
        qDebug() << "COUCOU";
    }
}
