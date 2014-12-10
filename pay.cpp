#include "pay.h"
#include "ui_pay.h"
#include "datastruct.h"
#include "widget.h"
#include "ui_widget.h"
#include <string>
#include <sstream>
extern double allmoney;
extern food food11;
extern food food12;
extern food food13;
extern food food14;
extern food food15;
extern food food16;


pay::pay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pay)
{


}
void pay::showtotal()
{
    QString as;
    as=QString::number(allmoney);
   // QMessageBox::information(this,tr("hello"),as);
    //ui->textBrowser->setText(as);

}

pay::~pay()
{
    delete ui;
}




