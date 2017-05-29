/********************************************************************************
** Form generated from reading UI file 'dialogconnect.ui'
**
** Created: Fri Mar 10 15:39:49 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECT_H
#define UI_DIALOGCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

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
            DialogConnect->setObjectName(QString::fromUtf8("DialogConnect"));
        DialogConnect->resize(326, 218);
        gridLayout = new QGridLayout(DialogConnect);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogConnect);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(DialogConnect);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(DialogConnect);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditIdentifiantConnexion = new QLineEdit(DialogConnect);
        lineEditIdentifiantConnexion->setObjectName(QString::fromUtf8("lineEditIdentifiantConnexion"));

        horizontalLayout->addWidget(lineEditIdentifiantConnexion);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(DialogConnect);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditMdpConnexion = new QLineEdit(DialogConnect);
        lineEditMdpConnexion->setObjectName(QString::fromUtf8("lineEditMdpConnexion"));
        lineEditMdpConnexion->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditMdpConnexion);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        labelErreurConnect = new QLabel(DialogConnect);
        labelErreurConnect->setObjectName(QString::fromUtf8("labelErreurConnect"));

        gridLayout->addWidget(labelErreurConnect, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogConnect);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        DialogConnect->setWindowTitle(QApplication::translate("DialogConnect", "Connexion", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogConnect", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Application pour les gestionnaires</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogConnect", "<html><head/><body><p><span style=\" font-size:14pt;\">Identification :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogConnect", "Nom de compte :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogConnect", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        labelErreurConnect->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogConnect: public Ui_DialogConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECT_H
