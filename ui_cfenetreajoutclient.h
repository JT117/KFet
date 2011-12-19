/********************************************************************************
** Form generated from reading UI file 'cfenetreajoutclient.ui'
**
** Created: Sun 18. Dec 21:02:10 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFENETREAJOUTCLIENT_H
#define UI_CFENETREAJOUTCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFenetreAjoutClient
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nomLineEdit;
    QLineEdit *prenomLineEdtit;
    QLineEdit *promoLineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *boutonAjouter;
    QPushButton *boutonAnnuler;

    void setupUi(QDialog *CFenetreAjoutClient)
    {
        if (CFenetreAjoutClient->objectName().isEmpty())
            CFenetreAjoutClient->setObjectName(QString::fromUtf8("CFenetreAjoutClient"));
        CFenetreAjoutClient->resize(413, 180);
        CFenetreAjoutClient->setModal(true);
        gridLayoutWidget = new QWidget(CFenetreAjoutClient);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 391, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        nomLineEdit = new QLineEdit(gridLayoutWidget);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));

        gridLayout->addWidget(nomLineEdit, 0, 1, 1, 1);

        prenomLineEdtit = new QLineEdit(gridLayoutWidget);
        prenomLineEdtit->setObjectName(QString::fromUtf8("prenomLineEdtit"));

        gridLayout->addWidget(prenomLineEdtit, 1, 1, 1, 1);

        promoLineEdit = new QLineEdit(gridLayoutWidget);
        promoLineEdit->setObjectName(QString::fromUtf8("promoLineEdit"));

        gridLayout->addWidget(promoLineEdit, 2, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(CFenetreAjoutClient);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 140, 231, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        boutonAjouter = new QPushButton(horizontalLayoutWidget);
        boutonAjouter->setObjectName(QString::fromUtf8("boutonAjouter"));

        horizontalLayout->addWidget(boutonAjouter);

        boutonAnnuler = new QPushButton(horizontalLayoutWidget);
        boutonAnnuler->setObjectName(QString::fromUtf8("boutonAnnuler"));

        horizontalLayout->addWidget(boutonAnnuler);


        retranslateUi(CFenetreAjoutClient);

        QMetaObject::connectSlotsByName(CFenetreAjoutClient);
    } // setupUi

    void retranslateUi(QDialog *CFenetreAjoutClient)
    {
        CFenetreAjoutClient->setWindowTitle(QApplication::translate("CFenetreAjoutClient", "KFet - Ajout d'un client", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CFenetreAjoutClient", "Nom :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CFenetreAjoutClient", "Prenom : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CFenetreAjoutClient", "Promo : ", 0, QApplication::UnicodeUTF8));
        boutonAjouter->setText(QApplication::translate("CFenetreAjoutClient", "Ajouter", 0, QApplication::UnicodeUTF8));
        boutonAnnuler->setText(QApplication::translate("CFenetreAjoutClient", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFenetreAjoutClient: public Ui_CFenetreAjoutClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETREAJOUTCLIENT_H
