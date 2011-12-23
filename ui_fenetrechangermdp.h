/********************************************************************************
** Form generated from reading UI file 'fenetrechangermdp.ui'
**
** Created: Tue 20. Dec 15:38:33 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRECHANGERMDP_H
#define UI_FENETRECHANGERMDP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreChangerMDP
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *FenetreChangerMDP)
    {
        if (FenetreChangerMDP->objectName().isEmpty())
            FenetreChangerMDP->setObjectName(QString::fromUtf8("FenetreChangerMDP"));
        FenetreChangerMDP->resize(400, 142);
        QFont font;
        font.setPointSize(10);
        FenetreChangerMDP->setFont(font);
        FenetreChangerMDP->setModal(true);
        buttonBox = new QDialogButtonBox(FenetreChangerMDP);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(FenetreChangerMDP);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 361, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        retranslateUi(FenetreChangerMDP);
        QObject::connect(buttonBox, SIGNAL(accepted()), FenetreChangerMDP, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FenetreChangerMDP, SLOT(reject()));

        QMetaObject::connectSlotsByName(FenetreChangerMDP);
    } // setupUi

    void retranslateUi(QDialog *FenetreChangerMDP)
    {
        FenetreChangerMDP->setWindowTitle(QApplication::translate("FenetreChangerMDP", "KFet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FenetreChangerMDP", "Ancien mot de passe", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FenetreChangerMDP", "Nouveau mot de passe", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FenetreChangerMDP", "Confirmation mot de passe", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FenetreChangerMDP: public Ui_FenetreChangerMDP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRECHANGERMDP_H
