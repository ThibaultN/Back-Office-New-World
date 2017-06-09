#ifndef DIALOGTABLEAUDEBORD_H
#define DIALOGTABLEAUDEBORD_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogTableauDeBord;
}

class DialogTableauDeBord : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTableauDeBord(QWidget *parent = 0);
    ~DialogTableauDeBord();
    void chargerLeTableauDeBord();
    QString textReq;
    QSqlQuery query;

private:
    Ui::DialogTableauDeBord *ui;
};

#endif // DIALOGTABLEAUDEBORD_H
