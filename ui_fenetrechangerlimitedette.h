/********************************************************************************
** Form generated from reading UI file 'fenetrechangerlimitedette.ui'
**
** Created: Mon 6. Feb 22:23:15 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRECHANGERLIMITEDETTE_H
#define UI_FENETRECHANGERLIMITEDETTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreChangerLimiteDette
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *spinBoxClient;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxKFtier;
    QHBoxLayout *horizontalLayout;
    QPushButton *boutonOk;
    QPushButton *boutonAnnuler;

    void setupUi(QDialog *FenetreChangerLimiteDette)
    {
        if (FenetreChangerLimiteDette->objectName().isEmpty())
            FenetreChangerLimiteDette->setObjectName(QString::fromUtf8("FenetreChangerLimiteDette"));
        FenetreChangerLimiteDette->resize(471, 126);
        QFont font;
        font.setFamily(QString::fromUtf8("Raavi"));
        font.setPointSize(11);
        FenetreChangerLimiteDette->setFont(font);
        formLayoutWidget = new QWidget(FenetreChangerLimiteDette);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 451, 114));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBoxClient = new QDoubleSpinBox(formLayoutWidget);
        spinBoxClient->setObjectName(QString::fromUtf8("spinBoxClient"));
        spinBoxClient->setMaximum(200);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxClient);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBoxKFtier = new QDoubleSpinBox(formLayoutWidget);
        spinBoxKFtier->setObjectName(QString::fromUtf8("spinBoxKFtier"));
        spinBoxKFtier->setMaximum(200);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxKFtier);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boutonOk = new QPushButton(formLayoutWidget);
        boutonOk->setObjectName(QString::fromUtf8("boutonOk"));

        horizontalLayout->addWidget(boutonOk);

        boutonAnnuler = new QPushButton(formLayoutWidget);
        boutonAnnuler->setObjectName(QString::fromUtf8("boutonAnnuler"));

        horizontalLayout->addWidget(boutonAnnuler);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(FenetreChangerLimiteDette);
        QObject::connect(boutonAnnuler, SIGNAL(clicked()), FenetreChangerLimiteDette, SLOT(close()));

        QMetaObject::connectSlotsByName(FenetreChangerLimiteDette);
    } // setupUi

    void retranslateUi(QDialog *FenetreChangerLimiteDette)
    {
        FenetreChangerLimiteDette->setWindowTitle(QApplication::translate("FenetreChangerLimiteDette", "KFet - Limite de dette", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FenetreChangerLimiteDette", "Limite de dette pour un client :", 0, QApplication::UnicodeUTF8));
        spinBoxClient->setPrefix(QString());
        spinBoxClient->setSuffix(QString());
        label_2->setText(QApplication::translate("FenetreChangerLimiteDette", "Limite de dette pour un KFtier : ", 0, QApplication::UnicodeUTF8));
        boutonOk->setText(QApplication::translate("FenetreChangerLimiteDette", "OK", 0, QApplication::UnicodeUTF8));
        boutonAnnuler->setText(QApplication::translate("FenetreChangerLimiteDette", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FenetreChangerLimiteDette: public Ui_FenetreChangerLimiteDette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRECHANGERLIMITEDETTE_H
