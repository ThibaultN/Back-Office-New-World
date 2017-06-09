#include "dialoggestionpointdevente.h"
#include "ui_dialoggestionpointdevente.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogGestionPointDeVente::DialogGestionPointDeVente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionPointDeVente)
{
    ui->setupUi(this);
    chargerLesPointsDeVentes();
}

DialogGestionPointDeVente::~DialogGestionPointDeVente()
{
    delete ui;
}

/**
 * @brief DialogGestionPointDeVente::chargerLesPointsDeVentes
 * Charge les points de ventes depuis la BDD
 */
void DialogGestionPointDeVente::chargerLesPointsDeVentes()
{
    textReq="SELECT pointDeVenteId, pointDeVenteLibelle, pointDeVenteActivite, pointDeVenteNomDirigeant, pointDeVentePrenomDirigeant, pointDeVenteTelephone, pointDeVenteRue, pointDeVenteCP, pointDeVenteVille from pointDeVenteBackOffice;";
    qDebug() << textReq;
    if(query.exec(textReq))
    {
        while(query.next())
        {
            ui->tableWidgetPointDeVente->insertRow(ui->tableWidgetPointDeVente->rowCount());
            QCheckBox *cbLibellePointDeVente = new QCheckBox(query.value(1).toString());
            cbLibellePointDeVente->setObjectName("cbIdPointDeVente_"+query.value(0).toString());
            QLabel *labActivitePointDeVente = new QLabel(query.value(2).toString());
            QLabel *labNomDirigeantPointDeVente = new QLabel(query.value(3).toString());
            QLabel *labPrenomDirigeantPointDeVente = new QLabel(query.value(4).toString());
            QLabel *labTelephonePointDeVente = new QLabel(query.value(5).toString());
            QLabel *labRuePointDeVente = new QLabel(query.value(6).toString());
            QLabel *labCPPointDeVente = new QLabel(query.value(7).toString());
            QLabel *labVillePointDeVente = new QLabel(query.value(8).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetPointDeVente;
            tabWidgetPointDeVente.push_back(cbLibellePointDeVente);
            tabWidgetPointDeVente.push_back(labActivitePointDeVente);
            tabWidgetPointDeVente.push_back(labNomDirigeantPointDeVente);
            tabWidgetPointDeVente.push_back(labPrenomDirigeantPointDeVente);
            tabWidgetPointDeVente.push_back(labTelephonePointDeVente);
            tabWidgetPointDeVente.push_back(labRuePointDeVente);
            tabWidgetPointDeVente.push_back(labCPPointDeVente);
            tabWidgetPointDeVente.push_back(labVillePointDeVente);

            foreach(QWidget *leWidget, tabWidgetPointDeVente)
            {
                ui->tableWidgetPointDeVente->setCellWidget(ui->tableWidgetPointDeVente->rowCount()-1,i,leWidget);
                i++;
            }
        }
    }
}

void DialogGestionPointDeVente::on_pushButtonAjoutPdv_clicked()
{
    //Recuperation du nouvel identifiant
    textReq = "SELECT ifnull(max(pointDeVenteId)+1,1) FROM pointDeVenteBackOffice";
    query.exec(textReq);
    query.first();

    QString idPointDeVente = query.value(0).toString();
    QString libellePointDeVente = ui->lineEditLibellePdv->text();
    QString activitePointDevente = ui->lineEditActivitePdv->text();
    QString nomDirigeantPointDeVente = ui->lineEditNomDirigeantPdv->text();
    QString prenomDirigeantPointDeVente = ui->lineEditPrenomDirigeatPdv->text();
    QString telephonePointDeVente = ui->lineEditTelephonePdv->text();
    QString ruePointDeVente = ui->lineEditRuePdv->text();
    QString CPPointDeVente = ui->lineEditCodePostalPdv->text();
    QString villePointDeVente = ui->lineEditVillePdv->text();

    query.clear();
    textReq = "INSERT INTO pointDeVenteBackOffice VALUES("+idPointDeVente+",'"+libellePointDeVente+"','"+activitePointDevente+"','"+nomDirigeantPointDeVente+"','"+prenomDirigeantPointDeVente+"','"+telephonePointDeVente+"','"+ruePointDeVente+"','"+CPPointDeVente+"','"+villePointDeVente+"')";
    query.exec(textReq);
    qDebug() << textReq;
}

void DialogGestionPointDeVente::on_pushButtonSupprPdv_clicked()
{
    //Demande de validation
    if(QMessageBox::question(this,"New World Back Office","Etes vous sur de vouloir supprimer cette employé ?",QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        for(int i=0;i<ui->tableWidgetPointDeVente->rowCount();i++)
        {
            QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetPointDeVente->cellWidget(i,0));
            if(leCB->isChecked())
            {
                QString name = leCB->objectName();
                QString idPointDevente = name.split("_").at(1);

                textReq = "DELETE FROM pointDeVenteBackOffice WHERE pointDeVenteId ="+idPointDevente;
                query.clear();
                query.exec(textReq);
                ui->tableWidgetPointDeVente->removeRow(i);

            }
        }
    }
}
