#include "channeledit.h"
#include "ui_channeledit.h"
#include "instruments.h"
#include <iostream>
#include "piano.h"


std::string intToInstrument[128] = {
    "Acoustic_Grand_Piano",
    "Bright_Acoustic_Piano",
    "Electric_Grand_Piano",
    "Honky_tonk_Piano",
    "Electric_Piano_1",
    "Electric_Piano_2",
    "Harpsichord",
    "Clavi",
    "Celesta",
    "Glockenspiel",
    "Music_Box",
    "Vibraphone",
    "Marimba",
    "Xylophone",
    "Tubular_Bells",
    "Dulcimer",
    "Drawbar_Organ",
    "Percussive_Organ",
    "Rock_Organ",
    "Church_Organ",
    "Reed_Organ",
    "Accordion",
    "Harmonica",
    "Tango_Accordion",
    "Acoustic_Guitar_nylon",
    "Acoustic_Guitar_steel",
    "Electric_Guitar_jazz",
    "Electric_Guitar_clean",
    "Electric_Guitar_muted",
    "Overdriven_Guitar",
    "Distortion_Guitar",
    "Guitar_harmonics",
    "Acoustic_Bass",
    "Electric_Bass_finger",
    "Electric_Bass_pick",
    "Fretless_Bass",
    "Slap_Bass_1",
    "Slap_Bass_2",
    "Synth_Bass_1",
    "Synth_Bass_2",
    "Violin" ,
    "Viola" ,
    "Cello" ,
    "Contrabass",
    "Tremolo_Strings",
    "Pizzicato_Strings",
    "Orchestral_Harp",
    "Timpani",
    "String_Ensemble_1",
    "String_Ensemble_2",
    "SynthStrings_1",
    "SynthStrings_2",
    "Choir_Aahs",
    "Voice_Oohs",
    "Synth_Voice",
    "Orchestra_Hit",
    "Trumpet",
    "Trombone",
    "Tuba",
    "Muted_Trumpet",
    "French_Horn",
    "Brass_Section",
    "SynthBrass_1",
    "SynthBrass_2",
    "Soprano_Sax",
    "Alto_Sax",
    "Tenor_Sax",
    "Baritone_Sax",
    "Oboe",
    "English_Horn",
    "Bassoon",
    "Clarinet",
    "Piccolo",
    "Flute",
    "Recorder",
    "Pan_Flute",
    "Blown_Bottle",
    "Shakuhachi",
    "Whistle" ,
    "Ocarina",
    "Lead_1_square",
    "Lead_2_sawtooth",
    "Lead_3_calliope",
    "Lead_4_chiff",
    "Lead_5_charang",
    "Lead_6_voice",
    "Lead_7_fifths",
    "Lead_8_bass_lead",
    "Pad_1_new age",
    "Pad_2_warm",
    "Pad_3_polysynth",
    "Pad_4_choir",
    "Pad_5_bowed",
    "Pad_6_metallic",
    "Pad_7_halo" ,
    "Pad_8_sweep ",
    "FX_1_rain",
    "FX_2_soundtrack",
    "FX_3_crystal",
    "FX_4_atmosphere",
    "FX_5_brightness",
    "FX_6_goblins",
    "FX_7_echoes",
    "FX_8_sci_fi",
    "Sitar",
    "Banjo" ,
    "Shamisen",
    "Koto",
    "Kalimba",
    "Bag_pipe" ,
    "Fiddle",
    "Shanai" ,
    "Tinkle_Bell",
    "Agogo",
    "Steel_Drums" ,
    "Woodblock",
    "Taiko_Drum",
    "Melodic_Tom",
    "Synth_Drum" ,
    "Reverse_Cymbal",
    "Guitar_Fret_Noise",
    "Breath_Noise",
    "Seashore",
    "Bird_Tweet" ,
    "Telephone_Ring",
    "Helicopter",
    "Applause",
    "Gunshot",
};


ChannelEdit::ChannelEdit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChannelEdit)
{
    ui->setupUi(this);
    this->ui->spinBox->setMaximum(127);
    this->ui->spinBox->setMinimum(0);
    this->ui->lineEdit->setReadOnly(true);
    this->ui->lineEdit->setText("Acoustic_Grand_Piano");
    this->ui->horizontalSlider->setMaximum(5);
    this->ui->horizontalSlider->setMinimum(-5);
    this->ui->horizontalSlider->setValue(0);
}

void ChannelEdit::set_id(int _id) {
    this->id = _id;
    this->ui->lcdNumber->display(id);
}

void ChannelEdit::setStrength(int strength) {
    this->ui->horizontalSlider->setValue(strength);
}

void ChannelEdit::setMusicType(int type) {
    this->ui->spinBox->setValue(type);
    // TODO: change text edit
}

ChannelEdit::~ChannelEdit()
{
    delete ui;
}

void ChannelEdit::on_horizontalSlider_valueChanged(int value)
{
    emit this->ChangeChannelStrength(id, value);
}

void ChannelEdit::on_spinBox_valueChanged(int arg1)
{
    emit this->ChangeMusicType(id, arg1);
    QString k(intToInstrument[arg1].c_str());
    this->ui->lineEdit->setText(k);
}

void ChannelEdit::transform_note(v_spo *note) {
    emit this->DeliverNote(note);
}

void ChannelEdit::on_createButton_clicked()
{
    piano *new_piano = new piano();
    new_piano->show();
    connect(new_piano, &piano::newnote, this, &ChannelEdit::transform_note);
    connect(this,&ChannelEdit::SendBackNote,new_piano,&piano::recievenote);
    emit CurrentEditing(id);
    new_piano->setInstrumentText(this->ui->lineEdit->text());
}


void ChannelEdit::on_pushButton_clicked()
{
    if (this->channal_silence) {
        this->channal_silence = false;
        emit this->SetHearable(id);
    }
    else {
        this->channal_silence = true;
        emit this->SetMute(id);
    }
}

void ChannelEdit::ReceiveNote(int channalNum, v_spo *note) {
    if (this->id == channalNum) {
        emit this->SendBackNote(note);
    }
}
