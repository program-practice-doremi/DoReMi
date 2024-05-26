#include "menu.h"
#include "ui_menu.h"
#include "createpage.h"
#include "songs.h"

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->lineEdit->hide();
    ui->spinBox->hide();
    ui->queren->hide();
    this->ui->fightButton->hide();
    this->ui->fireworksButton->hide();
    this->ui->oceanButton->hide();
    this->ui->twinkleButton->hide();
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
    Music *song = new Music(name, channalNum);
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &menu::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);

}


void menu::on_chooseButton_clicked()
{
    this->ui->fightButton->show();
    this->ui->fireworksButton->show();
    this->ui->oceanButton->show();
    this->ui->twinkleButton->show();
}


void menu::on_twinkleButton_clicked()
{
    Music *song = new Twinkle();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &menu::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void menu::on_fireworksButton_clicked()
{
    Music *song = new FireWorks();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &menu::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void menu::on_oceanButton_clicked()
{
    Music *song = new Ocean();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &menu::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void menu::on_fightButton_clicked()
{
    Music *song = new FightSong();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &menu::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}

