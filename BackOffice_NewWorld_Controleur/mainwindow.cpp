#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoggestionlot.h"
#include "dialogvuepointdevente.h"
#include "dialogvuepersonnel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonGestionLot_clicked()
{
    DialogGestionLot gestionLot;
    gestionLot.exec();
}

void MainWindow::on_action_Quitter_triggered()
{
    this->close();
}

void MainWindow::on_pushButtonVuePointDeVente_clicked()
{
    DialogVuePointDeVente vuePointDeVente;
    vuePointDeVente.exec();
}

void MainWindow::on_pushButtonVuePersonnel_clicked()
{
    DialogVuePersonnel vuePersonnel;
    vuePersonnel.exec();
}
