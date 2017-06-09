/********************************************************************************
** Form generated from reading UI file 'dialogvuepointdevente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVUEPOINTDEVENTE_H
#define UI_DIALOGVUEPOINTDEVENTE_H

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

class Ui_DialogVuePointDeVente
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetPointDeVente;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogVuePointDeVente)
    {
        if (DialogVuePointDeVente->objectName().isEmpty())
            DialogVuePointDeVente->setObjectName(QStringLiteral("DialogVuePointDeVente"));
        DialogVuePointDeVente->resize(727, 526);
        gridLayout = new QGridLayout(DialogVuePointDeVente);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetPointDeVente = new QTableWidget(DialogVuePointDeVente);
        if (tableWidgetPointDeVente->columnCount() < 7)
            tableWidgetPointDeVente->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetPointDeVente->setObjectName(QStringLiteral("tableWidgetPointDeVente"));
        tableWidgetPointDeVente->horizontalHeader()->setDefaultSectionSize(165);

        gridLayout->addWidget(tableWidgetPointDeVente, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogVuePointDeVente);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogVuePointDeVente);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogVuePointDeVente, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogVuePointDeVente, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogVuePointDeVente);
    } // setupUi

    void retranslateUi(QDialog *DialogVuePointDeVente)
    {
        DialogVuePointDeVente->setWindowTitle(QApplication::translate("DialogVuePointDeVente", "Vue point de vente", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetPointDeVente->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogVuePointDeVente", "Libell\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetPointDeVente->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogVuePointDeVente", "Activit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetPointDeVente->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogVuePointDeVente", "Nom du dirigeant", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetPointDeVente->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogVuePointDeVente", "Pr\303\251nom du dirigeant", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetPointDeVente->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogVuePointDeVente", "T\303\251l\303\251phone", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetPointDeVente->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogVuePointDeVente", "Code Postal", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetPointDeVente->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogVuePointDeVente", "Ville", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogVuePointDeVente: public Ui_DialogVuePointDeVente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVUEPOINTDEVENTE_H
