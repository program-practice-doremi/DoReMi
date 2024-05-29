#include "piano.h"
#include "ui_piano.h"
#include "pitch.h"
#include "music.h"
#include "channal.h"
#include <map>
#include "iostream"
#include <QString>
#include <instrument1.h>

Pitch buttonidToTune[] =
    {A2, A2S, B2,
     C3, C3S, D3, D3S, E3, F3, F3S, G3, G3S, A3, A3S, B3,
     C4, C4S, D4, D4S, E4, F4, F4S, G4, G4S, A4, A4S, B4,
     C5, C5S, D5, D5S, E5, F5, F5S, G5, G5S, A5};

std::map<int, int> keyIdToButton;

QString picture_names[128] = {
    ":/image/piano.png",
    // ...
};

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
    ui->pushButtona2s->setStyleSheet("QAbstractButton {"
                     "background-color:rgb(46,50,52);" // 按钮背景
                      "border-radius: 4px;" // 按钮边框圆角半径
                     "}");
    ui->pushButtonc3s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtond3s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtonf3s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtong3s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color:rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtona3s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color:rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtonc4s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color:rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtond4s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color:rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtonf4s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color:rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtong4s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color:rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtona4s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtonc5s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtond5s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtonf5s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtong5s->setStyleSheet("QAbstractButton {"
                                     "border-radius: 4px;" // 按钮边框圆角半径
                                     "background-color: rgb(46,50,52);" // 按钮背景
                                     "}");
    ui->pushButtona2->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                     "}");
    ui->pushButtonb2->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                  "}");
    ui->pushButtonc3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtond3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtone3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtonf3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtong3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtona3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtonb3->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtonc4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtond4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtone4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtonf4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtong4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                  "}");
    ui->pushButtona4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtonb4->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtonc5->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtond5->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                   "}");
    ui->pushButtone5->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtonf5->setStyleSheet("QAbstractButton {"
                                   "background-color: white;" // 按钮背景
                                    "}");

    ui->pushButtong5->setStyleSheet("QAbstractButton {"
                                   "background-color: white;" // 按钮背景
                                    "}");
    ui->pushButtona5->setStyleSheet("QAbstractButton {"
                                    "background-color: white;" // 按钮背景
                                    "}");
    this->ui->volume_button->setRange(0, 13);
    this->ui->volume_button->setValue(7);
    this->ui->tuneEditBox->setRange(-2, 2);

}

void piano::setPicture(int type) {
    std::cout << type << std::endl;
    if(type>=0&&type<=7){
        this->ui->pushButton->setStyleSheet("#pushButton{"
            "background-image: url(:/image/instruments/0-7钢琴类.png);" // 按钮背景
            "background-position: center;"
            "}");
    }
    else if(type==8){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/8钢片琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==9){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/9钟琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==10){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/10音乐盒.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==11){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/11颤音琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==12){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/12马林巴琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==13){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/13木琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==14){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/14管钟.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==15){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/15大扬琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=16&&type<=20){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/16-20风琴类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==21||type==23){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/21，23手风琴类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==22){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/22口琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=24&&type<=31){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/24-31吉他类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=32&&type<=39){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/32-39贝司.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==40||type==44||type==45){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/40，44，45小提琴和弦乐类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==41){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/41中提琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==42||type==43){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/42，43大提琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==46){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/46竖琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==47){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/47定音鼓.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=48&&type<=51){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/48-51弦乐合奏.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=52&&type<=54){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/52-54人声类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==55){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/55管弦乐合奏.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==56||type==59){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/56，59小号.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==57){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/57长号.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==58){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/58大号.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==59){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/59圆号.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=60&&type<=62){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/60-62铜管组.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=64&&type<=67){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/64-67萨克斯.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=68&&type<=71){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/68-71管类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if((type>=72&&type<=77)||type==79){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/72-77，79笛子类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==78){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/78口哨.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=80&&type<=103){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/80-103合成类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==104){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/104西塔尔.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==105){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/105班卓琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==106){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/106三味线.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==107){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/107十三弦筝.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==108){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/108卡林巴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==109){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/109风笛.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==110){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/110民族提琴.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==111){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/111山奈.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==112){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/112叮铛铃.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==113){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/113agogo.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==114){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/114钢鼓.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==115){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/115木鱼.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type>=116&&type<=118){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/116-118鼓类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else if(type==119){
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/119铜钹.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }
    else{
        this->ui->pushButton->setStyleSheet("#pushButton{"
                                            "background-image: url(:/image/instruments/120-127音效类.png);" // 按钮背景
                                            "background-position: center;"
                                            "}");
    }

    //this->ui->widget = new Instrument1(this);
    // this->ui->widget->show();
}

void piano::change_color(int id){
    if(id==1||id==4||id==6||id==9||id==11||id==13||id==16||id==18||id==21||id==23||id==25||id==28||id==30||id==33||id==35){
        piano_keys->button(id)->setStyleSheet("QAbstractButton {"
                                      "background-color: black;" // 按钮背景
                                      "border-radius: 4px;" // 按钮边框圆角半径
                                      "}");

    }
    else{
        piano_keys->button(id)->setStyleSheet("QAbstractButton {"
                        "background-color: grey;" // 按钮背景
                        "}");
    }

}
void piano::change_color_back(int id){
    if(id==1||id==4||id==6||id==9||id==11||id==13||id==16||id==18||id==21||id==23||id==25||id==28||id==30||id==33||id==35){
        piano_keys->button(id)->setStyleSheet("QAbstractButton {"
                                              "background-color: rgb(46,50,52);" // 按钮背景
                                              "border-radius: 4px;" // 按钮边框圆角半径
                                              "}");

    }
    else{
        piano_keys->button(id)->setStyleSheet("QAbstractButton {"
                                              "background-color: white;" // 按钮背景
                                              "}");
    }

}

void piano::keyPressEvent(QKeyEvent *event) {
    if (event->isAutoRepeat()) {
        return;
    }
    int current_pressed = event->key();
    int id_button = keyIdToButton[current_pressed];
    change_color(id_button); // TODO: change color.
    v_spo *note = new v_spo(buttonidToTune[id_button], _REST, _REST, _REST, this->ui->volume_button->value());
    note->_v1 += 12 * this->ui->tuneEditBox->value();
    std::cout << note->_v1 << std::endl;
    emit newnote(note);
}

void piano::keyReleaseEvent(QKeyEvent *event) {
    int current_pressed = event->key();
    int id_button = keyIdToButton[current_pressed];
    change_color_back(id_button); // TODO: change color.
    v_spo *note = new stop_spo();     // TODO: fill up this.
    emit newnote(note);
}

void piano::setInstrumentText(QString t){
    this->ui->show_cur->setText(t);
}

void piano::recievenote(v_spo *note){
    if (note->_v1 == _REST) {
        return;
    }
    int v1 = note->_v1 - 12 * this->ui->tuneEditBox->value() - A2;
    int v2 = note->_v2 - 12 * this->ui->tuneEditBox->value() - A2;
    int v3 = note->_v3 - 12 * this->ui->tuneEditBox->value() - A2;
    int v4 = note->_v4 - 12 * this->ui->tuneEditBox->value() - A2;

    int change[37]={};
    if(v1>=0&&v1<=36){
        change[v1]=1;
    }
    if(v2>=0&&v2<=36){
        change[v2]=1;
    }
    if(v3>=0&&v3<=36){
        change[v3]=1;
    }
    if(v4>=0&&v4<=36){
        change[v4]=1;
    }
    for(int i=0;i<37;i++){
        if(change[i]){
            change_color(i);
            change[i]=0;
        }
        else{
            change_color_back(i);
        }
    }
}

piano::~piano()
{
    delete ui;
}

void piano::on_record_button_clicked()
{
    if(this->on_record==0){
        QIcon ico(":/image/recording.png");
        this->ui->record_button->setIcon(ico);
        this->on_record=1;
        emit this->startrecord();
        std::cout << "record start!" << std::endl;
    }
    else if(this->on_record==1){
        QIcon ico(":/image/record.png");
        this->ui->record_button->setIcon(ico);
        this->on_record=0;
        emit this->stoprecord();
        std::cout << "record stop!" << std::endl;
    }
}

