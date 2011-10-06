/********************************************************************************
** Form generated from reading UI file 'cfenetreajoutproduit.ui'
**
** Created: Thu 6. Oct 19:12:39 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFENETREAJOUTPRODUIT_H
#define UI_CFENETREAJOUTPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFenetreAjoutProduit
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *pleFAPnomproduit;
    QLabel *label_2;
    QLineEdit *pleFAPprix;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *ppbFAPboutonOK;
    QPushButton *ppbFAPAnnuler;

    void setupUi(QDialog *CFenetreAjoutProduit)
    {
        if (CFenetreAjoutProduit->objectName().isEmpty())
            CFenetreAjoutProduit->setObjectName(QString::fromUtf8("CFenetreAjoutProduit"));
        CFenetreAjoutProduit->resize(218, 183);
        verticalLayoutWidget = new QWidget(CFenetreAjoutProduit);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 201, 163));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        pleFAPnomproduit = new QLineEdit(verticalLayoutWidget);
        pleFAPnomproduit->setObjectName(QString::fromUtf8("pleFAPnomproduit"));

        verticalLayout->addWidget(pleFAPnomproduit);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        pleFAPprix = new QLineEdit(verticalLayoutWidget);
        pleFAPprix->setObjectName(QString::fromUtf8("pleFAPprix"));

        verticalLayout->addWidget(pleFAPprix);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ppbFAPboutonOK = new QPushButton(verticalLayoutWidget);
        ppbFAPboutonOK->setObjectName(QString::fromUtf8("ppbFAPboutonOK"));

        horizontalLayout->addWidget(ppbFAPboutonOK);

        ppbFAPAnnuler = new QPushButton(verticalLayoutWidget);
        ppbFAPAnnuler->setObjectName(QString::fromUtf8("ppbFAPAnnuler"));

        horizontalLayout->addWidget(ppbFAPAnnuler);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CFenetreAjoutProduit);

        QMetaObject::connectSlotsByName(CFenetreAjoutProduit);
    } // setupUi

    void retranslateUi(QDialog *CFenetreAjoutProduit)
    {
        CFenetreAjoutProduit->setWindowTitle(QApplication::translate("CFenetreAjoutProduit", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CFenetreAjoutProduit", "Nom Produit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CFenetreAjoutProduit", "Prix", 0, QApplication::UnicodeUTF8));
        ppbFAPboutonOK->setText(QApplication::translate("CFenetreAjoutProduit", "OK", 0, QApplication::UnicodeUTF8));
        ppbFAPAnnuler->setText(QApplication::translate("CFenetreAjoutProduit", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFenetreAjoutProduit: public Ui_CFenetreAjoutProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETREAJOUTPRODUIT_H
