#include "instrument1.h"
#include "ui_instrument1.h"

Instrument1::Instrument1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Instrument1)
{
    ui->setupUi(this);
    /*
    QPalette pa(this->palette());
    QImage img = QImage(":/image/newstart.png");
    img = img.scaled(this->size());
    QBrush *pic = new QBrush(img);
    pa.setBrush(QPalette::Window,*pic);
    this->setPalette(pa);
*/
}

Instrument1::~Instrument1()
{
    delete ui;
}
