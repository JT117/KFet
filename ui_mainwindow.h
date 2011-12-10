/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 10. Dec 20:15:19 2011
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
    QLabel *label;
    QLineEdit *rechercheLineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_6;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(949, 652);
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raavi"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        rechercheLineEdit = new QLineEdit(centralwidget);
        rechercheLineEdit->setObjectName(QString::fromUtf8("rechercheLineEdit"));
        rechercheLineEdit->setGeometry(QRect(90, 10, 161, 20));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 40, 921, 551));
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);

        horizontalLayout->addLayout(gridLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 949, 21));
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
        label->setText(QApplication::translate("MainWindow", "Recherche", 0, QApplication::UnicodeUTF8));
        rechercheLineEdit->setText(QApplication::translate("MainWindow", "112", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "DI3", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
