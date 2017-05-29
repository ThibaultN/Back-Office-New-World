#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QSqlQuery>
#include <QVector>
#include <QApplication>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_action_Quitter_triggered();

    void on_pushButtonGestionMagasin_clicked();

    void on_pushButtonGestionPersonnel_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
