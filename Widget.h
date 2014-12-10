#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "vector"
#include "stdio.h"
#include <QMessageBox>
#include "consumermainpage.h"
#include "delivermainpage.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    consumermainpage consum;
    delivermainpage  deliver1;


};

#endif // WIDGET_H
