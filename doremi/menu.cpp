#include "menu.h"
#include "ui_menu.h"
#include "createpage.h"
#include "songs.h"

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->lineEdit->close();
    ui->spinBox->close();
    ui->queren->close();
}

menu::~menu()
{
    delete ui;
}

void menu::on_create_clicked()
{
    ui->lineEdit->show();
    ui->spinBox->show();
    ui->spinBox->setMaximum(9);
    ui->spinBox->setMinimum(1);
    ui->queren->show();
}


void menu::on_back_clicked()
{   this->close();
}



void menu::on_queren_clicked()
{
    int channalNum = this->ui->spinBox->value();
    std::string name = this->ui->lineEdit->text().toStdString();
    //把名字和音轨数传进music
    // Music *song = new Music(name, channalNum);
    Music *song = new Ocean();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &menu::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);

}

