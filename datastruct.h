#ifndef DATASTRUCT_H
#define DATASTRUCT_H
#include <vector>
#include "stdio.h"
#include "QFile"
#include "QDebug"
#include "iostream"
#include "fstream"

//以下定义用户的数据结构
using namespace std;
class user
{
public:
    QString name;
    int ID;
    QString image;//存用户名的头像路径
    QString password;

    user();
    void login(QString a,QString b,int cc);
    void logoff();
};


class consumer:public user
{
public:
    double money;   //用户账户存款
    int phonenumber;

    vector<int> order;// 订单情况 存储的是订单号

    consumer();
    void shoppingselect(); //选择想要的食物类别
    void shoppingbag();//选择需要的食物进入购物篮
    void shoppingnumber();// 确定每个需要食物的数量
    void pay(); //付款
    void creatorder();//生成菜单
    void copyconsumer(consumer &a,consumer&b);
 };


class deliver:public user
{
public:
    int grade;   //该快递员评分等级，共分为5等，按照成功的订单书评定
    vector<int> patchorder; //被分到的订单ID号
    vector<int> finishorder;


public:
    deliver();
    void checktask();//查看为完成的订单
    void checkwork();//查看所有已经完成的订单，输出，包括订单的成功的总个数和总金额
    void taskreport();//标记已经完成的订单
 };




//以下定义物品的数据结构
class food
{
public:
    QString name;  //食物名称
    QString image;
    int ID; //食物的索引号
    double money; //食物价格

    food();
    void food1(QString a,QString b,int i,double m);
};
//定义配送信息数据结构


class orders
{
public:
    int          ID; //本订单订单号
    int          status;//是否送达 未送达为0，送达为1
    int          usability; //是否有用，若因为钱不够作废，为0
    double       totalprice;
    vector<QString>orderfood;  //已经预订的食物
    vector<double>ordernumber;   //预定食物的量
    QString      consumer;
    int          many;    //判断有几种食物
    QString      phone;
    QString      detail;     //例如 hamburger*1&cake*2

    orders();                  //构造函数
    void iddispatch();
};

//以下为各个类型食物和用户赋初值








#endif // DATASTRUCT_H
