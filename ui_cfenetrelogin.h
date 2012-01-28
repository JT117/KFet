/********************************************************************************
** Form generated from reading UI file 'cfenetrelogin.ui'
**
** Created: Sat 28. Jan 23:33:34 2012
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
    QLabel *label_2;

    void setupUi(QDialog *CFenetreLogin)
    {
        if (CFenetreLogin->objectName().isEmpty())
            CFenetreLogin->setObjectName(QString::fromUtf8("CFenetreLogin"));
        CFenetreLogin->setWindowModality(Qt::ApplicationModal);
        CFenetreLogin->resize(240, 78);
        QFont font;
        font.setPointSize(10);
        CFenetreLogin->setFont(font);
        CFenetreLogin->setModal(true);
        buttonBox = new QDialogButtonBox(CFenetreLogin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-110, 40, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(CFenetreLogin);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 221, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);


        retranslateUi(CFenetreLogin);
        QObject::connect(buttonBox, SIGNAL(accepted()), CFenetreLogin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CFenetreLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(CFenetreLogin);
    } // setupUi

    void retranslateUi(QDialog *CFenetreLogin)
    {
        CFenetreLogin->setWindowTitle(QApplication::translate("CFenetreLogin", "Login", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CFenetreLogin", "Password :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFenetreLogin: public Ui_CFenetreLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETRELOGIN_H
