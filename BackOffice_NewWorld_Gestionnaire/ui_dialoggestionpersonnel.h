/********************************************************************************
** Form generated from reading UI file 'dialoggestionpersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGESTIONPERSONNEL_H
#define UI_DIALOGGESTIONPERSONNEL_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogGestionPersonnel
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEditDateNaiss;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *lineEditRue;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *lineEditCodePostal;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLineEdit *lineEditVille;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEditTelFixe;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEditTelPortable;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEditAdresseMail;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QLineEdit *lineEditPostes;
    QWidget *page_2;
    QTableWidget *tableWidgetEmploye;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAjoutEmploye;
    QPushButton *pushButtonModifEmploye;
    QPushButton *pushButtonSupprEmploye;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButtonAccepterModif;
    QPushButton *pushButtonRefuserModif;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogGestionPersonnel)
    {
        if (DialogGestionPersonnel->objectName().isEmpty())
            DialogGestionPersonnel->setObjectName(QStringLiteral("DialogGestionPersonnel"));
        DialogGestionPersonnel->resize(833, 639);
        gridLayout = new QGridLayout(DialogGestionPersonnel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(DialogGestionPersonnel);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEditNom = new QLineEdit(page);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayout_5->addWidget(lineEditNom);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEditPrenom = new QLineEdit(page);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        horizontalLayout_6->addWidget(lineEditPrenom);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        lineEditDateNaiss = new QLineEdit(page);
        lineEditDateNaiss->setObjectName(QStringLiteral("lineEditDateNaiss"));

        horizontalLayout_7->addWidget(lineEditDateNaiss);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        lineEditRue = new QLineEdit(page);
        lineEditRue->setObjectName(QStringLiteral("lineEditRue"));

        horizontalLayout_8->addWidget(lineEditRue);


        gridLayout_2->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        lineEditCodePostal = new QLineEdit(page);
        lineEditCodePostal->setObjectName(QStringLiteral("lineEditCodePostal"));

        horizontalLayout_9->addWidget(lineEditCodePostal);


        gridLayout_2->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_10->addWidget(label_6);

        lineEditVille = new QLineEdit(page);
        lineEditVille->setObjectName(QStringLiteral("lineEditVille"));

        horizontalLayout_10->addWidget(lineEditVille);


        gridLayout_2->addLayout(horizontalLayout_10, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEditTelFixe = new QLineEdit(page);
        lineEditTelFixe->setObjectName(QStringLiteral("lineEditTelFixe"));

        horizontalLayout_4->addWidget(lineEditTelFixe);


        gridLayout_2->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        lineEditTelPortable = new QLineEdit(page);
        lineEditTelPortable->setObjectName(QStringLiteral("lineEditTelPortable"));

        horizontalLayout_3->addWidget(lineEditTelPortable);


        gridLayout_2->addLayout(horizontalLayout_3, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        lineEditAdresseMail = new QLineEdit(page);
        lineEditAdresseMail->setObjectName(QStringLiteral("lineEditAdresseMail"));

        horizontalLayout_2->addWidget(lineEditAdresseMail);


        gridLayout_2->addLayout(horizontalLayout_2, 8, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_11->addWidget(label_10);

        lineEditPostes = new QLineEdit(page);
        lineEditPostes->setObjectName(QStringLiteral("lineEditPostes"));

        horizontalLayout_11->addWidget(lineEditPostes);


        gridLayout_2->addLayout(horizontalLayout_11, 9, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        tableWidgetEmploye = new QTableWidget(DialogGestionPersonnel);
        if (tableWidgetEmploye->columnCount() < 11)
            tableWidgetEmploye->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidgetEmploye->setObjectName(QStringLiteral("tableWidgetEmploye"));
        tableWidgetEmploye->setSortingEnabled(false);
        tableWidgetEmploye->horizontalHeader()->setDefaultSectionSize(140);

        gridLayout->addWidget(tableWidgetEmploye, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAjoutEmploye = new QPushButton(DialogGestionPersonnel);
        pushButtonAjoutEmploye->setObjectName(QStringLiteral("pushButtonAjoutEmploye"));

        horizontalLayout->addWidget(pushButtonAjoutEmploye);

        pushButtonModifEmploye = new QPushButton(DialogGestionPersonnel);
        pushButtonModifEmploye->setObjectName(QStringLiteral("pushButtonModifEmploye"));

        horizontalLayout->addWidget(pushButtonModifEmploye);

        pushButtonSupprEmploye = new QPushButton(DialogGestionPersonnel);
        pushButtonSupprEmploye->setObjectName(QStringLiteral("pushButtonSupprEmploye"));

        horizontalLayout->addWidget(pushButtonSupprEmploye);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButtonAccepterModif = new QPushButton(DialogGestionPersonnel);
        pushButtonAccepterModif->setObjectName(QStringLiteral("pushButtonAccepterModif"));

        horizontalLayout_12->addWidget(pushButtonAccepterModif);

        pushButtonRefuserModif = new QPushButton(DialogGestionPersonnel);
        pushButtonRefuserModif->setObjectName(QStringLiteral("pushButtonRefuserModif"));

        horizontalLayout_12->addWidget(pushButtonRefuserModif);


        gridLayout->addLayout(horizontalLayout_12, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DialogGestionPersonnel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(DialogGestionPersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGestionPersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGestionPersonnel, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogGestionPersonnel);
    } // setupUi

    void retranslateUi(QDialog *DialogGestionPersonnel)
    {
        DialogGestionPersonnel->setWindowTitle(QApplication::translate("DialogGestionPersonnel", "Gestion personnel", 0));
        label->setText(QApplication::translate("DialogGestionPersonnel", "Nom :", 0));
        label_2->setText(QApplication::translate("DialogGestionPersonnel", "Pr\303\251nom :", 0));
        label_3->setText(QApplication::translate("DialogGestionPersonnel", "Date de naissance :", 0));
        label_4->setText(QApplication::translate("DialogGestionPersonnel", "Rue :", 0));
        label_5->setText(QApplication::translate("DialogGestionPersonnel", "Code postal :", 0));
        label_6->setText(QApplication::translate("DialogGestionPersonnel", "Ville :", 0));
        label_7->setText(QApplication::translate("DialogGestionPersonnel", "T\303\251l\303\251phone fixe :", 0));
        label_8->setText(QApplication::translate("DialogGestionPersonnel", "T\303\251l\303\251phone portable :", 0));
        label_9->setText(QApplication::translate("DialogGestionPersonnel", "Adresse email :", 0));
        label_10->setText(QApplication::translate("DialogGestionPersonnel", "Postes :", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetEmploye->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogGestionPersonnel", "ID Employ\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetEmploye->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogGestionPersonnel", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetEmploye->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogGestionPersonnel", "Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetEmploye->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogGestionPersonnel", "Date de naissance", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetEmploye->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogGestionPersonnel", "Rue", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetEmploye->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogGestionPersonnel", "Code Postal", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetEmploye->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogGestionPersonnel", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetEmploye->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogGestionPersonnel", "T\303\251l\303\251phone fixe", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetEmploye->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogGestionPersonnel", "T\303\251l\303\251phone portable", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetEmploye->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogGestionPersonnel", "Adresse email", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetEmploye->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogGestionPersonnel", "Postes", 0));
        pushButtonAjoutEmploye->setText(QApplication::translate("DialogGestionPersonnel", "Ajouter un employ\303\251", 0));
        pushButtonModifEmploye->setText(QApplication::translate("DialogGestionPersonnel", "Modifier un employ\303\251", 0));
        pushButtonSupprEmploye->setText(QApplication::translate("DialogGestionPersonnel", "Supprimer un employ\303\251", 0));
        pushButtonAccepterModif->setText(QApplication::translate("DialogGestionPersonnel", "Accepter la modification", 0));
        pushButtonRefuserModif->setText(QApplication::translate("DialogGestionPersonnel", "Annuler la modification", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogGestionPersonnel: public Ui_DialogGestionPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGESTIONPERSONNEL_H
