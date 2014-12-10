#ifndef PAY_H
#define PAY_H

#include <QWidget>

namespace Ui {
class pay;
}

class pay : public QWidget
{
    Q_OBJECT
    
public:
    explicit pay(QWidget *parent = 0);
    ~pay();
    void showtotal();
private:
    Ui::pay *ui;
};

#endif // PAY_H
