#ifndef DIALOGCONNECT_H
#define DIALOGCONNECT_H

#include <QDialog>

namespace Ui {
class DialogConnect;
}

class DialogConnect : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogConnect(QWidget *parent = 0);
    ~DialogConnect();
    QString getId();
    QString getMdp();
    void setMessage();
    
private slots:


private:
    Ui::DialogConnect *ui;
};

#endif // DIALOGCONNECT_H
