/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 24. Dec 14:44:35 2011
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QAction *actionQuitter;
    QAction *actionA_propros;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QGridLayout *gridLayout_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPushButton *supprTextRecherche;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addMoney;
    QPushButton *subMoney;
    QFrame *line;
    QPushButton *addContact;
    QPushButton *delContact;
    QFrame *line_2;
    QPushButton *manageProduct;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QMenu *menu;
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
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionA_propros = new QAction(MainWindow);
        actionA_propros->setObjectName(QString::fromUtf8("actionA_propros"));
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
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        supprTextRecherche = new QPushButton(horizontalLayoutWidget_2);
        supprTextRecherche->setObjectName(QString::fromUtf8("supprTextRecherche"));
        supprTextRecherche->setFlat(true);

        horizontalLayout_3->addWidget(supprTextRecherche);

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

        subMoney = new QPushButton(horizontalLayoutWidget_3);
        subMoney->setObjectName(QString::fromUtf8("subMoney"));
        subMoney->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(subMoney);

        line = new QFrame(horizontalLayoutWidget_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        addContact = new QPushButton(horizontalLayoutWidget_3);
        addContact->setObjectName(QString::fromUtf8("addContact"));
        addContact->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(addContact);

        delContact = new QPushButton(horizontalLayoutWidget_3);
        delContact->setObjectName(QString::fromUtf8("delContact"));
        delContact->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(delContact);

        line_2 = new QFrame(horizontalLayoutWidget_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        manageProduct = new QPushButton(horizontalLayoutWidget_3);
        manageProduct->setObjectName(QString::fromUtf8("manageProduct"));
        manageProduct->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(manageProduct);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuOutils = new QMenu(menubar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuOutils->menuAction());
        menubar->addAction(menu->menuAction());
        menuFichier->addAction(actionQuitter);
        menuOutils->addAction(actionGestion_des_produits);
        menuOutils->addAction(actionSuper_Utilisateur);
        menuOutils->addAction(actionChanger_mot_de_passe_Admin);
        menuOutils->addAction(actionSe_deconnecter);
        menu->addAction(actionA_propros);

        retranslateUi(MainWindow);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KFet - Gestion des dettes", 0, QApplication::UnicodeUTF8));
        actionGestion_des_produits->setText(QApplication::translate("MainWindow", "Gestion des produits", 0, QApplication::UnicodeUTF8));
        actionSuper_Utilisateur->setText(QApplication::translate("MainWindow", "Super Utilisateur", 0, QApplication::UnicodeUTF8));
        actionSe_deconnecter->setText(QApplication::translate("MainWindow", "Se deconnecter", 0, QApplication::UnicodeUTF8));
        actionChanger_mot_de_passe_Admin->setText(QApplication::translate("MainWindow", "Changer mot de passe Admin", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionA_propros->setText(QApplication::translate("MainWindow", "A propros", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "La dette limite est de 10 \342\202\254", 0, QApplication::UnicodeUTF8));
        supprTextRecherche->setText(QString());
#ifndef QT_NO_TOOLTIP
        addMoney->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Raavi'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ajouter un cr\303\251dit</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addMoney->setText(QString());
#ifndef QT_NO_TOOLTIP
        subMoney->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Raavi'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ajouter une dette</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        subMoney->setText(QString());
#ifndef QT_NO_TOOLTIP
        addContact->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Raavi'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ajouter un client</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addContact->setText(QString());
#ifndef QT_NO_TOOLTIP
        delContact->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Raavi'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Supprimer le client selectionn\303\251</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        delContact->setText(QString());
#ifndef QT_NO_TOOLTIP
        manageProduct->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Raavi'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">G\303\251rer les produits</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        manageProduct->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
