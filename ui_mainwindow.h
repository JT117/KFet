/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 17. Dec 23:30:17 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGestion_des_produits;
    QAction *actionSuper_Utilisateur;
    QAction *actionSe_deconnecter;
    QAction *actionChanger_mot_de_passe_Admin;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *rechercheLineEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addMoney;
    QPushButton *addContact;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 710);
        QFont font;
        font.setFamily(QString::fromUtf8("Raavi"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        actionGestion_des_produits = new QAction(MainWindow);
        actionGestion_des_produits->setObjectName(QString::fromUtf8("actionGestion_des_produits"));
        actionSuper_Utilisateur = new QAction(MainWindow);
        actionSuper_Utilisateur->setObjectName(QString::fromUtf8("actionSuper_Utilisateur"));
        actionSe_deconnecter = new QAction(MainWindow);
        actionSe_deconnecter->setObjectName(QString::fromUtf8("actionSe_deconnecter"));
        actionChanger_mot_de_passe_Admin = new QAction(MainWindow);
        actionChanger_mot_de_passe_Admin->setObjectName(QString::fromUtf8("actionChanger_mot_de_passe_Admin"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 981, 611));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(horizontalLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_6->setContentsMargins(-1, -1, 0, -1);

        horizontalLayout->addLayout(gridLayout_6);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 331, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raavi"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        rechercheLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        rechercheLineEdit->setObjectName(QString::fromUtf8("rechercheLineEdit"));

        horizontalLayout_3->addWidget(rechercheLineEdit);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(380, 0, 611, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addMoney = new QPushButton(horizontalLayoutWidget_3);
        addMoney->setObjectName(QString::fromUtf8("addMoney"));
        addMoney->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(addMoney);

        addContact = new QPushButton(horizontalLayoutWidget_3);
        addContact->setObjectName(QString::fromUtf8("addContact"));
        addContact->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(addContact);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuOutils = new QMenu(menubar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuOutils->menuAction());
        menuOutils->addAction(actionGestion_des_produits);
        menuOutils->addAction(actionSuper_Utilisateur);
        menuOutils->addAction(actionChanger_mot_de_passe_Admin);
        menuOutils->addAction(actionSe_deconnecter);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KFet - Gestion des dettes", 0, QApplication::UnicodeUTF8));
        actionGestion_des_produits->setText(QApplication::translate("MainWindow", "Gestion des produits", 0, QApplication::UnicodeUTF8));
        actionSuper_Utilisateur->setText(QApplication::translate("MainWindow", "Super Utilisateur", 0, QApplication::UnicodeUTF8));
        actionSe_deconnecter->setText(QApplication::translate("MainWindow", "Se deconnecter", 0, QApplication::UnicodeUTF8));
        actionChanger_mot_de_passe_Admin->setText(QApplication::translate("MainWindow", "Changer mot de passe Admin", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "DI3", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Recherche :", 0, QApplication::UnicodeUTF8));
        rechercheLineEdit->setText(QString());
        addMoney->setText(QString());
#ifndef QT_NO_TOOLTIP
        addContact->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        addContact->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
