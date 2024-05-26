#ifndef CHANNELEDIT_H
#define CHANNELEDIT_H

#include <QWidget>
#include "channal.h"

namespace Ui {
class ChannelEdit;
}

class ChannelEdit : public QWidget
{
    Q_OBJECT

public:
    int id;
    bool channal_silence = false;

public:
    explicit ChannelEdit(QWidget *parent = nullptr);
    void set_id(int _id);
    void setStrength(int strength);
    void setMusicType(int type);
    ~ChannelEdit();

signals:
    void ChangeChannelStrength(int id, int strength);
    void ChangeMusicType(int id, int type);
    void DeliverNote(v_spo *note);
    void CurrentEditing(int id);
    void SetMute(int id);
    void SetHearable(int id);

public slots:
    void transform_note(v_spo *note);

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_createButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::ChannelEdit *ui;
};

#endif // CHANNELEDIT_H
