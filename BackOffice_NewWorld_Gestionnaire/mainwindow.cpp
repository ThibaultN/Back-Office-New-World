#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoggestionmagasin.h"
#include "dialoggestionpersonnel.h"

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

void MainWindow::on_action_Quitter_triggered()
{
    this->close();
}

void MainWindow::on_pushButtonGestionMagasin_clicked()
{
    DialogGestionMagasin gestionMagasin;
    gestionMagasin.exec();
}

void MainWindow::on_pushButtonGestionPersonnel_clicked()
{
    DialogGestionPersonnel gestionPersonnel;
    gestionPersonnel.exec();
}
