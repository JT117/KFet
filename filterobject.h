#ifndef FILTEROBJECT_H
#define FILTEROBJECT_H

#include <QObject>
#include <QEvent>
#include <QTabBar>
#include <QDebug>
#include <QMouseEvent>
#include "mainwindow.h"

class FilterObject : public QObject
{
public:
    explicit FilterObject( MainWindow* main);
    bool eventFilter(QObject *object, QEvent *event);

private:
    MainWindow* mainWindow;

};

#endif // FILTEROBJECT_H
