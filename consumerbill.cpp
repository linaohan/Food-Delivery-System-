#include "consumerbill.h"
#include "ui_consumerbill.h"

consumerbill::consumerbill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consumerbill)
{
    ui->setupUi(this);
}

consumerbill::~consumerbill()
{
    delete ui;
}
