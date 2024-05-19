#include "createpage.h"
#include "ui_createpage.h"
#include "mediaplayer.h"

CreatePage::CreatePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreatePage)
{
    ui->setupUi(this);
}

CreatePage::~CreatePage()
{
    delete ui;
}

void CreatePage::getmusic(Music *song){
    sang=song;
    MediaPlayer *m = new MediaPlayer();
    m->SetMusic(sang);
    m->PlayMusic();
}
