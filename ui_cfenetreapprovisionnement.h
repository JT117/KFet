/********************************************************************************
** Form generated from reading UI file 'cfenetreapprovisionnement.ui'
**
** Created: Mon 30. Jan 20:54:50 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFENETREAPPROVISIONNEMENT_H
#define UI_CFENETREAPPROVISIONNEMENT_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFenetreApprovisionnement
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *boutonAjouter;
    QPushButton *boutonAnnuler;

    void setupUi(QDialog *CFenetreApprovisionnement)
    {
        if (CFenetreApprovisionnement->objectName().isEmpty())
            CFenetreApprovisionnement->setObjectName(QString::fromUtf8("CFenetreApprovisionnement"));
        CFenetreApprovisionnement->resize(362, 131);
        CFenetreApprovisionnement->setModal(true);
        verticalLayoutWidget = new QWidget(CFenetreApprovisionnement);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 341, 110));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Raavi"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBox = new QDoubleSpinBox(verticalLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(500);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        boutonAjouter = new QPushButton(verticalLayoutWidget);
        boutonAjouter->setObjectName(QString::fromUtf8("boutonAjouter"));

        horizontalLayout->addWidget(boutonAjouter);

        boutonAnnuler = new QPushButton(verticalLayoutWidget);
        boutonAnnuler->setObjectName(QString::fromUtf8("boutonAnnuler"));

        horizontalLayout->addWidget(boutonAnnuler);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CFenetreApprovisionnement);

        QMetaObject::connectSlotsByName(CFenetreApprovisionnement);
    } // setupUi

    void retranslateUi(QDialog *CFenetreApprovisionnement)
    {
        CFenetreApprovisionnement->setWindowTitle(QApplication::translate("CFenetreApprovisionnement", "KFet - Approvisionement", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CFenetreApprovisionnement", "Rappel : vous ajoutez un cr\303\251dit au compte et non une dette", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CFenetreApprovisionnement", "Somme : ", 0, QApplication::UnicodeUTF8));
        boutonAjouter->setText(QApplication::translate("CFenetreApprovisionnement", "Ajouter", 0, QApplication::UnicodeUTF8));
        boutonAnnuler->setText(QApplication::translate("CFenetreApprovisionnement", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFenetreApprovisionnement: public Ui_CFenetreApprovisionnement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETREAPPROVISIONNEMENT_H
