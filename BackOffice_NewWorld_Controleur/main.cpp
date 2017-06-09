#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>
#include <QSqlDatabase>
#include "dialogconnect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogConnect connect;
    while(connect.exec()==QDialog::Accepted)
    {
        QString login = connect.getId();
        QString mdp = connect.getMdp();
        QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
        maBase.setHostName("localhost");
        maBase.setDatabaseName("maBase");
        maBase.setUserName(login);
        maBase.setPassword(mdp);
        if(maBase.open())
        {
            MainWindow w;
            w.show();
            return a.exec();
        }
        else
        {
            connect.setMessage();
        }
    }



}
