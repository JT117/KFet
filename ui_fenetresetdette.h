/********************************************************************************
** Form generated from reading UI file 'fenetresetdette.ui'
**
** Created: Tue 7. Feb 14:46:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRESETDETTE_H
#define UI_FENETRESETDETTE_H

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

class Ui_FenetreSetDette
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *boutonOK;
    QPushButton *boutonAnnuler;

    void setupUi(QDialog *FenetreSetDette)
    {
        if (FenetreSetDette->objectName().isEmpty())
            FenetreSetDette->setObjectName(QString::fromUtf8("FenetreSetDette"));
        FenetreSetDette->setWindowModality(Qt::ApplicationModal);
        FenetreSetDette->resize(394, 93);
        QFont font;
        font.setFamily(QString::fromUtf8("Raavi"));
        font.setPointSize(11);
        FenetreSetDette->setFont(font);
        formLayoutWidget = new QWidget(FenetreSetDette);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 371, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boutonOK = new QPushButton(formLayoutWidget);
        boutonOK->setObjectName(QString::fromUtf8("boutonOK"));

        horizontalLayout->addWidget(boutonOK);

        boutonAnnuler = new QPushButton(formLayoutWidget);
        boutonAnnuler->setObjectName(QString::fromUtf8("boutonAnnuler"));

        horizontalLayout->addWidget(boutonAnnuler);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(FenetreSetDette);

        QMetaObject::connectSlotsByName(FenetreSetDette);
    } // setupUi

    void retranslateUi(QDialog *FenetreSetDette)
    {
        FenetreSetDette->setWindowTitle(QApplication::translate("FenetreSetDette", "KFet - Definir une dette", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FenetreSetDette", "Dette :         ", 0, QApplication::UnicodeUTF8));
        boutonOK->setText(QApplication::translate("FenetreSetDette", "OK", 0, QApplication::UnicodeUTF8));
        boutonAnnuler->setText(QApplication::translate("FenetreSetDette", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FenetreSetDette: public Ui_FenetreSetDette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRESETDETTE_H
