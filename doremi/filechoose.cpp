#include "filechoose.h"
#include "ui_filechoose.h"
#include "createpage.h"
#include "songs.h"
#include <iostream>

FileChoose::FileChoose(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FileChoose)
{
    ui->setupUi(this);
    ui->lineEdit->hide();
    ui->spinBox->hide();
    ui->queren->hide();
    this->ui->fightButton->hide();
    this->ui->fireworksButton->hide();
    this->ui->oceanButton->hide();
    this->ui->twinkleButton->hide();
    this->ui->lineEdit_2->hide();
    this->ui->lineEdit_4->hide();
    this->ui->queren2->hide();
    this->ui->lineEdit_3->hide();


    QPalette pa(this->palette());
    QImage img = QImage(":/image/newstart.png");
    img = img.scaled(this->size());
    QBrush *pic = new QBrush(img);
    pa.setBrush(QPalette::Window,*pic);
    this->setPalette(pa);

}

FileChoose::~FileChoose()
{
    delete ui;
}


void FileChoose::on_create_clicked()
{
    ui->lineEdit->show();
    ui->lineEdit_3->show();
    ui->spinBox->show();
    ui->spinBox->setMaximum(9);
    ui->spinBox->setMinimum(1);
    ui->queren->show();
}

void FileChoose::on_back_clicked()
{
    this->close();
}

void FileChoose::on_queren_clicked()
{
    int channalNum = this->ui->spinBox->value();
    std::string name = this->ui->lineEdit->text().toStdString();
    Music *song = new Music(name, channalNum);
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &FileChoose::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);

}


void FileChoose::on_chooseButton_clicked()
{
    this->ui->fightButton->show();
    this->ui->fireworksButton->show();
    this->ui->oceanButton->show();
    this->ui->twinkleButton->show();
}


void FileChoose::on_twinkleButton_clicked()
{
    Music *song = new Twinkle();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &FileChoose::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void FileChoose::on_fireworksButton_clicked()
{
    Music *song = new FireWorks();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &FileChoose::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void FileChoose::on_oceanButton_clicked()
{
    Music *song = new Ocean();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &FileChoose::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void FileChoose::on_fightButton_clicked()
{
    Music *song = new FightSong();
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &FileChoose::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void FileChoose::on_queren2_clicked()
{
    std::string name;
    name = this->ui->lineEdit_2->text().toStdString();
    Music *song = new Music(0, name);
    CreatePage *c = new CreatePage();
    this->close();
    c->show();
    connect(this, &FileChoose::songcopy,c,&CreatePage::getmusic);
    emit songcopy(song);
}


void FileChoose::on_open_clicked()
{
    this->ui->lineEdit_2->show();
    this->ui->lineEdit_4->show();
    this->ui->queren2->show();
}

