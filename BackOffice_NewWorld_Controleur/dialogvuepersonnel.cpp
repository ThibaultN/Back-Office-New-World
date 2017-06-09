#include "dialogvuepersonnel.h"
#include "ui_dialogvuepersonnel.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogVuePersonnel::DialogVuePersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogVuePersonnel)
{
    ui->setupUi(this);
    chargerLesEmployes();
}

DialogVuePersonnel::~DialogVuePersonnel()
{
    delete ui;
}

/**
 * @brief DialogVuePersonnel::chargerLesEmployes
 * Charge les employés depuis la BDD
 */
void DialogVuePersonnel::chargerLesEmployes()
{
    textReq="SELECT employeNom, employePrenom, employeDateNaiss, employeRue, employeCP, employeVille, employeTelFixe, employeTelPortable, employeMail, employeType from employe;";
    if(query.exec(textReq))
    {
        while(query.next())
        {
            ui->tableWidgetPersonnel->insertRow(ui->tableWidgetPersonnel->rowCount());
            QLabel *labNomEmploye = new QLabel(query.value(0).toString());
            QLabel *labPrenomEmploye = new QLabel(query.value(1).toString());
            QLabel *labDateNaissEmploye = new QLabel(query.value(2).toString());
            QLabel *labRueEmploye = new QLabel(query.value(3).toString());
            QLabel *labCodePostalEmploye = new QLabel(query.value(4).toString());
            QLabel *labVilleEmploye = new QLabel(query.value(5).toString());
            QLabel *labTelFixeEmploye = new QLabel(query.value(6).toString());
            QLabel *labTelPortableEmploye = new QLabel(query.value(7).toString());
            QLabel *labAdresseMailEmploye = new QLabel(query.value(8).toString());
            QLabel *labPostesEmploye = new QLabel(query.value(9).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetEmploye;
            tabWidgetEmploye.push_back(labNomEmploye);
            tabWidgetEmploye.push_back(labPrenomEmploye);
            tabWidgetEmploye.push_back(labDateNaissEmploye);
            tabWidgetEmploye.push_back(labRueEmploye);
            tabWidgetEmploye.push_back(labCodePostalEmploye);
            tabWidgetEmploye.push_back(labVilleEmploye);
            tabWidgetEmploye.push_back(labTelFixeEmploye);
            tabWidgetEmploye.push_back(labTelPortableEmploye);
            tabWidgetEmploye.push_back(labAdresseMailEmploye);
            tabWidgetEmploye.push_back(labPostesEmploye);

            foreach(QWidget *leWidget, tabWidgetEmploye)
            {
                ui->tableWidgetPersonnel->setCellWidget(ui->tableWidgetPersonnel->rowCount()-1,i,leWidget);
                i++;
            }
        }
    }
}
