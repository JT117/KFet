#include "filterobject.h"
#include "mainwindow.h"

FilterObject::FilterObject(MainWindow *qMain) : QObject(), mainWindow( qMain )
{
}

bool FilterObject::eventFilter(QObject *object, QEvent *event)
{
    if( event->type() == QEvent::MouseButtonPress )
    {
        QMouseEvent* mouseEvent = static_cast< QMouseEvent* >( event );

        if( mouseEvent->button() == Qt::RightButton )
        {
            mainWindow->contextMenuSuppressionTab();
           return true;
        }
    }

    return false;
}
