#ifndef DIALOGGESTIONPERSONNEL_H
#define DIALOGGESTIONPERSONNEL_H

#include <QDialog>

namespace Ui {
class DialogGestionPersonnel;
}

class DialogGestionPersonnel : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionPersonnel(QWidget *parent = 0);
    ~DialogGestionPersonnel();
    
private:
    Ui::DialogGestionPersonnel *ui;
};

#endif // DIALOGGESTIONPERSONNEL_H
