/********************************************************************************
** Form generated from reading UI file 'fenetreeditionclient.ui'
**
** Created: Mon 6. Feb 22:18:57 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREEDITIONCLIENT_H
#define UI_FENETREEDITIONCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreEditionClient
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *nomLineEdit;
    QLabel *prenomLabel;
    QLineEdit *prenomLineEdit;
    QLabel *promoLabel;
    QComboBox *promoComboBox;
    QLabel *nomLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *boutonOK;
    QPushButton *boutonAnnuler;

    void setupUi(QDialog *FenetreEditionClient)
    {
        if (FenetreEditionClient->objectName().isEmpty())
            FenetreEditionClient->setObjectName(QString::fromUtf8("FenetreEditionClient"));
        FenetreEditionClient->resize(304, 143);
        QFont font;
        font.setPointSize(10);
        FenetreEditionClient->setFont(font);
        formLayoutWidget = new QWidget(FenetreEditionClient);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 281, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        nomLineEdit = new QLineEdit(formLayoutWidget);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomLineEdit);

        prenomLabel = new QLabel(formLayoutWidget);
        prenomLabel->setObjectName(QString::fromUtf8("prenomLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, prenomLabel);

        prenomLineEdit = new QLineEdit(formLayoutWidget);
        prenomLineEdit->setObjectName(QString::fromUtf8("prenomLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, prenomLineEdit);

        promoLabel = new QLabel(formLayoutWidget);
        promoLabel->setObjectName(QString::fromUtf8("promoLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, promoLabel);

        promoComboBox = new QComboBox(formLayoutWidget);
        promoComboBox->setObjectName(QString::fromUtf8("promoComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, promoComboBox);

        nomLabel = new QLabel(formLayoutWidget);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nomLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boutonOK = new QPushButton(formLayoutWidget);
        boutonOK->setObjectName(QString::fromUtf8("boutonOK"));

        horizontalLayout->addWidget(boutonOK);

        boutonAnnuler = new QPushButton(formLayoutWidget);
        boutonAnnuler->setObjectName(QString::fromUtf8("boutonAnnuler"));

        horizontalLayout->addWidget(boutonAnnuler);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(FenetreEditionClient);

        QMetaObject::connectSlotsByName(FenetreEditionClient);
    } // setupUi

    void retranslateUi(QDialog *FenetreEditionClient)
    {
        FenetreEditionClient->setWindowTitle(QApplication::translate("FenetreEditionClient", "KFet - Edition d'un client", 0, QApplication::UnicodeUTF8));
        prenomLabel->setText(QApplication::translate("FenetreEditionClient", "Prenom", 0, QApplication::UnicodeUTF8));
        promoLabel->setText(QApplication::translate("FenetreEditionClient", "Promo", 0, QApplication::UnicodeUTF8));
        nomLabel->setText(QApplication::translate("FenetreEditionClient", "Nom", 0, QApplication::UnicodeUTF8));
        boutonOK->setText(QApplication::translate("FenetreEditionClient", "OK", 0, QApplication::UnicodeUTF8));
        boutonAnnuler->setText(QApplication::translate("FenetreEditionClient", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FenetreEditionClient: public Ui_FenetreEditionClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREEDITIONCLIENT_H
