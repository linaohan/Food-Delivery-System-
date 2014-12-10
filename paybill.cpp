#include "paybill.h"
#include "ui_paybill.h"
#include "datastruct.h"
#include "widget.h"
#include "vector"
#include "ui_widget.h"
#include <string>
#include <sstream>
using namespace std;
extern double allmoney;
extern food food11;
extern food food12;
extern food food13;
extern food food14;
extern food food21;
extern int preorderid;
extern int orderid;
extern vector<orders>  orderlist;
extern int consumerid;
extern int preconsumerid;
extern vector<consumer> consumerlist;
extern int deliverid;
extern int predeliverid;
extern  vector<deliver> deliverlist;





using namespace std;
paybill::paybill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::paybill)
{
    ui->setupUi(this);
}

void paybill::showtotal()
{
    QString as;
    QString bs;
    QString cs;
    int ordernum;
    as=QString::number(allmoney);
    ui->textBrowser->setText(as);
    ordernum=orderlist[preorderid].many;

   // te=consumerlist.at(preconsumerid);
   bs=QString::number(consumerlist[preconsumerid].money);
   ui->textBrowser_2->setText(bs);
   ui->tableWidget->setRowCount(ordernum);
   ui->tableWidget->setColumnCount(2);
   for(int i=0;i<ordernum;i++){
   ui->tableWidget->setItem(i, 0, new QTableWidgetItem(orderlist[preorderid].orderfood[i]));
   cs=QString::number(orderlist[preorderid].ordernumber[i]);
   ui->tableWidget->setItem(i, 1, new QTableWidgetItem(cs));
}



  //

   //QMessageBox::information(this,tr("hello"),orderlist[preorderid].consumer);


   // QMessageBox::information(this,tr("hello"),as);

//QMessageBox::information(this,tr("hello"),orderlist[preorderid].ordernumber[0]);
}

paybill::~paybill()
{
    delete ui;
}

void paybill::on_pushButton_clicked()
{
    if(allmoney>consumerlist[preconsumerid].money){
        QMessageBox::information(this,tr("hello"),"Your account is not enough!");
        orderlist[preorderid].usability=0;
    }
    else{
        QMessageBox::information(this,tr("hello"),"Successful purchase!");
        consumerlist[preconsumerid].money=consumerlist[preconsumerid].money-allmoney;
        int preID;
        preID=orderlist[preorderid].ID;
        //std::cout<<"duoshao"<<orderlist[preorderid].ID<<"ddd";
        consumerlist[preconsumerid].order.push_back(preID);
        std::cout<<"duoshao"<<consumerlist[preconsumerid].order.size()<<"ddd";
        int patchdeliver;
        patchdeliver=0; //取随机数分配1--5个递送员
        if(deliverid>0){
        deliverlist[patchdeliver].patchorder.push_back(orderlist[preorderid].ID);
        }
        else{
            QMessageBox::information(this,tr("hello"),"No sender was initialized~");
        }







    }
}

void paybill::on_pushButton_2_clicked()
{
    this->close();


}
