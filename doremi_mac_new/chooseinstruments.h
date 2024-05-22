#ifndef CHOOSEINSTRUMENTS_H
#define CHOOSEINSTRUMENTS_H

#include <QWidget>
#include"piano.h"

namespace Ui {
class chooseinstruments;
}

class chooseinstruments : public QWidget
{
    Q_OBJECT

public:
    explicit chooseinstruments(QWidget *parent = nullptr);
    ~chooseinstruments();

private slots:
    void on_pushButton_clicked();

private:
    Ui::chooseinstruments *ui;
};

#endif // CHOOSEINSTRUMENTS_H
