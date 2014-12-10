#ifndef CONSUMERBILL_H
#define CONSUMERBILL_H

#include <QWidget>

namespace Ui {
class consumerbill;
}

class consumerbill : public QWidget
{
    Q_OBJECT
    
public:
    explicit consumerbill(QWidget *parent = 0);
    ~consumerbill();
    
private:
    Ui::consumerbill *ui;
};

#endif // CONSUMERBILL_H
