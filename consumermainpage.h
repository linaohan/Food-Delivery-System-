#ifndef CONSUMERMAINPAGE_H
#define CONSUMERMAINPAGE_H

#include "order.h"
#include "consumercheck.h"

using namespace std;
#include <QWidget>




namespace Ui {

class consumermainpage;
}

class consumermainpage : public QWidget
{
    Q_OBJECT
    
public:
    explicit consumermainpage(QWidget *parent = 0);
    ~consumermainpage();

    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::consumermainpage *ui;
    order *ordera;
    consumercheck check;

};

#endif // CONSUMERMAINPAGE_H
