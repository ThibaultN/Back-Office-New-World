#ifndef DIALOGGESTIONPOINTDEVENTE_H
#define DIALOGGESTIONPOINTDEVENTE_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogGestionPointDeVente;
}

class DialogGestionPointDeVente : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGestionPointDeVente(QWidget *parent = 0);
    ~DialogGestionPointDeVente();
    QString textReq;
    QSqlQuery query;

private slots:

    void on_pushButtonAjoutPdv_clicked();

    void on_pushButtonSupprPdv_clicked();

private:
    Ui::DialogGestionPointDeVente *ui;
    void chargerLesPointsDeVentes();
};

#endif // DIALOGGESTIONPOINTDEVENTE_H
