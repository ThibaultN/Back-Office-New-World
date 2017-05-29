/********************************************************************************
** Form generated from reading UI file 'dialogmenu.ui'
**
** Created: Fri Mar 10 14:26:52 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMENU_H
#define UI_DIALOGMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogMenu
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonGestionMagasin;
    QPushButton *pushButtonGestionPersonnel;
    QPushButton *pushButtonGestionPaye;
    QPushButton *pushButtonStats;
    QPushButton *pushButtonRDV;

    void setupUi(QDialog *DialogMenu)
    {
        if (DialogMenu->objectName().isEmpty())
            DialogMenu->setObjectName(QString::fromUtf8("DialogMenu"));
        DialogMenu->resize(322, 197);
        gridLayout = new QGridLayout(DialogMenu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonGestionMagasin = new QPushButton(DialogMenu);
        pushButtonGestionMagasin->setObjectName(QString::fromUtf8("pushButtonGestionMagasin"));

        gridLayout->addWidget(pushButtonGestionMagasin, 0, 0, 1, 1);

        pushButtonGestionPersonnel = new QPushButton(DialogMenu);
        pushButtonGestionPersonnel->setObjectName(QString::fromUtf8("pushButtonGestionPersonnel"));

        gridLayout->addWidget(pushButtonGestionPersonnel, 1, 0, 1, 1);

        pushButtonGestionPaye = new QPushButton(DialogMenu);
        pushButtonGestionPaye->setObjectName(QString::fromUtf8("pushButtonGestionPaye"));

        gridLayout->addWidget(pushButtonGestionPaye, 2, 0, 1, 1);

        pushButtonStats = new QPushButton(DialogMenu);
        pushButtonStats->setObjectName(QString::fromUtf8("pushButtonStats"));

        gridLayout->addWidget(pushButtonStats, 3, 0, 1, 1);

        pushButtonRDV = new QPushButton(DialogMenu);
        pushButtonRDV->setObjectName(QString::fromUtf8("pushButtonRDV"));

        gridLayout->addWidget(pushButtonRDV, 4, 0, 1, 1);


        retranslateUi(DialogMenu);

        QMetaObject::connectSlotsByName(DialogMenu);
    } // setupUi

    void retranslateUi(QDialog *DialogMenu)
    {
        DialogMenu->setWindowTitle(QApplication::translate("DialogMenu", "Menu", 0, QApplication::UnicodeUTF8));
        pushButtonGestionMagasin->setText(QApplication::translate("DialogMenu", "Types de produits / Produits / Lots / Rayons", 0, QApplication::UnicodeUTF8));
        pushButtonGestionPersonnel->setText(QApplication::translate("DialogMenu", "Gestion du personnel", 0, QApplication::UnicodeUTF8));
        pushButtonGestionPaye->setText(QApplication::translate("DialogMenu", "Gestion de la paye", 0, QApplication::UnicodeUTF8));
        pushButtonStats->setText(QApplication::translate("DialogMenu", "Statistiques / Tableau de bord", 0, QApplication::UnicodeUTF8));
        pushButtonRDV->setText(QApplication::translate("DialogMenu", "Rendez-vous pour la premi\303\250re visite", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogMenu: public Ui_DialogMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMENU_H
