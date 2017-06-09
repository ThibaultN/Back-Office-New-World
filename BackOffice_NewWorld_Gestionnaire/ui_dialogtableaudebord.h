/********************************************************************************
** Form generated from reading UI file 'dialogtableaudebord.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTABLEAUDEBORD_H
#define UI_DIALOGTABLEAUDEBORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTableauDeBord
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetTableauDeBord;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogTableauDeBord)
    {
        if (DialogTableauDeBord->objectName().isEmpty())
            DialogTableauDeBord->setObjectName(QStringLiteral("DialogTableauDeBord"));
        DialogTableauDeBord->resize(577, 567);
        gridLayout = new QGridLayout(DialogTableauDeBord);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetTableauDeBord = new QTableWidget(DialogTableauDeBord);
        if (tableWidgetTableauDeBord->columnCount() < 5)
            tableWidgetTableauDeBord->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetTableauDeBord->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTableauDeBord->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTableauDeBord->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetTableauDeBord->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetTableauDeBord->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetTableauDeBord->setObjectName(QStringLiteral("tableWidgetTableauDeBord"));
        tableWidgetTableauDeBord->horizontalHeader()->setDefaultSectionSize(220);

        gridLayout->addWidget(tableWidgetTableauDeBord, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogTableauDeBord);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogTableauDeBord);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogTableauDeBord, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogTableauDeBord, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogTableauDeBord);
    } // setupUi

    void retranslateUi(QDialog *DialogTableauDeBord)
    {
        DialogTableauDeBord->setWindowTitle(QApplication::translate("DialogTableauDeBord", "Tableau de bord", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetTableauDeBord->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogTableauDeBord", "Nombre de produits", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTableauDeBord->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogTableauDeBord", "Nombre de types de produits", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTableauDeBord->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogTableauDeBord", "Nombre de rayons", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetTableauDeBord->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogTableauDeBord", "Nombre d'employ\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetTableauDeBord->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogTableauDeBord", "Nombre de points de ventes", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogTableauDeBord: public Ui_DialogTableauDeBord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTABLEAUDEBORD_H
