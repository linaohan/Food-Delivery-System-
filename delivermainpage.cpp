
#include "delivermainpage.h"
#include "ui_delivermainpage.h"

extern double allmoney;


delivermainpage::delivermainpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delivermainpage)
{
    ui->setupUi(this);
    //ui->deliname->setText(deliverlist[predeliverid].name);
}

delivermainpage::~delivermainpage()
{
    delete ui;
}

void delivermainpage::on_pushButton_2_clicked()
{
    ta.taskshow();
    ta.show();
}

void delivermainpage::on_pushButton_3_clicked()
{
    this->close();
}

void delivermainpage::on_pushButton_clicked()
{
    de.showbefore();
    de.show();
}
