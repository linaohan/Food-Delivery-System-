#include "consumercheck.h"
#include "ui_consumercheck.h"
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


consumercheck::consumercheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consumercheck)
{
    ui->setupUi(this);
}

void consumercheck::showorder(){
    int noworder=0;
    QString ssd;
    int consumerordernum=0;
    consumerordernum=consumerlist[preconsumerid].order.size();
    std::cout<<"consumerordernum"<<consumerordernum<<"ddd";

    int i=0;
    int ordernum=0;

    int t=0;
    for(i=0;i<consumerordernum;i++){
    noworder=consumerlist[preconsumerid].order[i]; //当前订单号
    if(orderlist[noworder].status==0){ //如果订单未送达

    ordernum=orderlist[noworder].many;
       ui->textEdit->append("           Order Detail:"+'\n');
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
    else {
        ordernum=orderlist[noworder].many;
           ui->textEdit_2->append("           Order Detail:"+'\n');
            ui->textEdit_2->append("          Recipes:"+'\n');
          for(t=0;t<ordernum;t++){
            ssd=QString::number(orderlist[noworder].ordernumber[t]);
            ui->textEdit_2->append(orderlist[noworder].orderfood[t]+" * "+ssd+' | ');
        }
          ui->textEdit_2->append("Receiver:"+orderlist[noworder].consumer+'\n');
          ssd=QString::number(orderlist[noworder].totalprice);
          ui->textEdit_2->append("Total price:"+ssd+'\n');
           ui->textEdit_2->append("---------------------------------------------"+'\n');

       }
}

}












consumercheck::~consumercheck()
{
    delete ui;
}

void consumercheck::on_pushButton_clicked()
{
    ui->textEdit->clear();
    ui->textEdit_2->clear();
    this->close();
}
