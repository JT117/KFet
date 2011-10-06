#include <QtGui/QApplication>
#include "mainwindow.h"
#include "cfenetreajoutproduit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CFenetreAjoutProduit w;
    w.show();

    return a.exec();
}
