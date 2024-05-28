#ifndef INSTRUMENT1_H
#define INSTRUMENT1_H

#include <QWidget>

namespace Ui {
class Instrument1;
}

class Instrument1 : public QWidget
{
    Q_OBJECT

public:
    explicit Instrument1(QWidget *parent = nullptr);
    ~Instrument1();

private:
    Ui::Instrument1 *ui;
};

#endif // INSTRUMENT1_H
