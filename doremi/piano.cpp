#include "piano.h"
#include "ui_piano.h"

piano::piano(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::piano)
{
    ui->setupUi(this);
    piano_keys= new QButtonGroup();
    piano_keys->addButton(pushButtona2,0);
    piano_keys->addButton(pushButtona2s,1);
    piano_keys->addButton(pushButtonb2,2);
    piano_keys->addButton(pushButtonc3,3);
    piano_keys->addButton(pushButtonc3s,4);
    piano_keys->addButton(pushButtond3,5);
    piano_keys->addButton(pushButtond3s,6);
    piano_keys->addButton(pushButtone3,7);
    piano_keys->addButton(pushButtonf3,8);
    piano_keys->addButton(pushButtonf3s,9);
    piano_keys->addButton(pushButtong3,10);
    piano_keys->addButton(pushButtong3s,11);
    piano_keys->addButton(pushButtona3,12);
    piano_keys->addButton(pushButtona3s,13);
    piano_keys->addButton(pushButtonb3,14);
    piano_keys->addButton(pushButtonc4,15);
    piano_keys->addButton(pushButtonc4s,16);
    piano_keys->addButton(pushButtond4,17);
    piano_keys->addButton(pushButtond4s,18);
    piano_keys->addButton(pushButtone4,19);
    piano_keys->addButton(pushButtonf4,20);
    piano_keys->addButton(pushButtonf4s,21);
    piano_keys->addButton(pushButtong4,22);
    piano_keys->addButton(pushButtong4s,23);
    piano_keys->addButton(pushButtona4,24);
    piano_keys->addButton(pushButtona4s,25);
    piano_keys->addButton(pushButtonb4,26);
    piano_keys->addButton(pushButtonc5,27);

}

piano::~piano()
{
    delete ui;
}
