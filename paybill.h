#ifndef PAYBILL_H
#define PAYBILL_H



#include <QWidget>

namespace Ui {
class paybill;
}

class paybill : public QWidget
{
    Q_OBJECT
    
public:
    explicit paybill(QWidget *parent = 0);
    ~paybill();
    void showtotal();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::paybill *ui;


};

#endif // PAYBILL_H
