#include "dialoggestionpersonnel.h"
#include "ui_dialoggestionpersonnel.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogGestionPersonnel::DialogGestionPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionPersonnel)
{
    ui->setupUi(this);
    chargerLesEmployes();
    ui->pushButtonAccepterModif->setVisible(false);
    ui->pushButtonRefuserModif->setVisible(false);
}

DialogGestionPersonnel::~DialogGestionPersonnel()
{
    delete ui;
}

/**
 * @brief DialogGestionPersonnel::chargerLesEmployes
 * Charge les employes depuis la BDD
 */
void DialogGestionPersonnel::chargerLesEmployes()
{
    textReq="SELECT employeId, employeNom, employePrenom, employeDateNaiss, employeRue, employeCP, employeVille, employeTelFixe, employeTelPortable, employeMail, employeType from employe;";
    if(query.exec(textReq))
    {
        while(query.next())
        {
            ui->tableWidgetEmploye->insertRow(ui->tableWidgetEmploye->rowCount());
            QCheckBox *cbNomEmploye = new QCheckBox(query.value(0).toString());
            cbNomEmploye->setObjectName("cbEmployeId_"+query.value(0).toString());
            QLabel *labPrenomEmploye = new QLabel(query.value(1).toString());
            QLabel *labDateNaissEmploye = new QLabel(query.value(2).toString());
            QLabel *labRueEmploye = new QLabel(query.value(3).toString());
            QLabel *labCodePostalEmploye = new QLabel(query.value(4).toString());
            QLabel *labVilleEmploye = new QLabel(query.value(5).toString());
            QLabel *labTelFixeEmploye = new QLabel(query.value(6).toString());
            QLabel *labTelPortableEmploye = new QLabel(query.value(7).toString());
            QLabel *labAdresseMailEmploye = new QLabel(query.value(8).toString());
            QLabel *labPostesEmploye = new QLabel(query.value(9).toString());
            QLabel *labTest = new QLabel(query.value(10).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetEmploye;
            tabWidgetEmploye.push_back(cbNomEmploye);
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
                ui->tableWidgetEmploye->setCellWidget(ui->tableWidgetEmploye->rowCount()-1,i,leWidget);
                i++;
            }
        }
    }
}

/**
 * @brief DialogGestionPersonnel::on_pushButtonAjoutEmploye_clicked
 * Ajoute un employe dans la BDD
 */
void DialogGestionPersonnel::on_pushButtonAjoutEmploye_clicked()
{
    //Recuperation du nouvel identifiant
    textReq = "SELECT ifnull(max(employeId)+1,1) FROM employe";
    query.exec(textReq);
    query.first();

    QString idEmploye = query.value(0).toString();
    QString nomEmploye = ui->lineEditNom->text();
    QString prenomEmploye = ui->lineEditPrenom->text();
    QString dateNaissEmploye = ui->lineEditDateNaiss->text();
    QString RueEmploye = ui->lineEditRue->text();
    QString CodePostalEmploye = ui->lineEditCodePostal->text();
    QString VilleEmploye = ui->lineEditVille->text();
    QString TelFixeEmploye = ui->lineEditTelFixe->text();
    QString TelPortableEmploye = ui->lineEditTelPortable->text();
    QString AdresseMailEmploye = ui->lineEditAdresseMail->text();
    QString PostesEmploye = ui->lineEditPostes->text();

    query.clear();
    textReq = "INSERT INTO employe VALUES("+idEmploye+",'"+nomEmploye+"','"+prenomEmploye+"','"+dateNaissEmploye+"','"+RueEmploye+"','"+CodePostalEmploye+"','"+VilleEmploye+"','"+TelFixeEmploye+"','"+TelPortableEmploye+"','"+AdresseMailEmploye+"','"+PostesEmploye+"')";
    query.exec(textReq);
}

/**
 * @brief DialogGestionPersonnel::on_pushButtonSupprEmploye_clicked
 * Supprimer un employe dans la BDD
 */
void DialogGestionPersonnel::on_pushButtonSupprEmploye_clicked()
{
    //Demande de validation
    if(QMessageBox::question(this,"New World Back Office","Etes vous sur de vouloir supprimer cette employé ?",QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        for(int i=0;i<ui->tableWidgetEmploye->rowCount();i++)
        {
            QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetEmploye->cellWidget(i,0));
            if(leCB->isChecked())
            {
                QString name = leCB->objectName();
                QString idEmploye = name.split("_").at(1);

                textReq = "DELETE FROM employe WHERE employeId ="+idEmploye;
                query.clear();
                query.exec(textReq);
                ui->tableWidgetEmploye->removeRow(i);
            }
        }
    }
}

/**
 * @brief DialogGestionPersonnel::on_pushButtonModifEmploye_clicked
 */
void DialogGestionPersonnel::on_pushButtonModifEmploye_clicked()
{
    ui->pushButtonAccepterModif->setVisible(true);
    ui->pushButtonRefuserModif->setVisible(true);
    for(int i=0;i<ui->tableWidgetEmploye->rowCount();i++)
    {
        QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetEmploye->cellWidget(i,0));        
        if(leCB->isChecked())
        {
            leCB->text();
            idEmploye = leCB->text();
            qDebug() << idEmploye;
            QSqlQuery reqContact("SELECT employeNom, employePrenom, employeDateNaiss, employeRue, employeCP, employeVille, employeTelFixe, employeTelPortable, employeMail, employeType from employe where employeId = "+idEmploye+";");
            while(reqContact.next())
            {
                QString employeNom = reqContact.value(0).toString();
                QString employePrenom = reqContact.value(1).toString();
                QString employeDateNaiss = reqContact.value(2).toString();
                QString employeRue = reqContact.value(3).toString();
                QString employeCP = reqContact.value(4).toString();
                QString employeVille = reqContact.value(5).toString();
                QString employeTelFixe = reqContact.value(6).toString();
                QString employeTelPortable = reqContact.value(7).toString();
                QString employeMail = reqContact.value(8).toString();
                QString employeType = reqContact.value(9).toString();

                ui->lineEditNom->setText(employeNom);
                ui->lineEditPrenom->setText(employePrenom);
                ui->lineEditDateNaiss->setText(employeDateNaiss);
                ui->lineEditRue->setText(employeRue);
                ui->lineEditCodePostal->setText(employeCP);
                ui->lineEditVille->setText(employeVille);
                ui->lineEditTelFixe->setText(employeTelFixe);
                ui->lineEditTelPortable->setText(employeTelPortable);
                ui->lineEditAdresseMail->setText(employeMail);
                ui->lineEditPostes->setText(employeType);
            }
        }
    }
}

void DialogGestionPersonnel::on_pushButtonAccepterModif_clicked()
{
    qDebug()<<idEmploye;
    QString nomEmploye = ui->lineEditNom->text();
    QString prenomEmploye = ui->lineEditPrenom->text();
    QString dateNaissEmploye = ui->lineEditDateNaiss->text();
    QString rueEmploye = ui->lineEditRue->text();
    QString codePostalEmploye = ui->lineEditCodePostal->text();
    QString villeEmploye = ui->lineEditVille->text();
    QString telFixeEmploye = ui->lineEditTelFixe->text();
    QString telPortableEmploye = ui->lineEditTelPortable->text();
    QString adresseMailEmploye = ui->lineEditAdresseMail->text();
    QString postesEmploye = ui->lineEditPostes->text();

    textReq = "update employe set employeNom ='"+nomEmploye+"', employePrenom='"+prenomEmploye+"', employeDateNaiss='"+dateNaissEmploye+"', employeRue='"+rueEmploye+"', employeCP='"+codePostalEmploye+"', employeVille='"+villeEmploye+"', employeTelFixe='"+telFixeEmploye+"', employeTelPortable='"+telPortableEmploye+"', employeMail='"+adresseMailEmploye+"', employeType='"+postesEmploye+"' where employeId='"+idEmploye+"'";
    qDebug()<<textReq;
    query.exec(textReq);

    ui->pushButtonAccepterModif->setVisible(false);
    ui->pushButtonRefuserModif->setVisible(false);
    ui->lineEditNom->clear();
    ui->lineEditPrenom->clear();
    ui->lineEditDateNaiss->clear();
    ui->lineEditRue->clear();
    ui->lineEditCodePostal->clear();
    ui->lineEditVille->clear();
    ui->lineEditTelFixe->clear();
    ui->lineEditTelPortable->clear();
    ui->lineEditAdresseMail->clear();
    ui->lineEditPostes->clear();
}

void DialogGestionPersonnel::on_pushButtonRefuserModif_clicked()
{
    ui->pushButtonAccepterModif->setVisible(false);
    ui->pushButtonRefuserModif->setVisible(false);
    ui->lineEditNom->clear();
    ui->lineEditPrenom->clear();
    ui->lineEditDateNaiss->clear();
    ui->lineEditRue->clear();
    ui->lineEditCodePostal->clear();
    ui->lineEditVille->clear();
    ui->lineEditTelFixe->clear();
    ui->lineEditTelPortable->clear();
    ui->lineEditAdresseMail->clear();
    ui->lineEditPostes->clear();
}


