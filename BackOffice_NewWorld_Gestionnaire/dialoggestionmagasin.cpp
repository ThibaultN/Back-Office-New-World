#include "dialoggestionmagasin.h"
#include "ui_dialoggestionmagasin.h"

DialogGestionMagasin::DialogGestionMagasin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionMagasin)
{
    ui->setupUi(this);
    QString ajoutRayon=ui->lin
    if(ajoutRayon.isEmpty())
    {
        ui->pushButtonAjoutRayon->setEnabled(false);
        ui->pushButtonSupprRayon->setEnabled(false);
    }
    else
    {
        ui->pushButtonAjoutRayon->setEnabled(true);
        ui->pushButtonSupprRayon->setEnabled(true);
    }
}

DialogGestionMagasin::~DialogGestionMagasin()
{
    delete ui;
}
