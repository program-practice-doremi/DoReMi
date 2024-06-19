#include "mediaplayer.h"
#include "pitch.h"
#include "instruments.h"
#include <iostream>

enum Voice
{
    PA = 100000001 , // Prohibition of access , 作为一个空置的参数 , 判断用
    // R  = 1009 , // Rest  , 表示声音的延长
    // S  = 1013 , // Stop  , 表示休止符
    P  = 1019 , // Pedal , 表示踏板的踩下(或松开)
};

//声音指令，每8一格,最小为0x1f,最大0x7f,共十三档,对应数组_V[1]到_V[13]
const int _V[15]={0,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,0};

MediaPlayer::MediaPlayer(QObject *parent)
    : QObject{parent}
{
    init(); // init the map
    t = new QTimer(this);
    connect(t, &QTimer::timeout, this, &MediaPlayer::PlayNext);
    connect(this, &MediaPlayer::StopPlaying, t, &QTimer::stop);
}

void MediaPlayer::init () { // private, only used in constructor
    _mp[_REST] = PA ;
    _mp[P] = PA ;
    _mp[_STOP] = PA ;
    _mp[0] = PA ;
    _mp[ _V[1] ] = 0x1f;
    for(int i=2;i<=13;i++) _mp[ _V[i] ] = _mp[ _V[i-1] ] + 8 ;
}

void MediaPlayer::MakeSound(v_spo *note, int channalNum, int additionalStrength) {
    midiOutShortMsg (this->handle, 0x7BB0 + channalNum ) ; //midiOut短消息B类
    if (note->_v1 == _STOP) {
        //与else语句的区别是停止后就不发声,打算用于休止符
        return;
    }
    else {
        int k = note->_volume + additionalStrength;
        if (k < 1) {
            k = 1;
        }
        else if (k > 13) {
            k = 13;
        }
        int volume = _mp[_V[k]];
        //定义声音变量voice并发声
        if (note->_v1 != _REST) {
            int voice = (volume << 16) | ((note->_v1) << 8) | (0x90 + channalNum) ; //音量|音高|通道
            midiOutShortMsg ( handle, voice ) ; //midiOut短消息9类//演奏
        }
        if (note->_v2 != _REST) {
            int voice = (volume << 16) | ((note->_v2) << 8) | (0x90 + channalNum) ; //音量|音高|通道
            midiOutShortMsg ( handle, voice ) ; //midiOut短消息9类//演奏
        }
        if (note->_v3 != _REST) {
            int voice = (volume << 16) | ((note->_v3) << 8) | (0x90 + channalNum) ; //音量|音高|通道
            midiOutShortMsg ( handle, voice ) ; //midiOut短消息9类//演奏
        }
        if (note->_v4 != _REST) {
            int voice = (volume << 16) | ((note->_v4) << 8) | (0x90 + channalNum) ; //音量|音高|通道
            midiOutShortMsg ( handle, voice ) ; //midiOut短消息9类//演奏
        }
    }
}

void MediaPlayer::SetMusic(Music *m) {
    assert (m != nullptr);
    this->song = m;
}

void MediaPlayer::PlayMusic(int start)
{
    if (!this->song) {
        return;
    }
    this->currentPlaying = start;
    midiOutOpen (&handle, 0, 0, 0, CALLBACK_NULL) ; //打开MIDI设备

    for (int i = 0; i < this->song->channal_num; ++i) {
        //midiOut短消息C类 //声明乐器、通道
        midiOutShortMsg (handle, this->song->allChannals[i]->type << 8 | (0xC0 + i));
    }
    midiOutShortMsg (handle, Tinkle_Bell << 8 | (0xC0 + 15));

    this->t->start(1000 * 15 / this->song->speed);
}

void MediaPlayer::PlayNext() {
    if (currentPlaying == this->song->length) {
        emit this->StopPlaying();
        this->currentPlaying = 0;
        midiOutClose (handle) ;
        return;
    }
    emit this->sendCurrentPlaying(this->currentPlaying);
    for (int i = 0; i < this->song->channal_num; ++i)
    {
        if (!this->channal_closed[i]) {
            emit this->sendCurrentNote(i, this->song->allChannals[i]->notes[currentPlaying]);
        }
        if ((!this->channal_closed[i]) && this->song->allChannals[i]->notes[currentPlaying]->_v1 != _REST) {
            this->MakeSound(this->song->allChannals[i]->notes[currentPlaying], i, this->song->allChannals[i]->strength);
        }
    }
    if (this->metronome_playing) {
        if (currentPlaying % 16 == 0) {
            this->MakeSound(new v_spo(C5, _REST, _REST, _REST, 8), 15, metronome_additional_strength);
        }
        else if (currentPlaying % 4 == 0) {
            this->MakeSound(new v_spo(C4, _REST, _REST, _REST, 6), 15, metronome_additional_strength);
        }
    }
    this->currentPlaying += 1;
}

void MediaPlayer::setHearable(int channalNum) {
    this->channal_closed[channalNum] = false;
}

void MediaPlayer::setMute(int channalNum) {
    this->channal_closed[channalNum] = true;
}

void MediaPlayer::pause() {
    emit this->StopPlaying();
    if (this->song)
        for (int i = 0; i < song->channal_num; ++i) {
            emit this->sendCurrentNote(i, new stop_spo());
            this->MakeSound(new stop_spo(), i);
        }
}

void MediaPlayer::restart() {
    this->t->start(1000 * 15 / this->song->speed);
}

void MediaPlayer::openMetronome() {
    this->metronome_playing = true;
}

void MediaPlayer::closeMetronome() {
    this->metronome_playing = false;
}

void MediaPlayer::changeMetronomeStrength(int strength) {
    this->metronome_additional_strength = strength;
}

void MediaPlayer::changeChannelStrength(int id, int strength){
    if (id < this->song->channal_num && id >= 0)
        this->song->allChannals[id]->strength = strength;
}

void MediaPlayer::changeMusicType(int id, int type) {
    if (id < this->song->channal_num && id >= 0)
        this->song->allChannals[id]->type = type;
}

int MediaPlayer::getCurrentPlaying() {
    return this->currentPlaying;
}

void MediaPlayer::setCurrentPlaying(int po) {
    if (po >= 0 && po < this->song->length) {
        this->currentPlaying = po;
    }
}

void MediaPlayer::stop() {
    emit this->StopPlaying();
    this->currentPlaying = 0;
    midiOutClose (handle);
}

void MediaPlayer::startRecording() {
    std::cout << "recording: " << this->current_editing << std::endl;
    this->recording_mode = true;
    std::cout << "recording mode: " << recording_mode << std::endl;
}

void MediaPlayer::stopRecording() {
    this->recording_mode = false;
}

void MediaPlayer::setCurrentEditing(int channalNum) {
    this->current_editing = channalNum;
}

void MediaPlayer::receiveNote(v_spo *note) {
    if (note->_v1 != _REST) {
        this->MakeSound(note, current_editing, this->song->allChannals[current_editing]->strength);
    }
    std::cout << " is recording? " << recording_mode << std::endl;
    if (recording_mode) {
        std::cout << "note: " << note->_v1 << std::endl;
        std::cout << "add to place: " << currentPlaying << std::endl;
        this->song->addNote(current_editing, currentPlaying, note);
    }
}

void MediaPlayer::changeLength(int length) {
    this->song->changeLength(length);
}

void MediaPlayer::changeAllTune(int tune) {
    for (int i = 0; i < song->channal_num; ++i) {
        this->song->ChangeTune(i, 0, this->song->length, tune);
    }
}

void MediaPlayer::changeBPH(int speed) {
    this->song->speed = speed;
}

MediaPlayer::~MediaPlayer() {
    delete t;
}

void GameMediaPlayer::setGameChannal(int t) {
    this->GameChannal = t;
    this->setCurrentEditing(t);
}

void GameMediaPlayer::PlayNext() {
    if (this->song->allChannals[this->GameChannal]->notes[this->currentPlaying]->realNote()) {
        this->waiting = true;
        emit this->stopPlaying();
        for (int i = 0; i < this->song->channal_num; ++i)
        {
            if (!this->channal_closed[i]) {
                emit this->sendCurrentNote(i, this->song->allChannals[i]->notes[currentPlaying]);
            }
        }
    }
    else {
        MediaPlayer::PlayNext();
    }
}

void GameMediaPlayer::receiveNote(v_spo *note) {
    if (this->waiting && *note == this->song->allChannals[this->GameChannal]->notes[this->currentPlaying]) {
        std::cout << "Right!" << std::endl;
        this->restart();
    }
    else {
        std::cout << "try again." << std::endl;
    }
}
