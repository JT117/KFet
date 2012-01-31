/********************************************************************************
** Form generated from reading UI file 'fenetrehistoriqueproduit.ui'
**
** Created: Mon 30. Jan 20:54:50 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREHISTORIQUEPRODUIT_H
#define UI_FENETREHISTORIQUEPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetreHistoriqueProduit
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *titre;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *fenetreHistoriqueProduit)
    {
        if (fenetreHistoriqueProduit->objectName().isEmpty())
            fenetreHistoriqueProduit->setObjectName(QString::fromUtf8("fenetreHistoriqueProduit"));
        fenetreHistoriqueProduit->resize(1000, 710);
        graphicsView = new QGraphicsView(fenetreHistoriqueProduit);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(60, 39, 880, 601));
        label = new QLabel(fenetreHistoriqueProduit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 46, 13));
        label_2 = new QLabel(fenetreHistoriqueProduit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(940, 650, 46, 13));
        horizontalLayoutWidget = new QWidget(fenetreHistoriqueProduit);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 640, 891, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(fenetreHistoriqueProduit);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 50, 31, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(fenetreHistoriqueProduit);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 0, 881, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        titre = new QLabel(horizontalLayoutWidget_2);
        titre->setObjectName(QString::fromUtf8("titre"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        titre->setFont(font);

        horizontalLayout_2->addWidget(titre);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(fenetreHistoriqueProduit);

        QMetaObject::connectSlotsByName(fenetreHistoriqueProduit);
    } // setupUi

    void retranslateUi(QDialog *fenetreHistoriqueProduit)
    {
        fenetreHistoriqueProduit->setWindowTitle(QApplication::translate("fenetreHistoriqueProduit", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fenetreHistoriqueProduit", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fenetreHistoriqueProduit", "Semaine", 0, QApplication::UnicodeUTF8));
        titre->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fenetreHistoriqueProduit: public Ui_fenetreHistoriqueProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREHISTORIQUEPRODUIT_H
