#include "dialoggestionmagasin.h"
#include "ui_dialoggestionmagasin.h"
#include <QCheckBox>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTextCodec>
#include <QLabel>
#include <QMessageBox>

DialogGestionMagasin::DialogGestionMagasin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionMagasin)
{
    ui->setupUi(this);

    // Button rayon
    ui->pushButtonAjoutRayon->setEnabled(false);

    // Button type produits
    ui->pushButtonAjoutTypeProduit->setEnabled(false);

    // Button produit
    ui->pushButtonAjoutProduit->setEnabled(false);

    //Chargement des tables
    chargerLesRayons();
    chargerLesTypesProduits();
    chargerLesProduits();
}


/**
 * @brief DialogGestionMagasin::~DialogGestionMagasin
 */
DialogGestionMagasin::~DialogGestionMagasin()
{
    delete ui;
}

/********************** Changement en true des boutons lors de la saisie ****************************/

/**
 * @brief DialogGestionMagasin::on_lineEditAjoutRayon_textChanged
 * @param arg1
 * Deverouille le champs lors de l'ecriture dans le champ
 */
void DialogGestionMagasin::on_lineEditAjoutRayon_textChanged(const QString &arg1)
{
    ui->pushButtonAjoutRayon->setEnabled(true);
}

/**
 * @brief DialogGestionMagasin::on_lineEditAjoutTypeProduit_textChanged
 * @param arg1
 * Deverouille le champs lors de l'ecriture dans le champ
 */
void DialogGestionMagasin::on_lineEditAjoutTypeProduit_textChanged(const QString &arg1)
{
   ui->pushButtonAjoutTypeProduit->setEnabled(true);
}

/**
 * @brief DialogGestionMagasin::on_lineEditAjoutProduit_textChanged
 * @param arg1
 * Deverouille le champs lors de l'ecriture dans le champ
 */
void DialogGestionMagasin::on_lineEditAjoutProduit_textChanged(const QString &arg1)
{
    ui->pushButtonAjoutProduit->setEnabled(true);
}

/********************** Affichage des différentes sections ****************************/

/************************* Rayon *************************/

/**
 * @brief DialogGestionMagasin::chargerLesRayons
 * Charge les rayons depuis la BDD
 */
void DialogGestionMagasin::chargerLesRayons()
{
    QSqlQuery query;
    textReq="SELECT surtypeProduitId, surtypeproduitLibelle from surtypeproduit;";
    if(query.exec(textReq))
    {
        while(query.next())
        {
            ui->tableWidgetRayon->insertRow(ui->tableWidgetRayon->rowCount());
            QCheckBox *cbRayonId = new QCheckBox(query.value(1).toString());
            cbRayonId->setObjectName("cbRayonId_"+query.value(0).toString());

            int i = 0;
            QVector <QWidget*> tabWidgetRayon;
            tabWidgetRayon.push_back(cbRayonId);
            foreach(QWidget *leWidget, tabWidgetRayon)
            {
                ui->tableWidgetRayon->setCellWidget(ui->tableWidgetRayon->rowCount()-1,i,leWidget);
                i++;
            }
        }
    }
}


/************************* Type Produits *************************/

/**
 * @brief DialogGestionMagasin::chargerLesTypesProduits
 * Charge les types de produits depuis la BDD
 */
void DialogGestionMagasin::chargerLesTypesProduits()
{
    textReq="SELECT typeproduitId, typeproduitLibelle, surtypeproduitLibelle FROM typeproduit natural join surtypeproduit;";
    query.clear();
    query.exec(textReq);
    while(query.next())
    {
        ui->tableWidgetTypeProduit->insertRow(ui->tableWidgetTypeProduit->rowCount());
        QCheckBox *cbTypeId = new QCheckBox(query.value(1).toString());
        cbTypeId->setObjectName("cbTypeId_"+query.value(0).toString());
        QLabel *labTypeRayon = new QLabel(query.value(2).toString());

        int i = 0;
        QVector <QWidget*> tabWidgetType;
        tabWidgetType.push_back(cbTypeId);
        tabWidgetType.push_back(labTypeRayon);
        foreach(QWidget *leWidget, tabWidgetType)
        {
            ui->tableWidgetTypeProduit->setCellWidget(ui->tableWidgetTypeProduit->rowCount()-1,i,leWidget);
            i++;
        }
    }

    //Remplissage de la combobox

    tabRayon.clear();
    ui->comboBoxTypeRayon->clear();

    query.clear();
    query.prepare("SELECT surtypeproduitId, surtypeproduitLibelle FROM surtypeproduit");
    query.exec();
    while(query.next())
    {
        tabRayon.push_back(query.value(0).toString()+","+query.value(1).toString());
    }

    for(int row=0;row<tabRayon.size();row++)
    {
        QStringList sl = tabRayon.at(row).split(",");
        QString identifiant = sl.at(0);
        QString libelle = sl.at(1);

        ui->comboBoxTypeRayon->addItem(libelle,identifiant);
    }

}

/************************* Produits *************************/

/**
 * @brief DialogGestionMagasin::chargerLesProduits
 * Charge les produits de la BDD
 */
void DialogGestionMagasin::chargerLesProduits()
{
    textReq = "SELECT prodId, prodLibelle, typeproduitLibelle FROM produit natural join typeproduit;";
    query.clear();
    query.exec(textReq);
    while(query.next())
    {
        ui->tableWidgetProduit->insertRow(ui->tableWidgetProduit->rowCount());
        QCheckBox *cbProduitId = new QCheckBox(query.value(1).toString());
        cbProduitId->setObjectName("cbProduitId_"+query.value(0).toString());
        QLabel *labTypeProduit = new QLabel(query.value(2).toString());

        int i=0;
        QVector <QWidget*> tabWidgetProduit;
        tabWidgetProduit.push_back(cbProduitId);
        tabWidgetProduit.push_back(labTypeProduit);
        foreach(QWidget *leWidget, tabWidgetProduit)
        {
            ui->tableWidgetProduit->setCellWidget(ui->tableWidgetProduit->rowCount()-1,i,leWidget);
            i++;
        }
    }

    //Remplissage de la combobox
    tabTypeProduit.clear();
    ui->comboBoxChoixTypeProduit->clear();

    query.clear();
    query.prepare("SELECT typeproduitId, typeproduitLibelle from typeproduit");
    query.exec();
    while(query.next())
    {
        tabTypeProduit.push_back(query.value(0).toString()+","+query.value(1).toString());
    }

    for(int row=0;row<tabTypeProduit.size();row++)
    {
        QStringList sl = tabTypeProduit.at(row).split(",");
        QString identifiant = sl.at(0);
        QString libelle = sl.at(1);

        ui->comboBoxChoixTypeProduit->addItem(libelle,identifiant);
    }
}

/********************** Ajout pour les différentes sections ****************************/

/************************* Rayon *************************/

/**
 * @brief DialogGestionMagasin::on_pushButtonAjoutRayon_clicked
 * Ajout d'un rayon dans la BDD
 */
void DialogGestionMagasin::on_pushButtonAjoutRayon_clicked()
{
    if(!(ui->lineEditAjoutRayon->text().isEmpty()))
    {
        //Recuperation du nouvel identifiant
        textReq = "SELECT ifnull(max(surtypeproduitId)+1,1) FROM surtypeproduit";
        query.exec(textReq);
        query.first();

        QString idRayon = query.value(0).toString();
        QString nomRayon = ui->lineEditAjoutRayon->text();

        query.clear();
        textReq = "INSERT INTO surtypeproduit VALUES("+idRayon+",'"+nomRayon+"')";
        qDebug() << textReq;
        query.exec(textReq);

        //Si le rayon est nouveau
        if(query.numRowsAffected()==1)
        {
            //Ajout du rayon dans le tableau
            QCheckBox *leCB = new QCheckBox(nomRayon);
            leCB->setObjectName("cbRayonId_"+query.value(0).toString());

            ui->tableWidgetRayon->insertRow(ui->tableWidgetRayon->rowCount());
            ui->tableWidgetRayon->setCellWidget(ui->tableWidgetRayon->rowCount()-1,0,leCB);
            chargerLesRayons();
            ui->lineEditAjoutRayon->clear();
        }
        else
        {
            QMessageBox::warning(this,"New World Back Office","Ce rayon existe déjà, veuillez en saisir un autre",QMessageBox::Ok);
        }
    }
}

/************************* Types Produits *************************/

/**
 * @brief DialogGestionMagasin::on_pushButtonAjoutTypeProduit_clicked
 * Ajout d'un type de produit dans la BDD
 */
void DialogGestionMagasin::on_pushButtonAjoutTypeProduit_clicked()
{
    if(!(ui->lineEditAjoutTypeProduit->text().isEmpty()))
    {
        //Recuperation du nouvel identifiant
        textReq = "SELECT ifnull(max(typeproduitId)+1,1) FROM typeproduit";
        query.exec(textReq);
        query.first();

        QString idType = query.value(0).toString();
        QString idRayon = ui->comboBoxTypeRayon->itemData(ui->comboBoxTypeRayon->currentIndex()).toString();
        QString nomType = ui->lineEditAjoutTypeProduit->text();

        query.clear();
        textReq = "INSERT INTO typeproduit VALUES("+idType+",'"+nomType+"','"+idRayon+"');";
        qDebug() << textReq;
        query.exec(textReq);

        query.clear();
        textReq = "SELECT surtypeproduitLibelle from surtypeproduit WHERE surtypeproduitId = "+idRayon;
        qDebug() << textReq;
        query.exec(textReq);
        query.first();

        QString rayonLibelle = query.value(0).toString();
        QLabel *labrayon = new QLabel(rayonLibelle);

        //Si le rayon est nouveau
        if(query.numRowsAffected()==1)
        {
            //Ajout du rayon dans le tableau
            QCheckBox *leCB = new QCheckBox(nomType);
            leCB->setObjectName("cbTypeId_"+query.value(0).toString());

            ui->tableWidgetTypeProduit->insertRow(ui->tableWidgetTypeProduit->rowCount());
            ui->tableWidgetTypeProduit->setCellWidget(ui->tableWidgetTypeProduit->rowCount()-1,0,leCB);
            ui->tableWidgetTypeProduit->setCellWidget(ui->tableWidgetTypeProduit->rowCount()-1,1,labrayon);
            ui->lineEditAjoutTypeProduit->clear();
            chargerLesTypesProduits();
        }
        else
        {
            QMessageBox::warning(this, "New World Back Office", "Ce type de produits existe déjà, veuillez en saisir un autre",QMessageBox::Ok);
        }
    }
}

/************************* Produits *************************/

/**
 * @brief DialogGestionMagasin::on_pushButtonAjoutProduit_clicked
 * Ajout d'un produit dans la BDD
 */
void DialogGestionMagasin::on_pushButtonAjoutProduit_clicked()
{
    if(!(ui->lineEditAjoutProduit->text().isEmpty()))
    {
        textReq = "SELECT ifnull(max(prodId)+1,1) FROM produit";
        query.exec(textReq);
        query.first();

        QString idProduit = query.value(0).toString();
        QString idType = ui->comboBoxChoixTypeProduit->itemData(ui->comboBoxChoixTypeProduit->currentIndex()).toString();
        QString nomProduit = ui->lineEditAjoutProduit->text();

        query.clear();
        textReq = "INSERT INTO produit VALUES("+idProduit+",'"+nomProduit+"',"+idType+",'""')";
        qDebug() << textReq;
        query.exec(textReq);

        query.clear();
        textReq = "SELECT typeproduitLibelle FROM typeproduit where typeproduitId = "+idType;
        query.exec(textReq);
        query.first();

        QString typeLibelle = query.value(0).toString();
        QLabel *labType= new QLabel(typeLibelle);

        //Si le produit est nouveau
        if(query.numRowsAffected()==1)
        {
            //Ajout du produit dans le tableau
            QCheckBox *leCB = new QCheckBox(nomProduit);
            leCB->setObjectName("cbProduitId_"+query.value(0).toString());

            ui->tableWidgetProduit->insertRow(ui->tableWidgetProduit->rowCount());
            ui->tableWidgetProduit->setCellWidget(ui->tableWidgetProduit->rowCount()-1,0,leCB);
            ui->tableWidgetProduit->setCellWidget(ui->tableWidgetProduit->rowCount()-1,1,labType);
            chargerLesProduits();
            ui->lineEditAjoutProduit->clear();
        }
        else
        {
            QMessageBox::warning(this,"New World Back Office","Ce produit existe déjà. Veuillez en saisir un nouveau.",QMessageBox::Ok);
        }
    }
}

/********************** Suppresion pour les différentes sections ****************************/

/************************* Types Produits *************************/

/**
 * @brief DialogGestionMagasin::on_pushButtonSupprTypeProduit_clicked
 * Supprimer un type de produits dans la BDD
 */
void DialogGestionMagasin::on_pushButtonSupprTypeProduit_clicked()
{
    //Demande de validation
    if(QMessageBox::question(this,"New World Back Office","Etes vous sur de vouloir supprimer ce type de produit ?",QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        for(int i=0;i<ui->tableWidgetTypeProduit->rowCount();i++)
        {
            QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetTypeProduit->cellWidget(i,0));
            if(leCB->isChecked())
            {
                QString name = leCB->objectName();
                QString idType = name.split("_").at(1);

                textReq = "DELETE FROM produit WHERE typeproduitId ="+idType;
                query.clear();
                query.exec(textReq);

                ui->tableWidgetTypeProduit->removeRow(i);
                textReq = "DELETE FROM typeproduit WHERE typeproduitId ="+idType;
                query.exec(textReq);
            }
        }
    }
}

/**
 * @brief DialogGestionMagasin::on_pushButtonSupprProduit_clicked
 * Supprimer un produit dans la BDD
 */
void DialogGestionMagasin::on_pushButtonSupprProduit_clicked()
{
    if(QMessageBox::question(this,"New World Back Office","Etes vous sur de vouloir supprimer ce produit ?",QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        for (int i=0; i<ui->tableWidgetProduit->rowCount(); i++)
        {
            QCheckBox *leCB = qobject_cast<QCheckBox*>(ui->tableWidgetProduit->cellWidget(i,0));
            if(leCB->isChecked())
            {
                QString name = leCB->objectName();
                QString idProduit = name.split("_").at(1);

                ui->tableWidgetProduit->removeRow(i);
                textReq = "DELETE FROM produit where prodId = "+idProduit;
                query.exec(textReq);
            }
        }
    }
}
