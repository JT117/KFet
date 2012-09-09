/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 9. Sep 16:08:31 2012
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
    QAction *actionLimite_de_dette;
    QAction *actionPromo_UP;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDette;
    QPushButton *supprTextRecherche;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addMoney;
    QPushButton *subMoney;
    QFrame *line;
    QPushButton *addContact;
    QPushButton *edition;
    QPushButton *delContact;
    QFrame *line_2;
    QPushButton *manageProduct;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QGridLayout *gridLayout_6;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QMenu *menu;
    QMenu *menuPromo;
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
        actionLimite_de_dette = new QAction(MainWindow);
        actionLimite_de_dette->setObjectName(QString::fromUtf8("actionLimite_de_dette"));
        actionPromo_UP = new QAction(MainWindow);
        actionPromo_UP->setObjectName(QString::fromUtf8("actionPromo_UP"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAcceptDrops(true);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1, -1, 991, 661));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelDette = new QLabel(verticalLayoutWidget);
        labelDette->setObjectName(QString::fromUtf8("labelDette"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raavi"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        labelDette->setFont(font1);

        horizontalLayout_3->addWidget(labelDette);

        supprTextRecherche = new QPushButton(verticalLayoutWidget);
        supprTextRecherche->setObjectName(QString::fromUtf8("supprTextRecherche"));
        supprTextRecherche->setFlat(true);

        horizontalLayout_3->addWidget(supprTextRecherche);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addMoney = new QPushButton(verticalLayoutWidget);
        addMoney->setObjectName(QString::fromUtf8("addMoney"));
        addMoney->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(addMoney);

        subMoney = new QPushButton(verticalLayoutWidget);
        subMoney->setObjectName(QString::fromUtf8("subMoney"));
        subMoney->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(subMoney);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        addContact = new QPushButton(verticalLayoutWidget);
        addContact->setObjectName(QString::fromUtf8("addContact"));
        addContact->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(addContact);

        edition = new QPushButton(verticalLayoutWidget);
        edition->setObjectName(QString::fromUtf8("edition"));
        edition->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(edition);

        delContact = new QPushButton(verticalLayoutWidget);
        delContact->setObjectName(QString::fromUtf8("delContact"));
        delContact->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(delContact);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        manageProduct = new QPushButton(verticalLayoutWidget);
        manageProduct->setObjectName(QString::fromUtf8("manageProduct"));
        manageProduct->setIconSize(QSize(48, 48));

        horizontalLayout_2->addWidget(manageProduct);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setElideMode(Qt::ElideNone);

        verticalLayout_2->addWidget(tabWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_6->setContentsMargins(-1, -1, 0, -1);

        horizontalLayout->addLayout(gridLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuOutils = new QMenu(menubar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuPromo = new QMenu(menubar);
        menuPromo->setObjectName(QString::fromUtf8("menuPromo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuOutils->menuAction());
        menubar->addAction(menuPromo->menuAction());
        menubar->addAction(menu->menuAction());
        menuFichier->addAction(actionQuitter);
        menuOutils->addAction(actionGestion_des_produits);
        menuOutils->addAction(actionLimite_de_dette);
        menuOutils->addAction(actionSuper_Utilisateur);
        menuOutils->addAction(actionChanger_mot_de_passe_Admin);
        menuOutils->addAction(actionSe_deconnecter);
        menu->addAction(actionA_propros);
        menuPromo->addAction(actionPromo_UP);

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
        actionLimite_de_dette->setText(QApplication::translate("MainWindow", "Limite de dette", 0, QApplication::UnicodeUTF8));
        actionPromo_UP->setText(QApplication::translate("MainWindow", "Promo UP", 0, QApplication::UnicodeUTF8));
        labelDette->setText(QApplication::translate("MainWindow", "La dette limite est de 10 \342\202\254", 0, QApplication::UnicodeUTF8));
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
        edition->setToolTip(QApplication::translate("MainWindow", "Editer un client", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        edition->setText(QString());
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
        menuPromo->setTitle(QApplication::translate("MainWindow", "Promo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
