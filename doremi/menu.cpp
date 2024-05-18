#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_create_clicked()
{

}


void menu::on_back_clicked()
{
    this->close();
    MainWindow *pict=new MainWindow();
    pict->show();
}

