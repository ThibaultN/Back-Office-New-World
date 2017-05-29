#ifndef DIALOGGESTIONMAGASIN_H
#define DIALOGGESTIONMAGASIN_H

#include <QDialog>

namespace Ui {
class DialogGestionMagasin;
}

class DialogGestionMagasin : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionMagasin(QWidget *parent = 0);
    ~DialogGestionMagasin();
    
private:
    Ui::DialogGestionMagasin *ui;
};

#endif // DIALOGGESTIONMAGASIN_H
