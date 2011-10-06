#include <QtGui/QApplication>
#include "mainwindow.h"
#include "cfenetregestioncalendrier.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CFenetreGestionCalendrier w;
    w.show();

    return a.exec();
}
