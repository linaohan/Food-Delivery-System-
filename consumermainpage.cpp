#include "consumermainpage.h"
#include "ui_consumermainpage.h"
#include "widget.h"
#include"order.h"


consumermainpage::consumermainpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consumermainpage)
{
    ui->setupUi(this);




}

consumermainpage::~consumermainpage()
{
    delete ui;
}

void consumermainpage::on_pushButton_clicked()
{
    check.showorder();
    check.show();


}

void consumermainpage::on_pushButton_2_clicked()
{

    ordera=new order;
    ordera->initial();
    ordera->show();


}

void consumermainpage::on_pushButton_4_clicked()
{
    this->close();
    Widget ww;
    ww.show();
}
