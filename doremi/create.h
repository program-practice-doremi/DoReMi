#ifndef CREATE_H
#define CREATE_H

#include <QMainWindow>
#include "chooseinstruments.h"

namespace Ui {
class create;
}

class create : public QMainWindow
{
    Q_OBJECT

public:
    explicit create(QWidget *parent = nullptr);
    ~create();

private slots:
    void on_addyingui_clicked();

private:
    Ui::create *ui;
};

#endif // CREATE_H
