/********************************************************************************
** Form generated from reading UI file 'cfenetregestionproduit.ui'
**
** Created: Mon 30. Jan 20:54:50 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFENETREGESTIONPRODUIT_H
#define UI_CFENETREGESTIONPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFenetreGestionProduit
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *ptwFGPtableProduct;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ppbFGPajouter;
    QPushButton *ppbFGPsupprimer;
    QPushButton *ppbFGPhistorique;
    QSpacerItem *horizontalSpacer;
    QPushButton *ppbFGPok;
    QPushButton *ppbFGPannuler;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CFenetreGestionProduit)
    {
        if (CFenetreGestionProduit->objectName().isEmpty())
            CFenetreGestionProduit->setObjectName(QString::fromUtf8("CFenetreGestionProduit"));
        CFenetreGestionProduit->resize(859, 559);
        CFenetreGestionProduit->setModal(true);
        verticalLayoutWidget_2 = new QWidget(CFenetreGestionProduit);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 841, 541));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ptwFGPtableProduct = new QTableWidget(verticalLayoutWidget_2);
        ptwFGPtableProduct->setObjectName(QString::fromUtf8("ptwFGPtableProduct"));
        ptwFGPtableProduct->setAlternatingRowColors(true);
        ptwFGPtableProduct->setSelectionMode(QAbstractItemView::SingleSelection);
        ptwFGPtableProduct->setSelectionBehavior(QAbstractItemView::SelectRows);
        ptwFGPtableProduct->setTextElideMode(Qt::ElideNone);
        ptwFGPtableProduct->setSortingEnabled(true);
        ptwFGPtableProduct->horizontalHeader()->setCascadingSectionResizes(false);
        ptwFGPtableProduct->horizontalHeader()->setStretchLastSection(true);
        ptwFGPtableProduct->verticalHeader()->setVisible(false);
        ptwFGPtableProduct->verticalHeader()->setCascadingSectionResizes(true);
        ptwFGPtableProduct->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        ptwFGPtableProduct->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(ptwFGPtableProduct);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ppbFGPajouter = new QPushButton(verticalLayoutWidget_2);
        ppbFGPajouter->setObjectName(QString::fromUtf8("ppbFGPajouter"));
        ppbFGPajouter->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(ppbFGPajouter);

        ppbFGPsupprimer = new QPushButton(verticalLayoutWidget_2);
        ppbFGPsupprimer->setObjectName(QString::fromUtf8("ppbFGPsupprimer"));
        ppbFGPsupprimer->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(ppbFGPsupprimer);

        ppbFGPhistorique = new QPushButton(verticalLayoutWidget_2);
        ppbFGPhistorique->setObjectName(QString::fromUtf8("ppbFGPhistorique"));
        ppbFGPhistorique->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(ppbFGPhistorique);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ppbFGPok = new QPushButton(verticalLayoutWidget_2);
        ppbFGPok->setObjectName(QString::fromUtf8("ppbFGPok"));

        horizontalLayout->addWidget(ppbFGPok);

        ppbFGPannuler = new QPushButton(verticalLayoutWidget_2);
        ppbFGPannuler->setObjectName(QString::fromUtf8("ppbFGPannuler"));

        horizontalLayout->addWidget(ppbFGPannuler);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CFenetreGestionProduit);
        QObject::connect(ppbFGPannuler, SIGNAL(clicked()), CFenetreGestionProduit, SLOT(close()));

        QMetaObject::connectSlotsByName(CFenetreGestionProduit);
    } // setupUi

    void retranslateUi(QDialog *CFenetreGestionProduit)
    {
        CFenetreGestionProduit->setWindowTitle(QApplication::translate("CFenetreGestionProduit", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ppbFGPajouter->setToolTip(QApplication::translate("CFenetreGestionProduit", "Ajouter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ppbFGPajouter->setText(QString());
#ifndef QT_NO_TOOLTIP
        ppbFGPsupprimer->setToolTip(QApplication::translate("CFenetreGestionProduit", "Supprimer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ppbFGPsupprimer->setText(QString());
#ifndef QT_NO_TOOLTIP
        ppbFGPhistorique->setToolTip(QApplication::translate("CFenetreGestionProduit", "Historique", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ppbFGPhistorique->setText(QString());
        ppbFGPok->setText(QApplication::translate("CFenetreGestionProduit", "OK", 0, QApplication::UnicodeUTF8));
        ppbFGPannuler->setText(QApplication::translate("CFenetreGestionProduit", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFenetreGestionProduit: public Ui_CFenetreGestionProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFENETREGESTIONPRODUIT_H
