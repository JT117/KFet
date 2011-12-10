/********************************************************************************
** Form generated from reading UI file 'cfenetrelogin.ui'
**
** Created: Mon 5. Dec 09:50:39 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFENETRELOGIN_H
#define UI_CFENETRELOGIN_H

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

class Ui_CFenetreLogin
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *CFenetreLogin)
    {
        if (CFenetreLogin->objectName().isEmpty())
            CFenetreLogin->setObjectName(QString::fromUtf8("CFenetreLogin"));
        CFenetreLogin->setWindowModality(Qt::ApplicationModal);
        CFenetreLogin->resize(240, 129);
        QFont font;
        font.setPointSize(10);
        CFenetreLogin->setFont(font);
        CFenetreLogin->setModal(true);
        buttonBox = new QDialogButtonBox(CFenetreLogin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-110, 90, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(CFenetreLogin);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 221, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);


        retranslateUi(CFenetreLogin);
        QObject::connect(buttonBox, SIGNAL(accepted()), CFenetreLogin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CFenetreLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(CFenetreLogin);
    } // setupUi

    void retranslateUi(QDialog *CFenetreLogin)
    {
        CFenetreLogin->setWindowTitle(QApplication::translate("CFenetreLogin", "Login", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CFenetreLogin", "Login :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CFenetreLogin", "Password :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFenetreLogin: public Ui_CFenetreLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETRELOGIN_H
