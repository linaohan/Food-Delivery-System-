#ifndef TASKREPLY_H
#define TASKREPLY_H

#include <QWidget>

namespace Ui {
class taskreply;
}

class taskreply : public QWidget
{
    Q_OBJECT
    
public:
    explicit taskreply(QWidget *parent = 0);
    ~taskreply();
    void taskshow();

private slots:
   void changeTest(int row,int col);

    
   void on_pushButton_clicked();

private:
    Ui::taskreply *ui;
   \


};

#endif // TASKREPLY_H
