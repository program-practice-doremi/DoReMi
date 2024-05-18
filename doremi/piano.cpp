#include "piano.h"
#include "ui_piano.h"

piano::piano(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::piano)
{
    ui->setupUi(this);
    piano_keys= new QButtonGroup();
}

piano::~piano()
{
    delete ui;
}
