#include "dialogtableaudebord.h"
#include "ui_dialogtableaudebord.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogTableauDeBord::DialogTableauDeBord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTableauDeBord)
{
    ui->setupUi(this);
    chargerLeTableauDeBord();
}

DialogTableauDeBord::~DialogTableauDeBord()
{
    delete ui;
}

/**
 * @brief DialogTableauDeBord::chargerLeTableauDeBord
 * Charge le tableau de bord
 */
void DialogTableauDeBord::chargerLeTableauDeBord()
{
    textReq="SELECT (SELECT COUNT(prodId) from produit) as totalProduit,(SELECT COUNT(typeproduitId) from typeproduit) as totalTypeProduit, (SELECT COUNT(surtypeproduitId) from surtypeproduit) as totalRayon, (SELECT COUNT(employeId) from employe) as totalEmploye, (SELECT COUNT(pointDeVenteId) from pointDeVenteBackOffice) as totalPointDeVente";
    query.clear();
    query.exec(textReq);
    while(query.next())
    {
        ui->tableWidgetTableauDeBord->insertRow(ui->tableWidgetTableauDeBord->rowCount());
        QLabel *labNombreProduit = new QLabel(query.value(0).toString());
        QLabel *labNombreTypeProduit = new QLabel(query.value(1).toString());
        QLabel *labNombreRayon = new QLabel(query.value(2).toString());
        QLabel *labNombreEmploye = new QLabel(query.value(3).toString());
        QLabel *labNomBrePointDeVente = new QLabel(query.value(4).toString());

        int i = 0;
        QVector <QWidget*> tabWidgetTableauDeBord;
        tabWidgetTableauDeBord.push_back(labNombreProduit);
        tabWidgetTableauDeBord.push_back(labNombreTypeProduit);
        tabWidgetTableauDeBord.push_back(labNombreRayon);
        tabWidgetTableauDeBord.push_back(labNombreEmploye);
        tabWidgetTableauDeBord.push_back(labNomBrePointDeVente);
        foreach(QWidget *leWidget, tabWidgetTableauDeBord)
        {
            ui->tableWidgetTableauDeBord->setCellWidget(ui->tableWidgetTableauDeBord->rowCount()-1,i,leWidget);
            i++;
        }
    }
}
