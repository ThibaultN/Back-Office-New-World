#include "dialoggestionpersonnel.h"
#include "ui_dialoggestionpersonnel.h"

DialogGestionPersonnel::DialogGestionPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionPersonnel)
{
    ui->setupUi(this);
}

DialogGestionPersonnel::~DialogGestionPersonnel()
{
    delete ui;
}
