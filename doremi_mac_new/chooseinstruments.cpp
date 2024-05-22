#include "chooseinstruments.h"
#include "ui_chooseinstruments.h"
#include "piano.h"

chooseinstruments::chooseinstruments(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chooseinstruments)
{
    ui->setupUi(this);
}

chooseinstruments::~chooseinstruments()
{
    delete ui;
}

void chooseinstruments::on_pushButton_clicked()
{
    this->close();
    piano *pia=new piano();
    pia->show();
}

