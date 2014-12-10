#ifndef DELIVERMAINPAGE_H
#define DELIVERMAINPAGE_H

#include <QWidget>
#include "taskreply.h"
#include "delivercheck.h"

namespace Ui {
class delivermainpage;
}

class delivermainpage : public QWidget
{
    Q_OBJECT
    
public:
    explicit delivermainpage(QWidget *parent = 0);
    ~delivermainpage();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::delivermainpage *ui;
    taskreply ta;
    delivercheck de;
};

#endif // DELIVERMAINPAGE_H
