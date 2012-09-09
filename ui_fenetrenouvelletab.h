/********************************************************************************
** Form generated from reading UI file 'fenetrenouvelletab.ui'
**
** Created: Sun 12. Feb 22:03:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRENOUVELLETAB_H
#define UI_FENETRENOUVELLETAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetreNouvelleTab
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *bontouOK;
    QPushButton *boutonAnnuler;

    void setupUi(QDialog *fenetreNouvelleTab)
    {
        if (fenetreNouvelleTab->objectName().isEmpty())
            fenetreNouvelleTab->setObjectName(QString::fromUtf8("fenetreNouvelleTab"));
        fenetreNouvelleTab->setWindowModality(Qt::ApplicationModal);
        fenetreNouvelleTab->resize(420, 91);
        QFont font;
        font.setFamily(QString::fromUtf8("Raavi"));
        font.setPointSize(11);
        fenetreNouvelleTab->setFont(font);
        formLayoutWidget = new QWidget(fenetreNouvelleTab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 401, 76));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bontouOK = new QPushButton(formLayoutWidget);
        bontouOK->setObjectName(QString::fromUtf8("bontouOK"));

        horizontalLayout->addWidget(bontouOK);

        boutonAnnuler = new QPushButton(formLayoutWidget);
        boutonAnnuler->setObjectName(QString::fromUtf8("boutonAnnuler"));

        horizontalLayout->addWidget(boutonAnnuler);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(fenetreNouvelleTab);

        QMetaObject::connectSlotsByName(fenetreNouvelleTab);
    } // setupUi

    void retranslateUi(QDialog *fenetreNouvelleTab)
    {
        fenetreNouvelleTab->setWindowTitle(QApplication::translate("fenetreNouvelleTab", "KFet - Nouvel onglet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fenetreNouvelleTab", "Nom du nouvel onglet : ", 0, QApplication::UnicodeUTF8));
        bontouOK->setText(QApplication::translate("fenetreNouvelleTab", "OK", 0, QApplication::UnicodeUTF8));
        boutonAnnuler->setText(QApplication::translate("fenetreNouvelleTab", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fenetreNouvelleTab: public Ui_fenetreNouvelleTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRENOUVELLETAB_H
