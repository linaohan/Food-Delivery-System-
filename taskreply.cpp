#include "taskreply.h"
#include "ui_taskreply.h"
#include"vector"
#include"datastruct.h"
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

taskreply::taskreply(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::taskreply)
{
    ui->setupUi(this);
    //ui->tableWidget->resizeRowsToContents();
    //ui->tableWidget->resizeColumnToContents(0);
}

void taskreply::changeTest(int row,int col)
{

    int sd;
      if(ui->tableWidget ->item(row, col)->checkState() == Qt::Checked)
     {
          sd=deliverlist[predeliverid].patchorder[row];
          std::cout<<"sd1"<<sd<<"d";
          deliverlist[predeliverid].patchorder.erase(deliverlist[predeliverid].patchorder.begin()+row);
          deliverlist[predeliverid].finishorder.push_back(sd);
          std::cout<<"xuanzhong";
          orderlist[sd].status=1;
      }

 }


void taskreply::taskshow(){
    int km=0;
    km=deliverlist[0].patchorder.size();
    std::cout<<"deliversize"<<km<<"oo";

    int q;
    int lid=0;
    int much=0;

    QString mon;
    QString a1,a2;
    ui->tableWidget->setRowCount(km);
    ui->tableWidget->setColumnCount(1);


    for(q=0;q<km;q++){
       lid=deliverlist[0].patchorder[q];

       mon=QString::number(orderlist[lid].totalprice);

       much=orderlist[lid].many;

       QString allinall;
       QTableWidgetItem *firstColumn = new QTableWidgetItem();
       ui->tableWidget->setItem(q,0,firstColumn);
       for(int s=0;s<much;s++){

           a1=orderlist[lid].orderfood[s];
           a2=QString::number(orderlist[lid].ordernumber[s]);
           allinall+=a1+" * "+a2+'\n';
       }
       QString conname;
       conname=orderlist[lid].consumer;
       firstColumn->setText("Recipe:\n"+allinall+"----------------\n"+"Total price:"+mon+'\n'+"Consumer Name:  "+conname+'\n'+"---------------");
       firstColumn->setCheckState(Qt::Unchecked);//加入复选框

              }

    connect(ui->tableWidget, SIGNAL(cellChanged(int,int)), this, SLOT(changeTest(int, int)));
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->resizeColumnToContents(0);

}









taskreply::~taskreply()
{
    delete ui;
}

void taskreply::on_pushButton_clicked()
{
    this->close();
}
