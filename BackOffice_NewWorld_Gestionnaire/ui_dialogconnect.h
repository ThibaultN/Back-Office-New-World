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
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditIdentifiantConnexion;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditMdpConnexion;
    QLabel *labelErreurConnect;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogConnect)
    {
        if (DialogConnect->objectName().isEmpty())
            DialogConnect->setObjectName(QStringLiteral("DialogConnect"));
        DialogConnect->resize(326, 218);
        gridLayout = new QGridLayout(DialogConnect);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogConnect);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(DialogConnect);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(DialogConnect);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditIdentifiantConnexion = new QLineEdit(DialogConnect);
        lineEditIdentifiantConnexion->setObjectName(QStringLiteral("lineEditIdentifiantConnexion"));

        horizontalLayout->addWidget(lineEditIdentifiantConnexion);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(DialogConnect);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditMdpConnexion = new QLineEdit(DialogConnect);
        lineEditMdpConnexion->setObjectName(QStringLiteral("lineEditMdpConnexion"));
        lineEditMdpConnexion->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditMdpConnexion);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        labelErreurConnect = new QLabel(DialogConnect);
        labelErreurConnect->setObjectName(QStringLiteral("labelErreurConnect"));

        gridLayout->addWidget(labelErreurConnect, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogConnect);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        buttonBox->raise();
        label_2->raise();
        label->raise();
        labelErreurConnect->raise();
        label->raise();

        retranslateUi(DialogConnect);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogConnect, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogConnect, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogConnect);
    } // setupUi

    void retranslateUi(QDialog *DialogConnect)
    {
        DialogConnect->setWindowTitle(QApplication::translate("DialogConnect", "Connexion", 0));
        label->setText(QApplication::translate("DialogConnect", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Application pour les gestionnaires</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("DialogConnect", "<html><head/><body><p><span style=\" font-size:14pt;\">Identification :</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("DialogConnect", "Nom de compte :", 0));
        label_4->setText(QApplication::translate("DialogConnect", "Mot de passe :", 0));
        labelErreurConnect->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogConnect: public Ui_DialogConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECT_H
