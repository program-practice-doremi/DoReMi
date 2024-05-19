#include "createpage.h"
#include "ui_createpage.h"
#include "mediaplayer.h"
#include "piano.h"

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
    m->PlayMusic();
}
