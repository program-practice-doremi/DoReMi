#include "channeledit.h"
#include "ui_channeledit.h"
#include <iostream>
#include "piano.h"

ChannelEdit::ChannelEdit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChannelEdit)
{
    ui->setupUi(this);
    this->ui->spinBox->setMaximum(127);
    this->ui->spinBox->setMinimum(0);
    this->ui->lineEdit->setReadOnly(true);
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
    std::cout << arg1 << std::endl;
    emit this->ChangeMusicType(id, arg1);
}

void ChannelEdit::transform_note(v_spo *note) {
    emit this->DeliverNote(note);
}

void ChannelEdit::on_createButton_clicked()
{
    piano *new_piano = new piano();
    new_piano->show();
    connect(new_piano, &piano::newnote, this, &ChannelEdit::transform_note);
    emit CurrentEditing(id);
}

