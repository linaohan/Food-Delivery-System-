#include "vector"
#include "QFile"
#include "QDebug"
#include "iostream"
#include "fstream"
#include"datastruct.h"


user::user()
{
    name="\0";
    ID=0;
    image="\0";//存用户名的头像路径
    password="\0";
}

consumer::consumer()
{
    money=0;
    phonenumber=0;


}
void consumer::copyconsumer(consumer &a,consumer&b){
    b.ID=a.ID;
    b.image=a.image;
    b.money=a.money;
    b.name=a.name;
    b.order=b.order;
}

deliver::deliver()
{
    grade=0;

}

food::food()
{
    name="\0";
    image="\0";
    ID=0;
    money=0;
}


orders::orders()
{
    ID=0;
    usability=1;
    consumer="\0";
    orderfood.resize(20);
    ordernumber.resize(20);
    phone="\0";
    totalprice=0;
    detail="\0";
    many=0;
    status=0;

}
void food::food1(QString a, QString b, int i, double m)
{
  name=a;
  image=b;
   ID=i;
   money=m;

}

