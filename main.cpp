#include <QtGui/QApplication>
#include "mainwindow.h"
#include "cfenetreajouttab.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cfenetreajouttab w;
    w.show();

    return a.exec();
}
