#include "createpage.h"
#include "ui_createpage.h"
#include "mediaplayer.h"
#include "piano.h"
#include "string.h"
#include "fileoperatingwidget.h"

CreatePage::CreatePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreatePage)
{
    ui->setupUi(this);
    piano *pianopage = new piano();
    pianopage->show();
}

CreatePage::~CreatePage()
{
    delete ui;
}

void CreatePage::getmusic(Music *song){
    sang=song;
    MediaPlayer *m = new MediaPlayer();
    m->SetMusic(sang);
    QString k(sang->name.c_str());
    ui->musicNameEdit->setText(k);
    m->PlayMusic();
}

void CreatePage::on_pushButton_clicked()
{
    FileOperatingWidget *t = new FileOperatingWidget(sang);
    t->show();
}

