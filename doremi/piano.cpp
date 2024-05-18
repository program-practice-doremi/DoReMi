#include "piano.h"
#include "ui_piano.h"

piano::piano(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::piano)
{
    ui->setupUi(this);
}

piano::~piano()
{
    delete ui;
}
