#include "dialoggestionlot.h"
#include "ui_dialoggestionlot.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogGestionLot::DialogGestionLot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionLot)
{
    ui->setupUi(this);
    chargerLesRayons();
    chargerLesTypesProduits();
    chargerLesProduits();
    chargerLesLots();
}

DialogGestionLot::~DialogGestionLot()
{
    delete ui;
}

/********************** Affichage des différentes sections ****************************/

/************************* Rayon *************************/

/**
 * @brief DialogGestionMagasin::chargerLesRayons
 * Charge les rayons depuis la BDD
 */
void DialogGestionLot::chargerLesRayons()
{
    QSqlQuery query;
    textReq="SELECT surtypeproduitLibelle from surtypeproduit;";
    if(query.exec(textReq))
    {
        while(query.next())
        {
            ui->tableWidgetRayons->insertRow(ui->tableWidgetRayons->rowCount());
            QLabel *labLibelleRayon = new QLabel(query.value(0).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetRayon;
            tabWidgetRayon.push_back(labLibelleRayon);
            foreach(QWidget *leWidget, tabWidgetRayon)
            {
                ui->tableWidgetRayons->setCellWidget(ui->tableWidgetRayons->rowCount()-1,i,leWidget);
                i++;
            }
        }
    }
}


/************************* Type Produits *************************/

/**
 * @brief DialogGestionLot::chargerLesTypesProduits
 * Charge les types de produits depuis la BDD
 */
void DialogGestionLot::chargerLesTypesProduits()
{
    textReq="SELECT typeproduitLibelle, surtypeproduitLibelle FROM typeproduit natural join surtypeproduit;";
    query.clear();
    query.exec(textReq);
    while(query.next())
    {
        ui->tableWidgetTypesProduits->insertRow(ui->tableWidgetTypesProduits->rowCount());
        QLabel *labTypesProduits = new QLabel(query.value(0).toString());
        QLabel *labTypeRayon = new QLabel(query.value(1).toString());

        int i = 0;
        QVector <QWidget*> tabWidgetType;
        tabWidgetType.push_back(labTypesProduits);
        tabWidgetType.push_back(labTypeRayon);
        foreach(QWidget *leWidget, tabWidgetType)
        {
            ui->tableWidgetTypesProduits->setCellWidget(ui->tableWidgetTypesProduits->rowCount()-1,i,leWidget);
            i++;
        }
    }
}

/************************* Produits *************************/

/**
 * @brief DialogGestionLot::chargerLesProduits
 * Charge les produits depuis la BDD
 */
void DialogGestionLot::chargerLesProduits()
{
    textReq = "SELECT prodLibelle, typeproduitLibelle FROM produit natural join typeproduit;";
    query.clear();
    query.exec(textReq);
    while(query.next())
    {
        ui->tableWidgetProduits->insertRow(ui->tableWidgetProduits->rowCount());
        QLabel *labProduit = new QLabel(query.value(0).toString());
        QLabel *labTypeProduit = new QLabel(query.value(1).toString());

        int i=0;
        QVector <QWidget*> tabWidgetProduit;
        tabWidgetProduit.push_back(labProduit);
        tabWidgetProduit.push_back(labTypeProduit);
        foreach(QWidget *leWidget, tabWidgetProduit)
        {
            ui->tableWidgetProduits->setCellWidget(ui->tableWidgetProduits->rowCount()-1,i,leWidget);
            i++;
        }
    }
}

/************************* Lots *************************/

/**
 * @brief DialogGestionLot::chargerLesLots
 * Charge les lots depuis la BDD
 */
void DialogGestionLot::chargerLesLots()
{
    //Création du tableau des lots
    textReq = "SELECT lotId, prodLibelle, typeproduitLibelle, lotProducteur, lotQuantite, uniteLibelle, lotPrix, lotModeProduction, lotDateRecolte, lotOrigine FROM lot natural join produit natural join typeproduit natural join unite";
    query.clear();
    query.exec(textReq);
    while(query.next())
    {
        ui->tableWidgetLot->insertRow(ui->tableWidgetLot->rowCount());
        QCheckBox *cbLotId = new QCheckBox(query.value(1).toString());
        cbLotId->setObjectName("cbLotId_"+query.value(0).toString());
        QLabel *labLotType = new QLabel(query.value(2).toString());
        QLabel *labLotProducteur = new QLabel(query.value(3).toString());
        QLabel *labLotQuantite = new QLabel(query.value(4).toString());
        QLabel *labLotUnite = new QLabel(query.value(5).toString());
        QLabel *labLotPrix = new QLabel(query.value(6).toString());
        QLabel *labLotModeProduction;
        if(query.value(7)==1)
        {
            labLotModeProduction = new QLabel("Bio");
        }
        else
        {
            labLotModeProduction = new QLabel("Non Bio");
        }

        QLabel *labLotDateRecolte = new QLabel(query.value(8).toString());
        QLabel *labLotOrigine = new QLabel(query.value(9).toString());

        int i = 0;
        QVector <QWidget*> tabWidgetLot;
        tabWidgetLot.push_back(cbLotId);
        tabWidgetLot.push_back(labLotType);
        tabWidgetLot.push_back(labLotProducteur);
        tabWidgetLot.push_back(labLotQuantite);
        tabWidgetLot.push_back(labLotUnite);
        tabWidgetLot.push_back(labLotPrix);
        tabWidgetLot.push_back(labLotModeProduction);
        tabWidgetLot.push_back(labLotDateRecolte);
        tabWidgetLot.push_back(labLotOrigine);
        foreach(QWidget *leWidget, tabWidgetLot)
        {
            ui->tableWidgetLot->setCellWidget(ui->tableWidgetLot->rowCount()-1,i,leWidget);
            i++;
        }
    }

        //Création du tableau des lots
        textReq = "SELECT lotId, prodLibelle, typeproduitLibelle, lotProducteur, lotQuantite, uniteLibelle, lotPrix, lotModeProduction, lotDateRecolte, lotOrigine FROM lot natural join produit natural join typeproduit natural join unite WHERE lotDateRecolte+interval lotNbJourConsommation day < now()";
        query.clear();
        query.exec(textReq);
        while(query.next())
        {
            ui->tableWidgetLotPerimes->insertRow(ui->tableWidgetLotPerimes->rowCount());
            QCheckBox *cbLotId = new QCheckBox(query.value(1).toString());
            cbLotId->setObjectName("cbLotId_"+query.value(0).toString());
            QLabel *labLotType = new QLabel(query.value(2).toString());
            QLabel *labLotProducteur = new QLabel(query.value(3).toString());
            QLabel *labLotQuantite = new QLabel(query.value(4).toString());
            QLabel *labLotUnite = new QLabel(query.value(5).toString());
            QLabel *labLotPrix = new QLabel(query.value(6).toString());
            QLabel *labLotModeProduction;
            if(query.value(7)==1)
            {
                labLotModeProduction = new QLabel("Bio");
            }
            else
            {
                labLotModeProduction = new QLabel("Non Bio");
            }

            QLabel *labLotDateRecolte = new QLabel(query.value(8).toString());
            QLabel *labLotOrigine = new QLabel(query.value(9).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetLot;
            tabWidgetLot.push_back(cbLotId);
            tabWidgetLot.push_back(labLotType);
            tabWidgetLot.push_back(labLotProducteur);
            tabWidgetLot.push_back(labLotQuantite);
            tabWidgetLot.push_back(labLotUnite);
            tabWidgetLot.push_back(labLotPrix);
            tabWidgetLot.push_back(labLotModeProduction);
            tabWidgetLot.push_back(labLotDateRecolte);
            tabWidgetLot.push_back(labLotOrigine);
            foreach(QWidget *leWidget, tabWidgetLot)
            {
                ui->tableWidgetLotPerimes->setCellWidget(ui->tableWidgetLotPerimes->rowCount()-1,i,leWidget);
                i++;
            }
        }
}

/**
 * @brief DialogGestionLot::on_pushButtonSupprLot_clicked
 * Suppresion d'un lot dans la partie "Tous les lots"
 */
void DialogGestionLot::on_pushButtonSupprLot_clicked()
{
    //Demande de validation
    if(QMessageBox::question(this,"New World Back Office","Etes vous sur de vouloir supprimer ce type de produit ?",QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        for(int i=0;i<ui->tableWidgetLot->rowCount();i++)
        {
            QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetLot->cellWidget(i,0));
            if(leCB->isChecked())
            {
                QString name = leCB->objectName();
                QString idLot = name.split("_").at(1);

                textReq = "DELETE FROM lot WHERE lotId ="+idLot;
                query.clear();
                query.exec(textReq);

                ui->tableWidgetLot->removeRow(i);
            }
        }
    }
}

/**
 * @brief DialogGestionLot::on_pushButtonSupprLotPerimer_clicked
 * Supression d'un ou plusieurs lots périmés dans la partie "Lots périmés"
 */
void DialogGestionLot::on_pushButtonSupprLotPerimer_clicked()
{
    //Demande de validation
    if(QMessageBox::question(this,"New World Back Office","Etes vous sur de vouloir supprimer ce type de produit ?",QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        for(int i=0;i<ui->tableWidgetLot->rowCount();i++)
        {
            QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetLot->cellWidget(i,0));
            if(leCB->isChecked())
            {
                QString name = leCB->objectName();
                QString idLot = name.split("_").at(1);

                textReq = "DELETE FROM lot WHERE lotId ="+idLot;
                query.clear();
                query.exec(textReq);

                ui->tableWidgetLot->removeRow(i);
            }
        }
    }
}
