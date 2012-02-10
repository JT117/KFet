#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H

#include <QToolButton>
#include <QMouseEvent>
#include <QApplication>
#include <QMimeData>
#include <QDrag>
#include <QDebug>
#include <QDir>
#include <QGridLayout>
#include <QList>

#include "settings.h"

class MainWindow;

class ToolButton : public QToolButton
{
public:
    ToolButton();
    ToolButton( QGridLayout* layout, int numero, MainWindow* main );

    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void dropEvent(QDropEvent* event);
    void dragEnterEvent(QDragEnterEvent* event);

private:
    QPoint startDragPosition;
    QGridLayout* gridLayout;
    int numeroDansLaListe;
    MainWindow* mainWindow;
};

#endif // TOOLBUTTON_H
