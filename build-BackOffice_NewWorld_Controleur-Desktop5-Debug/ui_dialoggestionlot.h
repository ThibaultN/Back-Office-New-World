/********************************************************************************
** Form generated from reading UI file 'dialoggestionlot.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGESTIONLOT_H
#define UI_DIALOGGESTIONLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogGestionLot
{
public:
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tabRayons;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidgetRayons;
    QWidget *tabTypesProduits;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidgetTypesProduits;
    QWidget *tabProduits;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidgetProduits;
    QWidget *tabLots;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidgetLot;
    QWidget *tabLots1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSupprLot;
    QTableWidget *tableWidgetLot;
    QWidget *tabLotsPerimes;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidgetLotPerimes;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSupprLotPerimer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogGestionLot)
    {
        if (DialogGestionLot->objectName().isEmpty())
            DialogGestionLot->setObjectName(QStringLiteral("DialogGestionLot"));
        DialogGestionLot->resize(1013, 660);
        gridLayout_6 = new QGridLayout(DialogGestionLot);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabWidget = new QTabWidget(DialogGestionLot);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabRayons = new QWidget();
        tabRayons->setObjectName(QStringLiteral("tabRayons"));
        gridLayout_7 = new QGridLayout(tabRayons);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tableWidgetRayons = new QTableWidget(tabRayons);
        if (tableWidgetRayons->columnCount() < 1)
            tableWidgetRayons->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRayons->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidgetRayons->setObjectName(QStringLiteral("tableWidgetRayons"));
        tableWidgetRayons->setDragEnabled(false);
        tableWidgetRayons->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetRayons->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetRayons->horizontalHeader()->setStretchLastSection(true);

        gridLayout_7->addWidget(tableWidgetRayons, 0, 0, 1, 1);

        tabWidget->addTab(tabRayons, QString());
        tabTypesProduits = new QWidget();
        tabTypesProduits->setObjectName(QStringLiteral("tabTypesProduits"));
        gridLayout_2 = new QGridLayout(tabTypesProduits);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidgetTypesProduits = new QTableWidget(tabTypesProduits);
        if (tableWidgetTypesProduits->columnCount() < 2)
            tableWidgetTypesProduits->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTypesProduits->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTypesProduits->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        tableWidgetTypesProduits->setObjectName(QStringLiteral("tableWidgetTypesProduits"));
        tableWidgetTypesProduits->horizontalHeader()->setDefaultSectionSize(200);
        tableWidgetTypesProduits->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetTypesProduits->horizontalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tableWidgetTypesProduits, 0, 0, 1, 1);

        tabWidget->addTab(tabTypesProduits, QString());
        tabProduits = new QWidget();
        tabProduits->setObjectName(QStringLiteral("tabProduits"));
        gridLayout_3 = new QGridLayout(tabProduits);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidgetProduits = new QTableWidget(tabProduits);
        if (tableWidgetProduits->columnCount() < 2)
            tableWidgetProduits->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        tableWidgetProduits->setObjectName(QStringLiteral("tableWidgetProduits"));
        tableWidgetProduits->horizontalHeader()->setDefaultSectionSize(200);

        gridLayout_3->addWidget(tableWidgetProduits, 0, 0, 1, 1);

        tabWidget->addTab(tabProduits, QString());
        tabLots = new QWidget();
        tabLots->setObjectName(QStringLiteral("tabLots"));
        gridLayout_5 = new QGridLayout(tabLots);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tabWidgetLot = new QTabWidget(tabLots);
        tabWidgetLot->setObjectName(QStringLiteral("tabWidgetLot"));
        tabLots1 = new QWidget();
        tabLots1->setObjectName(QStringLiteral("tabLots1"));
        gridLayout = new QGridLayout(tabLots1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonSupprLot = new QPushButton(tabLots1);
        pushButtonSupprLot->setObjectName(QStringLiteral("pushButtonSupprLot"));

        horizontalLayout_2->addWidget(pushButtonSupprLot);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        tableWidgetLot = new QTableWidget(tabLots1);
        if (tableWidgetLot->columnCount() < 9)
            tableWidgetLot->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetLot->setHorizontalHeaderItem(8, __qtablewidgetitem13);
        tableWidgetLot->setObjectName(QStringLiteral("tableWidgetLot"));
        tableWidgetLot->horizontalHeader()->setDefaultSectionSize(160);

        gridLayout->addWidget(tableWidgetLot, 0, 0, 1, 2);

        tabWidgetLot->addTab(tabLots1, QString());
        tabLotsPerimes = new QWidget();
        tabLotsPerimes->setObjectName(QStringLiteral("tabLotsPerimes"));
        gridLayout_4 = new QGridLayout(tabLotsPerimes);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidgetLotPerimes = new QTableWidget(tabLotsPerimes);
        if (tableWidgetLotPerimes->columnCount() < 9)
            tableWidgetLotPerimes->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetLotPerimes->setHorizontalHeaderItem(8, __qtablewidgetitem22);
        tableWidgetLotPerimes->setObjectName(QStringLiteral("tableWidgetLotPerimes"));
        tableWidgetLotPerimes->horizontalHeader()->setDefaultSectionSize(160);

        gridLayout_4->addWidget(tableWidgetLotPerimes, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonSupprLotPerimer = new QPushButton(tabLotsPerimes);
        pushButtonSupprLotPerimer->setObjectName(QStringLiteral("pushButtonSupprLotPerimer"));

        horizontalLayout->addWidget(pushButtonSupprLotPerimer);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidgetLot->addTab(tabLotsPerimes, QString());

        gridLayout_5->addWidget(tabWidgetLot, 0, 0, 1, 1);

        tabWidget->addTab(tabLots, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogGestionLot);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogGestionLot);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGestionLot, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGestionLot, SLOT(reject()));

        tabWidget->setCurrentIndex(1);
        tabWidgetLot->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogGestionLot);
    } // setupUi

    void retranslateUi(QDialog *DialogGestionLot)
    {
        DialogGestionLot->setWindowTitle(QApplication::translate("DialogGestionLot", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetRayons->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogGestionLot", "Libell\303\251", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabRayons), QApplication::translate("DialogGestionLot", "Rayons", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTypesProduits->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogGestionLot", "Types de produit", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTypesProduits->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogGestionLot", "Rayon", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabTypesProduits), QApplication::translate("DialogGestionLot", "Types Produits", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduits->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogGestionLot", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduits->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogGestionLot", "Type de produit", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabProduits), QApplication::translate("DialogGestionLot", "Produits", 0));
        pushButtonSupprLot->setText(QApplication::translate("DialogGestionLot", "Supprimer un lot", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetLot->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogGestionLot", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetLot->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogGestionLot", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetLot->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogGestionLot", "Producteur", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetLot->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogGestionLot", "Quantit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetLot->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogGestionLot", "Unit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetLot->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogGestionLot", "Prix", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetLot->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("DialogGestionLot", "Date de production", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetLot->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("DialogGestionLot", "Date de r\303\251colte", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetLot->horizontalHeaderItem(8);
        ___qtablewidgetitem13->setText(QApplication::translate("DialogGestionLot", "Origine", 0));
        tabWidgetLot->setTabText(tabWidgetLot->indexOf(tabLots1), QApplication::translate("DialogGestionLot", "Les lots", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetLotPerimes->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("DialogGestionLot", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetLotPerimes->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("DialogGestionLot", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetLotPerimes->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("DialogGestionLot", "Producteur", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetLotPerimes->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("DialogGestionLot", "Quantit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetLotPerimes->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("DialogGestionLot", "Unit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetLotPerimes->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("DialogGestionLot", "Prix", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetLotPerimes->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QApplication::translate("DialogGestionLot", "Date de production", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetLotPerimes->horizontalHeaderItem(7);
        ___qtablewidgetitem21->setText(QApplication::translate("DialogGestionLot", "Date de r\303\251colte", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetLotPerimes->horizontalHeaderItem(8);
        ___qtablewidgetitem22->setText(QApplication::translate("DialogGestionLot", "Origine", 0));
        pushButtonSupprLotPerimer->setText(QApplication::translate("DialogGestionLot", "Supprimer le(s) lot(s) p\303\251rim\303\251(s)", 0));
        tabWidgetLot->setTabText(tabWidgetLot->indexOf(tabLotsPerimes), QApplication::translate("DialogGestionLot", "Lots p\303\251rim\303\251s", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabLots), QApplication::translate("DialogGestionLot", "Lots", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogGestionLot: public Ui_DialogGestionLot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGESTIONLOT_H
