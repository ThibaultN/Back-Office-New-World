#ifndef DIALOGGESTIONPERSONNEL_H
#define DIALOGGESTIONPERSONNEL_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogGestionPersonnel;
}

class DialogGestionPersonnel : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionPersonnel(QWidget *parent = 0);
    ~DialogGestionPersonnel();
    void chargerLesEmployes();
    QString textReq;
    QString idEmploye;
    QSqlQuery query;
    QString tel,mail;
    
private slots:
    void on_pushButtonAjoutEmploye_clicked();

    void on_pushButtonSupprEmploye_clicked();

    void on_pushButtonModifEmploye_clicked();

    void on_pushButtonRefuserModif_clicked();

    void on_pushButtonAccepterModif_clicked();

private:
    Ui::DialogGestionPersonnel *ui;
};

#endif // DIALOGGESTIONPERSONNEL_H
