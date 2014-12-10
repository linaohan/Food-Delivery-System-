#include "delivercheck.h"
#include "ui_delivercheck.h"
#include"datastruct.h"
#include <string>
#include <sstream>
using namespace std;
extern double allmoney;

extern int preorderid;
extern int orderid;
extern vector<orders>  orderlist;
extern int consumerid;
extern int preconsumerid;
extern vector<consumer> consumerlist;
extern int deliverid;
extern int predeliverid;
extern  vector<deliver> deliverlist;


delivercheck::delivercheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delivercheck)
{
    ui->setupUi(this);
}

void delivercheck::showbefore(){
    int noworder=0;
    QString ssd;
    int deliverordernum=0;
    deliverordernum=deliverlist[predeliverid].finishorder.size();
    //std::cout<<"consumerordernum"<<consumerordernum<<"ddd";

    int i=0;
    int ordernum=0;

    int t=0;
    for(i=0;i< deliverordernum;i++){
    noworder=deliverlist[predeliverid].finishorder[i]; //当前订单号
    if(1){ //如果订单未送达

    ordernum=orderlist[noworder].many;
       ui->textEdit->append("          Order Detail:"+'\n');
        ui->textEdit->append("          Recipes:"+'\n');
      for(t=0;t<ordernum;t++){
        ssd=QString::number(orderlist[noworder].ordernumber[t]);
        ui->textEdit->append(orderlist[noworder].orderfood[t]+" * "+ssd+' | ');
    }
      ui->textEdit->append("Receiver:"+orderlist[noworder].consumer+'\n');
      ssd=QString::number(orderlist[noworder].totalprice);
      ui->textEdit->append("Total price:"+ssd+'\n');
       ui->textEdit->append("---------------------------------------------"+'\n');

   }
    }






}





delivercheck::~delivercheck()
{
    delete ui;
}

void delivercheck::on_pushButton_clicked()
{
    this->close();
}
