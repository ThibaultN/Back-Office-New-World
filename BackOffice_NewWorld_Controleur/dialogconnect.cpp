#include "dialogconnect.h"
#include "ui_dialogconnect.h"
#include "mainwindow.h"

DialogConnect::DialogConnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnect)
{
    ui->setupUi(this);
}

DialogConnect::~DialogConnect()
{
    delete ui;
}

QString DialogConnect::getId()
{
    return ui->lineEditNomDeCompte->text();
}

QString DialogConnect::getMdp()
{
    return ui->lineEditMotDePasse->text();
}

void DialogConnect::setMessage()
{
    ui->labelErreurConnect->setText("Erreurs dans vos identifiants");
}
