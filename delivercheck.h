#ifndef DELIVERCHECK_H
#define DELIVERCHECK_H

#include <QWidget>

namespace Ui {
class delivercheck;
}

class delivercheck : public QWidget
{
    Q_OBJECT
    
public:
    explicit delivercheck(QWidget *parent = 0);
    ~delivercheck();
    void showbefore();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::delivercheck *ui;
};

#endif // DELIVERCHECK_H
