#include "piano.h"
#include "ui_piano.h"
#include "pitch.h"
#include "music.h"
#include "channal.h"
#include <map>

int buttonidToTune[] =
    {A2, A2S, B2,
     C3, C3S, D3, D3S, E3, F3, F3S, G3, G3S, A3, A3S, B3,
     C4, C4S, D4, D4S, E4, F4, F4S, G4, G4S, A4, A4S, B4,
     C5, C5S, D5, D5S, E5, F5, F5S, G5, G5S, A5};

std::map<int, int> keyIdToButton;

piano::piano(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::piano)
{
    keyIdToButton[Qt::Key_Q] = 0;
    keyIdToButton[Qt::Key_2] = 1;
    keyIdToButton[Qt::Key_W] = 2;
    keyIdToButton[Qt::Key_E] = 3;
    keyIdToButton[Qt::Key_4] = 4;
    keyIdToButton[Qt::Key_R] = 5;
    keyIdToButton[Qt::Key_5] = 6;
    keyIdToButton[Qt::Key_T] = 7;
    keyIdToButton[Qt::Key_Y] = 8;
    keyIdToButton[Qt::Key_7] = 9;
    keyIdToButton[Qt::Key_U] = 10;
    keyIdToButton[Qt::Key_8] = 11;
    keyIdToButton[Qt::Key_I] = 12;
    keyIdToButton[Qt::Key_9] = 13;
    keyIdToButton[Qt::Key_O] = 14;
    keyIdToButton[Qt::Key_P] = 15;
    keyIdToButton[Qt::Key_Minus] = 16;
    keyIdToButton[Qt::Key_BracketLeft] = 17;
    keyIdToButton[Qt::Key_Equal] = 18;
    keyIdToButton[Qt::Key_Z] = 19;
    keyIdToButton[Qt::Key_X] = 20;
    keyIdToButton[Qt::Key_D] = 21;
    keyIdToButton[Qt::Key_C] = 22;
    keyIdToButton[Qt::Key_F] = 23;
    keyIdToButton[Qt::Key_V] = 24;
    keyIdToButton[Qt::Key_G] = 25;
    keyIdToButton[Qt::Key_B] = 26;
    keyIdToButton[Qt::Key_N] = 27;
    keyIdToButton[Qt::Key_J] = 28;
    keyIdToButton[Qt::Key_M] = 29;
    keyIdToButton[Qt::Key_K] = 30;
    keyIdToButton[Qt::Key_Comma] = 31;
    keyIdToButton[Qt::Key_Period] = 32;
    keyIdToButton[Qt::Key_Semicolon] = 33;
    keyIdToButton[Qt::Key_Slash] = 34;
    keyIdToButton[Qt::Key_Apostrophe] = 35;
    keyIdToButton[Qt::Key_Space] = 36;

    ui->setupUi(this);
    piano_keys= new QButtonGroup();
    piano_keys->addButton(ui->pushButtona2,0);
    piano_keys->addButton(ui->pushButtona2s,1);
    piano_keys->addButton(ui->pushButtonb2,2);
    piano_keys->addButton(ui->pushButtonc3,3);
    piano_keys->addButton(ui->pushButtonc3s,4);
    piano_keys->addButton(ui->pushButtond3,5);
    piano_keys->addButton(ui->pushButtond3s,6);
    piano_keys->addButton(ui->pushButtone3,7);
    piano_keys->addButton(ui->pushButtonf3,8);
    piano_keys->addButton(ui->pushButtonf3s,9);
    piano_keys->addButton(ui->pushButtong3,10);
    piano_keys->addButton(ui->pushButtong3s,11);
    piano_keys->addButton(ui->pushButtona3,12);
    piano_keys->addButton(ui->pushButtona3s,13);
    piano_keys->addButton(ui->pushButtonb3,14);
    piano_keys->addButton(ui->pushButtonc4,15);
    piano_keys->addButton(ui->pushButtonc4s,16);
    piano_keys->addButton(ui->pushButtond4,17);
    piano_keys->addButton(ui->pushButtond4s,18);
    piano_keys->addButton(ui->pushButtone4,19);
    piano_keys->addButton(ui->pushButtonf4,20);
    piano_keys->addButton(ui->pushButtonf4s,21);
    piano_keys->addButton(ui->pushButtong4,22);
    piano_keys->addButton(ui->pushButtong4s,23);
    piano_keys->addButton(ui->pushButtona4,24);
    piano_keys->addButton(ui->pushButtona4s,25);
    piano_keys->addButton(ui->pushButtonb4,26);
    piano_keys->addButton(ui->pushButtonc5,27);
    piano_keys->addButton(ui->pushButtonc5s,28);
    piano_keys->addButton(ui->pushButtond5,29);
    piano_keys->addButton(ui->pushButtond5s,30);
    piano_keys->addButton(ui->pushButtone5,31);
    piano_keys->addButton(ui->pushButtonf5,32);
    piano_keys->addButton(ui->pushButtonf5s,33);
    piano_keys->addButton(ui->pushButtong5,34);
    piano_keys->addButton(ui->pushButtong5s,35);
    piano_keys->addButton(ui->pushButtona5,36);
    setFocusPolicy(Qt::StrongFocus);

}

void piano::keyPressEvent(QKeyEvent *event) {
    int current_pressed = event->key();
    int id_button = keyIdToButton[current_pressed];
    piano_keys->button(id_button); // TODO: change color.
    v_spo *note = new v_spo();     // TODO: fill up this.
    // emit somenote
}

piano::~piano()
{
    delete ui;
}