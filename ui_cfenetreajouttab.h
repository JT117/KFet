/********************************************************************************
** Form generated from reading UI file 'cfenetreajouttab.ui'
**
** Created: Thu 6. Oct 16:14:34 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFENETREAJOUTTAB_H
#define UI_CFENETREAJOUTTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cfenetreajouttab
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *plFATlabelnomtab;
    QLineEdit *pleFATlineeditnomdelatabulation;
    QLabel *plFATlabelnombrecolone;
    QLineEdit *pleFATlineeditnombredecolonne;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ppbFATboutonok;
    QPushButton *ppbFATboutonannuler;

    void setupUi(QDialog *cfenetreajouttab)
    {
        if (cfenetreajouttab->objectName().isEmpty())
            cfenetreajouttab->setObjectName(QString::fromUtf8("cfenetreajouttab"));
        cfenetreajouttab->resize(259, 240);
        verticalLayoutWidget = new QWidget(cfenetreajouttab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 241, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plFATlabelnomtab = new QLabel(verticalLayoutWidget);
        plFATlabelnomtab->setObjectName(QString::fromUtf8("plFATlabelnomtab"));

        verticalLayout->addWidget(plFATlabelnomtab);

        pleFATlineeditnomdelatabulation = new QLineEdit(verticalLayoutWidget);
        pleFATlineeditnomdelatabulation->setObjectName(QString::fromUtf8("pleFATlineeditnomdelatabulation"));

        verticalLayout->addWidget(pleFATlineeditnomdelatabulation);

        plFATlabelnombrecolone = new QLabel(verticalLayoutWidget);
        plFATlabelnombrecolone->setObjectName(QString::fromUtf8("plFATlabelnombrecolone"));

        verticalLayout->addWidget(plFATlabelnombrecolone);

        pleFATlineeditnombredecolonne = new QLineEdit(verticalLayoutWidget);
        pleFATlineeditnombredecolonne->setObjectName(QString::fromUtf8("pleFATlineeditnombredecolonne"));

        verticalLayout->addWidget(pleFATlineeditnombredecolonne);

        horizontalLayoutWidget = new QWidget(cfenetreajouttab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 160, 241, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ppbFATboutonok = new QPushButton(horizontalLayoutWidget);
        ppbFATboutonok->setObjectName(QString::fromUtf8("ppbFATboutonok"));

        horizontalLayout->addWidget(ppbFATboutonok);

        ppbFATboutonannuler = new QPushButton(horizontalLayoutWidget);
        ppbFATboutonannuler->setObjectName(QString::fromUtf8("ppbFATboutonannuler"));

        horizontalLayout->addWidget(ppbFATboutonannuler);


        retranslateUi(cfenetreajouttab);

        QMetaObject::connectSlotsByName(cfenetreajouttab);
    } // setupUi

    void retranslateUi(QDialog *cfenetreajouttab)
    {
        cfenetreajouttab->setWindowTitle(QApplication::translate("cfenetreajouttab", "Dialog", 0, QApplication::UnicodeUTF8));
        plFATlabelnomtab->setText(QApplication::translate("cfenetreajouttab", "Nom de la tabulation : ", 0, QApplication::UnicodeUTF8));
        plFATlabelnombrecolone->setText(QApplication::translate("cfenetreajouttab", "Nombre de colonnes : ", 0, QApplication::UnicodeUTF8));
        ppbFATboutonok->setText(QApplication::translate("cfenetreajouttab", "Ok", 0, QApplication::UnicodeUTF8));
        ppbFATboutonannuler->setText(QApplication::translate("cfenetreajouttab", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cfenetreajouttab: public Ui_cfenetreajouttab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETREAJOUTTAB_H
