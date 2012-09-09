/********************************************************************************
** Form generated from reading UI file 'fenetresuppressiononglet.ui'
**
** Created: Sun 9. Sep 12:38:23 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRESUPPRESSIONONGLET_H
#define UI_FENETRESUPPRESSIONONGLET_H

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
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FenetreSuppressionOnglet
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *FenetreSuppressionOnglet)
    {
        if (FenetreSuppressionOnglet->objectName().isEmpty())
            FenetreSuppressionOnglet->setObjectName(QString::fromUtf8("FenetreSuppressionOnglet"));
        FenetreSuppressionOnglet->resize(407, 81);
        FenetreSuppressionOnglet->setModal(true);
        formLayout = new QFormLayout(FenetreSuppressionOnglet);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(FenetreSuppressionOnglet);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(FenetreSuppressionOnglet);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonOk = new QPushButton(FenetreSuppressionOnglet);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        horizontalLayout->addWidget(pushButtonOk);

        pushButtonAnnuler = new QPushButton(FenetreSuppressionOnglet);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        horizontalLayout->addWidget(pushButtonAnnuler);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(FenetreSuppressionOnglet);

        QMetaObject::connectSlotsByName(FenetreSuppressionOnglet);
    } // setupUi

    void retranslateUi(QDialog *FenetreSuppressionOnglet)
    {
        FenetreSuppressionOnglet->setWindowTitle(QApplication::translate("FenetreSuppressionOnglet", "KFet - Suppression d'onglet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FenetreSuppressionOnglet", "Choississez l'onglet \303\240 supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("FenetreSuppressionOnglet", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("FenetreSuppressionOnglet", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FenetreSuppressionOnglet: public Ui_FenetreSuppressionOnglet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRESUPPRESSIONONGLET_H
