#ifndef DIALOGGESTIONMAGASIN_H
#define DIALOGGESTIONMAGASIN_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogGestionMagasin;
}

class DialogGestionMagasin : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionMagasin(QWidget *parent = 0);
    ~DialogGestionMagasin();
    void chargerLesRayons();
    void chargerLesTypesProduits();
    void chargerLesProduits();
    QString textReq;
    QSqlQuery query;
    
private slots:
    void on_lineEditAjoutRayon_textChanged(const QString &arg1);

    void on_pushButtonAjoutRayon_clicked();

    void on_pushButtonAjoutTypeProduit_clicked();

    void on_pushButtonAjoutProduit_clicked();

    void on_pushButtonSupprTypeProduit_clicked();

    void on_pushButtonSupprProduit_clicked();

    void on_lineEditAjoutTypeProduit_textChanged(const QString &arg1);

    void on_lineEditAjoutProduit_textChanged(const QString &arg1);

private:
    Ui::DialogGestionMagasin *ui;

    QVector <QString> tabRayon, tabTypeProduit;
};

#endif // DIALOGGESTIONMAGASIN_H

