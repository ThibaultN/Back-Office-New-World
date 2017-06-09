/********************************************************************************
** Form generated from reading UI file 'dialogvuepersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVUEPERSONNEL_H
#define UI_DIALOGVUEPERSONNEL_H

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

class Ui_DialogVuePersonnel
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetPersonnel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogVuePersonnel)
    {
        if (DialogVuePersonnel->objectName().isEmpty())
            DialogVuePersonnel->setObjectName(QStringLiteral("DialogVuePersonnel"));
        DialogVuePersonnel->resize(713, 489);
        gridLayout = new QGridLayout(DialogVuePersonnel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetPersonnel = new QTableWidget(DialogVuePersonnel);
        if (tableWidgetPersonnel->columnCount() < 10)
            tableWidgetPersonnel->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetPersonnel->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidgetPersonnel->setObjectName(QStringLiteral("tableWidgetPersonnel"));
        tableWidgetPersonnel->horizontalHeader()->setDefaultSectionSize(165);

        gridLayout->addWidget(tableWidgetPersonnel, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogVuePersonnel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogVuePersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogVuePersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogVuePersonnel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogVuePersonnel);
    } // setupUi

    void retranslateUi(QDialog *DialogVuePersonnel)
    {
        DialogVuePersonnel->setWindowTitle(QApplication::translate("DialogVuePersonnel", "Vue Personnel", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetPersonnel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogVuePersonnel", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetPersonnel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogVuePersonnel", "Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetPersonnel->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogVuePersonnel", "Date de naissance", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetPersonnel->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogVuePersonnel", "Rue", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetPersonnel->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogVuePersonnel", "Code Postal", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetPersonnel->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogVuePersonnel", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetPersonnel->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogVuePersonnel", "T\303\251l\303\251phone fixe", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetPersonnel->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogVuePersonnel", "T\303\251l\303\251phone portable", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetPersonnel->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogVuePersonnel", "Adresse email", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetPersonnel->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogVuePersonnel", "Postes", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogVuePersonnel: public Ui_DialogVuePersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVUEPERSONNEL_H
