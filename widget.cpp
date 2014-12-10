#include "Widget.h"
#include "ui_widget.h"
#include "vector"
#include "stdio.h"
#include "datastruct.h"
#include <QString>
#include"consumermainpage.h"
#include<iostream>
#include<fstream>


using namespace std;
extern int consumerid;
extern int deliverid;

extern int predeliverid;
extern int preconsumerid;
extern  vector<deliver> deliverlist;
extern vector<consumer> consumerlist;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


}

Widget::~Widget()
{    delete ui;
}

void user::login(QString na,QString nb,int cc){


    name=na;password=nb;
    ID=cc;



}

void Widget::on_pushButton_clicked()
{
    QString na;
    QString nb;
    consumer a;
    int k=0;
    int com=0;
    int com1=0;
    int ss=0;

    na=ui->name->text();
    nb=ui->password->text();
    a.login(na,nb,consumerid);
    //QMessageBox::information(this,tr("hello"),na);
    for(k=0;k<consumerid;k++){
          //QMessageBox::information(this,tr("hello"),a.name);
         // QMessageBox::information(this,tr("hello"),consumerlist[k].name);
        com=a.name.compare(consumerlist[k].name);
        std::cout<<com;

        if(com==0){
                com1=a.password.compare(consumerlist[k].password);
            if(com1==0){
            preconsumerid=k;break;
        }
            else{
                QMessageBox::information(this,tr("hello"),"Password is Wrong!");ss=1;           }
        }
}

    if(k==consumerid&&ss==0){

    a.money=400;
    consumerlist.push_back(a);
    preconsumerid=consumerid;
    std::cout<<"a"<<preconsumerid<<"b";
    std::cout<<"a"<<consumerid<<"b";
    consumerid++;
    ui->name->clear();
    ui->password->clear();
    consum.show();

}
    if(ss==1){ui->name->clear();
        ui->password->clear();}
    if(k<consumerid&&ss==0){
        ui->name->clear();
        ui->password->clear();
        consum.show();
    }
    std::cout<<preconsumerid;

}


void Widget::on_pushButton_2_clicked()
{
    QString na;
    QString nb;

    int ks=0;
    int del=0;
    int del1=0;
    int mm=0;
    deliver a;
    na=ui->name->text();
    nb=ui->password->text();
    a.login(na,nb,deliverid);
    //QMessageBox::information(this,tr("hello"),na);
    for(ks=0;ks<deliverid;ks++){
          //QMessageBox::information(this,tr("hello"),a.name);
         // QMessageBox::information(this,tr("hello"),consumerlist[k].name);
        del=a.name.compare(deliverlist[ks].name);


        if(del==0){
                del1=a.password.compare(deliverlist[ks].password);
            if(del1==0){
            predeliverid=ks;break;
        }
            else{
                QMessageBox::information(this,tr("hello"),"Password is Wrong!");mm=1;           }
        }
}

    if(ks==deliverid&&mm==0){


    deliverlist.push_back(a);
    predeliverid=deliverid;
    deliverid++;
    ui->name->clear();
    ui->password->clear();
    deliver1.show();

}
    if(mm==1){ui->name->clear();
        ui->password->clear();}
    if(ks<deliverid&&mm==0){
        ui->name->clear();
        ui->password->clear();
        deliver1.show();
    }


}
