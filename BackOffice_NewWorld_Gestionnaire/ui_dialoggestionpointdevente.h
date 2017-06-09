/********************************************************************************
** Form generated from reading UI file 'dialoggestionpointdevente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGESTIONPOINTDEVENTE_H
#define UI_DIALOGGESTIONPOINTDEVENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogGestionPointDeVente
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditLibellePdv;
    QTableWidget *tableWidgetPointDeVente;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditActivitePdv;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditNomDirigeantPdv;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditPrenomDirigeatPdv;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditTelephonePdv;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEditRuePdv;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditCodePostalPdv;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditVillePdv;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButtonAjoutPdv;
    QPushButton *pushButtonSupprPdv;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogGestionPointDeVente)
    {
        if (DialogGestionPointDeVente->objectName().isEmpty())
            DialogGestionPointDeVente->setObjectName(QStringLiteral("DialogGestionPointDeVente"));
        DialogGestionPointDeVente->resize(745, 561);
        gridLayout = new QGridLayout(DialogGestionPointDeVente);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogGestionPointDeVente);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditLibellePdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditLibellePdv->setObjectName(QStringLiteral("lineEditLibellePdv"));

        horizontalLayout->addWidget(lineEditLibellePdv);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidgetPointDeVente = new QTableWidget(DialogGestionPointDeVente);
        if (tableWidgetPointDeVente->columnCount() < 8)
            tableWidgetPointDeVente->setColumnCount(8);
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
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetPointDeVente->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidgetPointDeVente->setObjectName(QStringLiteral("tableWidgetPointDeVente"));
        tableWidgetPointDeVente->horizontalHeader()->setDefaultSectionSize(145);

        gridLayout->addWidget(tableWidgetPointDeVente, 0, 1, 8, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(DialogGestionPointDeVente);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditActivitePdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditActivitePdv->setObjectName(QStringLiteral("lineEditActivitePdv"));

        horizontalLayout_2->addWidget(lineEditActivitePdv);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(DialogGestionPointDeVente);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditNomDirigeantPdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditNomDirigeantPdv->setObjectName(QStringLiteral("lineEditNomDirigeantPdv"));

        horizontalLayout_3->addWidget(lineEditNomDirigeantPdv);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(DialogGestionPointDeVente);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditPrenomDirigeatPdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditPrenomDirigeatPdv->setObjectName(QStringLiteral("lineEditPrenomDirigeatPdv"));

        horizontalLayout_4->addWidget(lineEditPrenomDirigeatPdv);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(DialogGestionPointDeVente);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditTelephonePdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditTelephonePdv->setObjectName(QStringLiteral("lineEditTelephonePdv"));

        horizontalLayout_5->addWidget(lineEditTelephonePdv);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(DialogGestionPointDeVente);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        lineEditRuePdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditRuePdv->setObjectName(QStringLiteral("lineEditRuePdv"));

        horizontalLayout_9->addWidget(lineEditRuePdv);


        gridLayout->addLayout(horizontalLayout_9, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(DialogGestionPointDeVente);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditCodePostalPdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditCodePostalPdv->setObjectName(QStringLiteral("lineEditCodePostalPdv"));

        horizontalLayout_6->addWidget(lineEditCodePostalPdv);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(DialogGestionPointDeVente);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEditVillePdv = new QLineEdit(DialogGestionPointDeVente);
        lineEditVillePdv->setObjectName(QStringLiteral("lineEditVillePdv"));

        horizontalLayout_7->addWidget(lineEditVillePdv);


        gridLayout->addLayout(horizontalLayout_7, 7, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButtonAjoutPdv = new QPushButton(DialogGestionPointDeVente);
        pushButtonAjoutPdv->setObjectName(QStringLiteral("pushButtonAjoutPdv"));

        horizontalLayout_8->addWidget(pushButtonAjoutPdv);

        pushButtonSupprPdv = new QPushButton(DialogGestionPointDeVente);
        pushButtonSupprPdv->setObjectName(QStringLiteral("pushButtonSupprPdv"));

        horizontalLayout_8->addWidget(pushButtonSupprPdv);


        gridLayout->addLayout(horizontalLayout_8, 8, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DialogGestionPointDeVente);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 1, 1, 1);


        retranslateUi(DialogGestionPointDeVente);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGestionPointDeVente, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGestionPointDeVente, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogGestionPointDeVente);
    } // setupUi

    void retranslateUi(QDialog *DialogGestionPointDeVente)
    {
        DialogGestionPointDeVente->setWindowTitle(QApplication::translate("DialogGestionPointDeVente", "Gestion des points de ventes", 0));
        label->setText(QApplication::translate("DialogGestionPointDeVente", "Libelle : ", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetPointDeVente->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogGestionPointDeVente", "Libell\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetPointDeVente->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogGestionPointDeVente", "Activit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetPointDeVente->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogGestionPointDeVente", "Nom du dirigeant", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetPointDeVente->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogGestionPointDeVente", "Pr\303\251nom du dirigeant", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetPointDeVente->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogGestionPointDeVente", "T\303\251l\303\251phone", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetPointDeVente->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogGestionPointDeVente", "Rue", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetPointDeVente->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogGestionPointDeVente", "Code Postal", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetPointDeVente->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogGestionPointDeVente", "Ville", 0));
        label_2->setText(QApplication::translate("DialogGestionPointDeVente", "Activit\303\251 :", 0));
        label_3->setText(QApplication::translate("DialogGestionPointDeVente", "Nom du dirigeant :", 0));
        label_4->setText(QApplication::translate("DialogGestionPointDeVente", "Pr\303\251nom du dirigeant : :", 0));
        label_5->setText(QApplication::translate("DialogGestionPointDeVente", "T\303\251l\303\251phone :", 0));
        label_8->setText(QApplication::translate("DialogGestionPointDeVente", "Rue :", 0));
        label_6->setText(QApplication::translate("DialogGestionPointDeVente", "Code postal :", 0));
        label_7->setText(QApplication::translate("DialogGestionPointDeVente", "Ville :", 0));
        pushButtonAjoutPdv->setText(QApplication::translate("DialogGestionPointDeVente", "Ajouter un point de vente", 0));
        pushButtonSupprPdv->setText(QApplication::translate("DialogGestionPointDeVente", "Supprimer un point de vente", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogGestionPointDeVente: public Ui_DialogGestionPointDeVente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGESTIONPOINTDEVENTE_H
