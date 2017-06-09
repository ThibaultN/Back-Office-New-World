#include "dialogvuepointdevente.h"
#include "ui_dialogvuepointdevente.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogVuePointDeVente::DialogVuePointDeVente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogVuePointDeVente)
{
    ui->setupUi(this);
    chargerLesPointsDeVentes();
}

DialogVuePointDeVente::~DialogVuePointDeVente()
{
    delete ui;
}

/**
 * @brief DialogVuePointDeVente::chargerLesPointsDeVentes
 * Charge les points de ventes depuis la BDD
 */
void DialogVuePointDeVente::chargerLesPointsDeVentes()
{
    textReq="SELECT pointDeVenteLibelle, pointDeVenteActivite, pointDeVenteNomDirigeant, pointDeVentePrenomDirigeant, pointDeVenteTelephone, pointDeVenteRue, pointDeVenteCP, pointDeVenteVille from pointDeVenteBackOffice;";
    qDebug() << textReq;
    if(query.exec(textReq))
    {
        while(query.next())
        {
            ui->tableWidgetPointDeVente->insertRow(ui->tableWidgetPointDeVente->rowCount());
            QLabel *labLibellePointDeVente = new QLabel(query.value(0).toString());
            QLabel *labActivitePointDeVente = new QLabel(query.value(1).toString());
            QLabel *labNomDirigeantPointDeVente = new QLabel(query.value(2).toString());
            QLabel *labPrenomDirigeantPointDeVente = new QLabel(query.value(3).toString());
            QLabel *labTelephonePointDeVente = new QLabel(query.value(4).toString());
            QLabel *labRuePointDeVente = new QLabel(query.value(5).toString());
            QLabel *labCPPointDeVente = new QLabel(query.value(6).toString());
            QLabel *labVillePointDeVente = new QLabel(query.value(7).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetPointDeVente;
            tabWidgetPointDeVente.push_back(labLibellePointDeVente);
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
