/********************************************************************************
** Form generated from reading UI file 'dialoggestionmagasin.ui'
**
** Created: Fri Mar 10 16:32:35 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGESTIONMAGASIN_H
#define UI_DIALOGGESTIONMAGASIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogGestionMagasin
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *Rayons;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidgetRayon;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditAjoutRayon;
    QPushButton *pushButtonAjoutRayon;
    QPushButton *pushButtonSupprRayon;
    QWidget *typesProduits;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidgetTypeProduit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditAjoutTypeProduit;
    QPushButton *pushButtonAjoutTypeProduit;
    QPushButton *pushButtonSupprTypeProduit;
    QWidget *Produit;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidgetProduit;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditAjoutProduit;
    QComboBox *comboBoxChoixType;
    QPushButton *pushButtonAjoutProduit;
    QPushButton *pushButtonSupprProduit;
    QWidget *Lot;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *DialogGestionMagasin)
    {
        if (DialogGestionMagasin->objectName().isEmpty())
            DialogGestionMagasin->setObjectName(QString::fromUtf8("DialogGestionMagasin"));
        DialogGestionMagasin->resize(600, 342);
        gridLayout = new QGridLayout(DialogGestionMagasin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(DialogGestionMagasin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(DialogGestionMagasin);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Rayons = new QWidget();
        Rayons->setObjectName(QString::fromUtf8("Rayons"));
        gridLayout_2 = new QGridLayout(Rayons);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidgetRayon = new QTableWidget(Rayons);
        if (tableWidgetRayon->columnCount() < 1)
            tableWidgetRayon->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRayon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidgetRayon->setObjectName(QString::fromUtf8("tableWidgetRayon"));
        tableWidgetRayon->setEnabled(true);
        tableWidgetRayon->setDragEnabled(false);
        tableWidgetRayon->setAlternatingRowColors(false);
        tableWidgetRayon->setSortingEnabled(false);
        tableWidgetRayon->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetRayon->horizontalHeader()->setDefaultSectionSize(100);
        tableWidgetRayon->horizontalHeader()->setMinimumSectionSize(20);
        tableWidgetRayon->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetRayon->horizontalHeader()->setStretchLastSection(true);
        tableWidgetRayon->verticalHeader()->setCascadingSectionResizes(false);
        tableWidgetRayon->verticalHeader()->setMinimumSectionSize(25);
        tableWidgetRayon->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_2->addWidget(tableWidgetRayon, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditAjoutRayon = new QLineEdit(Rayons);
        lineEditAjoutRayon->setObjectName(QString::fromUtf8("lineEditAjoutRayon"));

        horizontalLayout->addWidget(lineEditAjoutRayon);

        pushButtonAjoutRayon = new QPushButton(Rayons);
        pushButtonAjoutRayon->setObjectName(QString::fromUtf8("pushButtonAjoutRayon"));

        horizontalLayout->addWidget(pushButtonAjoutRayon);

        pushButtonSupprRayon = new QPushButton(Rayons);
        pushButtonSupprRayon->setObjectName(QString::fromUtf8("pushButtonSupprRayon"));

        horizontalLayout->addWidget(pushButtonSupprRayon);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget->addTab(Rayons, QString());
        typesProduits = new QWidget();
        typesProduits->setObjectName(QString::fromUtf8("typesProduits"));
        gridLayout_3 = new QGridLayout(typesProduits);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidgetTypeProduit = new QTableWidget(typesProduits);
        if (tableWidgetTypeProduit->columnCount() < 2)
            tableWidgetTypeProduit->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTypeProduit->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTypeProduit->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        tableWidgetTypeProduit->setObjectName(QString::fromUtf8("tableWidgetTypeProduit"));
        tableWidgetTypeProduit->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidgetTypeProduit, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditAjoutTypeProduit = new QLineEdit(typesProduits);
        lineEditAjoutTypeProduit->setObjectName(QString::fromUtf8("lineEditAjoutTypeProduit"));

        horizontalLayout_2->addWidget(lineEditAjoutTypeProduit);

        pushButtonAjoutTypeProduit = new QPushButton(typesProduits);
        pushButtonAjoutTypeProduit->setObjectName(QString::fromUtf8("pushButtonAjoutTypeProduit"));

        horizontalLayout_2->addWidget(pushButtonAjoutTypeProduit);

        pushButtonSupprTypeProduit = new QPushButton(typesProduits);
        pushButtonSupprTypeProduit->setObjectName(QString::fromUtf8("pushButtonSupprTypeProduit"));

        horizontalLayout_2->addWidget(pushButtonSupprTypeProduit);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(typesProduits, QString());
        Produit = new QWidget();
        Produit->setObjectName(QString::fromUtf8("Produit"));
        gridLayout_4 = new QGridLayout(Produit);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableWidgetProduit = new QTableWidget(Produit);
        if (tableWidgetProduit->columnCount() < 2)
            tableWidgetProduit->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        tableWidgetProduit->setObjectName(QString::fromUtf8("tableWidgetProduit"));
        tableWidgetProduit->horizontalHeader()->setStretchLastSection(true);

        gridLayout_4->addWidget(tableWidgetProduit, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditAjoutProduit = new QLineEdit(Produit);
        lineEditAjoutProduit->setObjectName(QString::fromUtf8("lineEditAjoutProduit"));

        horizontalLayout_3->addWidget(lineEditAjoutProduit);

        comboBoxChoixType = new QComboBox(Produit);
        comboBoxChoixType->setObjectName(QString::fromUtf8("comboBoxChoixType"));

        horizontalLayout_3->addWidget(comboBoxChoixType);

        pushButtonAjoutProduit = new QPushButton(Produit);
        pushButtonAjoutProduit->setObjectName(QString::fromUtf8("pushButtonAjoutProduit"));

        horizontalLayout_3->addWidget(pushButtonAjoutProduit);

        pushButtonSupprProduit = new QPushButton(Produit);
        pushButtonSupprProduit->setObjectName(QString::fromUtf8("pushButtonSupprProduit"));

        horizontalLayout_3->addWidget(pushButtonSupprProduit);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        tabWidget->addTab(Produit, QString());
        Lot = new QWidget();
        Lot->setObjectName(QString::fromUtf8("Lot"));
        gridLayout_5 = new QGridLayout(Lot);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton = new QPushButton(Lot);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_5->addWidget(pushButton, 1, 0, 1, 1);

        tableWidget = new QTableWidget(Lot);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);

        gridLayout_5->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(Lot, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(DialogGestionMagasin);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGestionMagasin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGestionMagasin, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogGestionMagasin);
    } // setupUi

    void retranslateUi(QDialog *DialogGestionMagasin)
    {
        DialogGestionMagasin->setWindowTitle(QApplication::translate("DialogGestionMagasin", "Gestion types produits / produits / rayons / lots", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetRayon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogGestionMagasin", "Libell\303\251", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutRayon->setText(QApplication::translate("DialogGestionMagasin", "Ajouter un rayon", 0, QApplication::UnicodeUTF8));
        pushButtonSupprRayon->setText(QApplication::translate("DialogGestionMagasin", "Supprimer un rayon", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Rayons), QApplication::translate("DialogGestionMagasin", "Rayon", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTypeProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogGestionMagasin", "Libell\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTypeProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogGestionMagasin", "Rayon", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutTypeProduit->setText(QApplication::translate("DialogGestionMagasin", "Ajouter un type de produit", 0, QApplication::UnicodeUTF8));
        pushButtonSupprTypeProduit->setText(QApplication::translate("DialogGestionMagasin", "Supprimer un type de produit", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(typesProduits), QApplication::translate("DialogGestionMagasin", "Type Produit", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogGestionMagasin", "Libell\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogGestionMagasin", "Type de produit", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutProduit->setText(QApplication::translate("DialogGestionMagasin", "Ajouter un produit", 0, QApplication::UnicodeUTF8));
        pushButtonSupprProduit->setText(QApplication::translate("DialogGestionMagasin", "Supprimer un produit", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Produit), QApplication::translate("DialogGestionMagasin", "Produit", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogGestionMagasin", "Suppimer les lots p\303\251rim\303\251s", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogGestionMagasin", "Produit", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogGestionMagasin", "Type de produit", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogGestionMagasin", "Producteur", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogGestionMagasin", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogGestionMagasin", "Unit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogGestionMagasin", "Prix", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("DialogGestionMagasin", "Date de r\303\251colte", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("DialogGestionMagasin", "Origine", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Lot), QApplication::translate("DialogGestionMagasin", "Lot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogGestionMagasin: public Ui_DialogGestionMagasin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGESTIONMAGASIN_H
