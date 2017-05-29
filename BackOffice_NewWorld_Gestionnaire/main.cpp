#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>
#include <QTextCodec>
#include "mainwindow.h"
#include "dialogconnect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));

    DialogConnect connect;
    while(connect.exec()==QDialog::Accepted)
    {
        QString login = connect.getId();
        QString mdp = connect.getMdp();
        QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
        maBase.setHostName("localhost");
        maBase.setUserName(login);
        maBase.setPassword(mdp);
        if(maBase.open())
        {
            MainWindow fenetrePrincipale;
            fenetrePrincipale.show();
            return a.exec();
        }
        else
        {
            connect.setMessage();
        }
    }
}
