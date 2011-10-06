/********************************************************************************
** Form generated from reading UI file 'displayproduct.ui'
**
** Created: Thu 29. Sep 10:13:02 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYPRODUCT_H
#define UI_DISPLAYPRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayProduct
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QListView *listView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DisplayProduct)
    {
        if (DisplayProduct->objectName().isEmpty())
            DisplayProduct->setObjectName(QString::fromUtf8("DisplayProduct"));
        DisplayProduct->resize(830, 650);
        DisplayProduct->setModal(true);
        gridLayoutWidget = new QWidget(DisplayProduct);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 551, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(DisplayProduct);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 571, 631));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(DisplayProduct);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(600, 10, 221, 481));
        groupBox_2->setFont(font);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 410, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 440, 61, 23));
        pushButton->setFont(font);
        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(110, 410, 101, 23));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lcdNumber->setFont(font2);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        listView = new QListView(groupBox_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 20, 201, 381));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 440, 131, 23));
        pushButton_2->setFont(font);
        groupBox_2->raise();
        groupBox->raise();
        gridLayoutWidget->raise();

        retranslateUi(DisplayProduct);

        QMetaObject::connectSlotsByName(DisplayProduct);
    } // setupUi

    void retranslateUi(QDialog *DisplayProduct)
    {
        DisplayProduct->setWindowTitle(QApplication::translate("DisplayProduct", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DisplayProduct", "Liste des produits", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DisplayProduct", "R\303\251capitulatif", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DisplayProduct", "Total :", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DisplayProduct", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DisplayProduct", "Ajouter en Dette", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DisplayProduct: public Ui_DisplayProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYPRODUCT_H
