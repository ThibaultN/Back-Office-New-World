/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonGestionPersonnel;
    QPushButton *pushButtonGestionMagasin;
    QPushButton *pushButton;
    QPushButton *pushButtonTableauDeBord;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(359, 265);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonGestionPersonnel = new QPushButton(centralWidget);
        pushButtonGestionPersonnel->setObjectName(QStringLiteral("pushButtonGestionPersonnel"));

        gridLayout->addWidget(pushButtonGestionPersonnel, 3, 0, 1, 1);

        pushButtonGestionMagasin = new QPushButton(centralWidget);
        pushButtonGestionMagasin->setObjectName(QStringLiteral("pushButtonGestionMagasin"));

        gridLayout->addWidget(pushButtonGestionMagasin, 0, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButtonTableauDeBord = new QPushButton(centralWidget);
        pushButtonTableauDeBord->setObjectName(QStringLiteral("pushButtonTableauDeBord"));

        gridLayout->addWidget(pushButtonTableauDeBord, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 359, 29));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Quitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Menu", 0));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0));
        pushButtonGestionPersonnel->setText(QApplication::translate("MainWindow", "Gestion du personnel", 0));
        pushButtonGestionMagasin->setText(QApplication::translate("MainWindow", "Gestion types produits / produits / rayons / lots", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Gestion des points de ventes", 0));
        pushButtonTableauDeBord->setText(QApplication::translate("MainWindow", "Tableau de bord", 0));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
