#ifndef DIALOGVUEPOINTDEVENTE_H
#define DIALOGVUEPOINTDEVENTE_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogVuePointDeVente;
}

class DialogVuePointDeVente : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVuePointDeVente(QWidget *parent = 0);
    ~DialogVuePointDeVente();

    QString textReq;
    QSqlQuery query;

    void chargerLesPointsDeVentes();

private:
    Ui::DialogVuePointDeVente *ui;
};

#endif // DIALOGVUEPOINTDEVENTE_H
