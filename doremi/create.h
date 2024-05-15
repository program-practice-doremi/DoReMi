#ifndef CREATE_H
#define CREATE_H

#include <QMainWindow>

namespace Ui {
class create;
}

class create : public QMainWindow
{
    Q_OBJECT

public:
    explicit create(QWidget *parent = nullptr);
    ~create();

private:
    Ui::create *ui;
};

#endif // CREATE_H
