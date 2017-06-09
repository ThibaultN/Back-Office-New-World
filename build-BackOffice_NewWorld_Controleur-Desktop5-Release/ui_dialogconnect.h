/********************************************************************************
** Form generated from reading UI file 'dialogconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECT_H
#define UI_DIALOGCONNECT_H

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

QT_BEGIN_NAMESPACE

class Ui_DialogConnect
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditNomDeCompte;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditMotDePasse;
    QDialogButtonBox *buttonBox;
    QLabel *labelErreurConnect;

    void setupUi(QDialog *DialogConnect)
    {
        if (DialogConnect->objectName().isEmpty())
            DialogConnect->setObjectName(QStringLiteral("DialogConnect"));
        DialogConnect->resize(400, 300);
        gridLayout = new QGridLayout(DialogConnect);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(DialogConnect);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        label_3 = new QLabel(DialogConnect);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(DialogConnect);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEditNomDeCompte = new QLineEdit(DialogConnect);
        lineEditNomDeCompte->setObjectName(QStringLiteral("lineEditNomDeCompte"));

        horizontalLayout_2->addWidget(lineEditNomDeCompte);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(DialogConnect);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditMotDePasse = new QLineEdit(DialogConnect);
        lineEditMotDePasse->setObjectName(QStringLiteral("lineEditMotDePasse"));
        lineEditMotDePasse->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEditMotDePasse);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DialogConnect);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        labelErreurConnect = new QLabel(DialogConnect);
        labelErreurConnect->setObjectName(QStringLiteral("labelErreurConnect"));

        gridLayout->addWidget(labelErreurConnect, 4, 0, 1, 2);


        retranslateUi(DialogConnect);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogConnect, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogConnect, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogConnect);
    } // setupUi

    void retranslateUi(QDialog *DialogConnect)
    {
        DialogConnect->setWindowTitle(QApplication::translate("DialogConnect", "Dialog", 0));
        label_4->setText(QApplication::translate("DialogConnect", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Application pour les contr\303\264leurs</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("DialogConnect", "<html><head/><body><p><span style=\" font-size:14pt;\">Identification :</span></p></body></html>", 0));
        label->setText(QApplication::translate("DialogConnect", "Nom de compte :", 0));
        label_2->setText(QApplication::translate("DialogConnect", "Mot de passe :", 0));
        labelErreurConnect->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogConnect: public Ui_DialogConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECT_H
