#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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


    void on_pushButtonGestionLot_clicked();

    void on_action_Quitter_triggered();

    void on_pushButtonVuePointDeVente_clicked();

    void on_pushButtonVuePersonnel_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
