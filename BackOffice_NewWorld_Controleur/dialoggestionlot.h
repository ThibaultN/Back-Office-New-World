#ifndef DIALOGGESTIONLOT_H
#define DIALOGGESTIONLOT_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogGestionLot;
}

class DialogGestionLot : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGestionLot(QWidget *parent = 0);
    ~DialogGestionLot();

    void chargerLesRayons();
    void chargerLesTypesProduits();
    void chargerLesProduits();
    void chargerLesLots();

    QString textReq;
    QSqlQuery query;

private slots:
    void on_pushButtonSupprLot_clicked();

    void on_pushButtonSupprLotPerimer_clicked();

private:
    Ui::DialogGestionLot *ui;
};

#endif // DIALOGGESTIONLOT_H
