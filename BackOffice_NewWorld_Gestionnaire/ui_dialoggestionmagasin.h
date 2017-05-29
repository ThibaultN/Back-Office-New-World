/********************************************************************************
** Form generated from reading UI file 'dialoggestionmagasin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGESTIONMAGASIN_H
#define UI_DIALOGGESTIONMAGASIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

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

    void setupUi(QDialog *DialogGestionMagasin)
    {
        if (DialogGestionMagasin->objectName().isEmpty())
            DialogGestionMagasin->setObjectName(QStringLiteral("DialogGestionMagasin"));
        DialogGestionMagasin->resize(600, 342);
        gridLayout = new QGridLayout(DialogGestionMagasin);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(DialogGestionMagasin);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(DialogGestionMagasin);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Rayons = new QWidget();
        Rayons->setObjectName(QStringLiteral("Rayons"));
        gridLayout_2 = new QGridLayout(Rayons);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidgetRayon = new QTableWidget(Rayons);
        if (tableWidgetRayon->columnCount() < 1)
            tableWidgetRayon->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRayon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidgetRayon->setObjectName(QStringLiteral("tableWidgetRayon"));
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
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditAjoutRayon = new QLineEdit(Rayons);
        lineEditAjoutRayon->setObjectName(QStringLiteral("lineEditAjoutRayon"));

        horizontalLayout->addWidget(lineEditAjoutRayon);

        pushButtonAjoutRayon = new QPushButton(Rayons);
        pushButtonAjoutRayon->setObjectName(QStringLiteral("pushButtonAjoutRayon"));

        horizontalLayout->addWidget(pushButtonAjoutRayon);

        pushButtonSupprRayon = new QPushButton(Rayons);
        pushButtonSupprRayon->setObjectName(QStringLiteral("pushButtonSupprRayon"));

        horizontalLayout->addWidget(pushButtonSupprRayon);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget->addTab(Rayons, QString());
        typesProduits = new QWidget();
        typesProduits->setObjectName(QStringLiteral("typesProduits"));
        gridLayout_3 = new QGridLayout(typesProduits);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidgetTypeProduit = new QTableWidget(typesProduits);
        if (tableWidgetTypeProduit->columnCount() < 2)
            tableWidgetTypeProduit->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTypeProduit->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTypeProduit->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        tableWidgetTypeProduit->setObjectName(QStringLiteral("tableWidgetTypeProduit"));
        tableWidgetTypeProduit->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidgetTypeProduit, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEditAjoutTypeProduit = new QLineEdit(typesProduits);
        lineEditAjoutTypeProduit->setObjectName(QStringLiteral("lineEditAjoutTypeProduit"));

        horizontalLayout_2->addWidget(lineEditAjoutTypeProduit);

        pushButtonAjoutTypeProduit = new QPushButton(typesProduits);
        pushButtonAjoutTypeProduit->setObjectName(QStringLiteral("pushButtonAjoutTypeProduit"));

        horizontalLayout_2->addWidget(pushButtonAjoutTypeProduit);

        pushButtonSupprTypeProduit = new QPushButton(typesProduits);
        pushButtonSupprTypeProduit->setObjectName(QStringLiteral("pushButtonSupprTypeProduit"));

        horizontalLayout_2->addWidget(pushButtonSupprTypeProduit);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(typesProduits, QString());
        Produit = new QWidget();
        Produit->setObjectName(QStringLiteral("Produit"));
        gridLayout_4 = new QGridLayout(Produit);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidgetProduit = new QTableWidget(Produit);
        if (tableWidgetProduit->columnCount() < 2)
            tableWidgetProduit->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        tableWidgetProduit->setObjectName(QStringLiteral("tableWidgetProduit"));
        tableWidgetProduit->horizontalHeader()->setStretchLastSection(true);

        gridLayout_4->addWidget(tableWidgetProduit, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEditAjoutProduit = new QLineEdit(Produit);
        lineEditAjoutProduit->setObjectName(QStringLiteral("lineEditAjoutProduit"));

        horizontalLayout_3->addWidget(lineEditAjoutProduit);

        comboBoxChoixType = new QComboBox(Produit);
        comboBoxChoixType->setObjectName(QStringLiteral("comboBoxChoixType"));

        horizontalLayout_3->addWidget(comboBoxChoixType);

        pushButtonAjoutProduit = new QPushButton(Produit);
        pushButtonAjoutProduit->setObjectName(QStringLiteral("pushButtonAjoutProduit"));

        horizontalLayout_3->addWidget(pushButtonAjoutProduit);

        pushButtonSupprProduit = new QPushButton(Produit);
        pushButtonSupprProduit->setObjectName(QStringLiteral("pushButtonSupprProduit"));

        horizontalLayout_3->addWidget(pushButtonSupprProduit);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        tabWidget->addTab(Produit, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(DialogGestionMagasin);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGestionMagasin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGestionMagasin, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogGestionMagasin);
    } // setupUi

    void retranslateUi(QDialog *DialogGestionMagasin)
    {
        DialogGestionMagasin->setWindowTitle(QApplication::translate("DialogGestionMagasin", "Gestion types produits / produits / rayons / lots", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetRayon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogGestionMagasin", "Libell\303\251", 0));
        pushButtonAjoutRayon->setText(QApplication::translate("DialogGestionMagasin", "Ajouter un rayon", 0));
        pushButtonSupprRayon->setText(QApplication::translate("DialogGestionMagasin", "Supprimer un rayon", 0));
        tabWidget->setTabText(tabWidget->indexOf(Rayons), QApplication::translate("DialogGestionMagasin", "Rayon", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTypeProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogGestionMagasin", "Libell\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTypeProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogGestionMagasin", "Rayon", 0));
        pushButtonAjoutTypeProduit->setText(QApplication::translate("DialogGestionMagasin", "Ajouter un type de produit", 0));
        pushButtonSupprTypeProduit->setText(QApplication::translate("DialogGestionMagasin", "Supprimer un type de produit", 0));
        tabWidget->setTabText(tabWidget->indexOf(typesProduits), QApplication::translate("DialogGestionMagasin", "Type de produit", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogGestionMagasin", "Libell\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogGestionMagasin", "Type de produit", 0));
        pushButtonAjoutProduit->setText(QApplication::translate("DialogGestionMagasin", "Ajouter un produit", 0));
        pushButtonSupprProduit->setText(QApplication::translate("DialogGestionMagasin", "Supprimer un produit", 0));
        tabWidget->setTabText(tabWidget->indexOf(Produit), QApplication::translate("DialogGestionMagasin", "Produit", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogGestionMagasin: public Ui_DialogGestionMagasin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGESTIONMAGASIN_H
