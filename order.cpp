#include "order.h"
#include "ui_order.h"
#include "datastruct.h"

#include <string>
#include <sstream>
using namespace std;
extern double allmoney;
extern food food11;
extern food food12;
extern food food13;
extern food food14;
extern food food21;
extern int consumerid;

extern int preconsumerid;

extern vector<consumer> consumerlist;
extern int orderid;
extern int preorderid;

extern vector<deliver> deliverlist;
extern vector<orders>  orderlist;



order::order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::order)
{
    ui->setupUi(this);
}

order::~order()
{
    delete ui;
}




void order::initial()
{
    //载入食物分类1，chicken类


    QString dd;
    food11.food1("Hot Wings","",0,24);
    ui->food11->setText("Name："+food11.name);
    //ui->food11->append(food11.name);

    dd=QString::number(food11.money);
    //ui->food11->append(dd);
     ui->food11->append("Price："+dd);






    food12.food1("chickenlegs","",1,30);
    ui->food12->setText("Name：");
    ui->food12->append(food12.name);
    ui->food12->append("Price：");
    dd=QString::number(food12.money);
    ui->food12->append(dd);


    food13.food1("Gocups","",2,50);
    ui->food13->setText("Name：");
    ui->food13->append(food13.name);
    ui->food13->append("Price：");
    dd=QString::number(food13.money);
    ui->food13->append(dd);

    food14.food1("OriginalRecipe","",3,20);
    ui->food14->setText("Name：");
    ui->food14->append(food14.name);
    ui->food14->append("Price：");
    dd=QString::number(food14.money);
    ui->food14->append(dd);

    food21.food1("chickenlittes","",4,30);
    ui->food21->setText("Name：");
    ui->food21->append(food14.name);
    ui->food21->append("Price：");
    dd=QString::number(food14.money);
    ui->food21->append(dd);




}




void order::on_pushButton_3_clicked() //buy按钮
{
    QString i;
    double k;
    int sm=0;
    orders order1;

    i= ui->food11c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food11.name; //确定食物和订单个数
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }
    allmoney=k*food11.money;

    i=ui->food12c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food12.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }

    allmoney=allmoney+k*food12.money;
    i=ui->food13c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food13.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }


    allmoney=allmoney+k*food13.money;
    i=ui->food14c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food14.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }

    allmoney=allmoney+k*food14.money;
    i=ui->food21c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food21.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }

    allmoney=allmoney+k*food21.money;




    i=QString::number(allmoney);
   // QMessageBox::information(this,tr("hello"),i);

    order1.consumer=consumerlist[preconsumerid].name;
    preorderid=orderid;
    order1.ID=preorderid;
    order1.phone=consumerlist[preconsumerid].phonenumber;
    order1.status=0;
    order1.totalprice=allmoney;
    orderid++;
    orderlist.push_back(order1);

    this->close();


    m.showtotal();
    m.show();



}
