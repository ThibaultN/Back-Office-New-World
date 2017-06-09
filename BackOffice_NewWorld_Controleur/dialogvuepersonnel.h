#ifndef DIALOGVUEPERSONNEL_H
#define DIALOGVUEPERSONNEL_H

#include <QDialog>
#include <QSqlQuery>
#include <QVector>

namespace Ui {
class DialogVuePersonnel;
}

class DialogVuePersonnel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVuePersonnel(QWidget *parent = 0);
    ~DialogVuePersonnel();

    QString textReq;
    QSqlQuery query;

    void chargerLesEmployes();

private:
    Ui::DialogVuePersonnel *ui;
};

#endif // DIALOGVUEPERSONNEL_H
