#ifndef CREATEPAGE_H
#define CREATEPAGE_H

#include <QMainWindow>
#include "music.h"
#include "channeledit.h"
#include "mediaplayer.h"


namespace Ui {
class CreatePage;
}

class CreatePage : public QMainWindow
{
    Q_OBJECT
public:
    Music *sang;
    MediaPlayer *player;
    ChannelEdit *channelEdits[9];


public slots:
    void getmusic(Music *song);
public:
    explicit CreatePage(QWidget *parent = nullptr);
    ~CreatePage();

private:
    bool paused = false;

private slots:
    void on_pushButton_clicked();

    void on_playButton_clicked();

    void on_pauseButton_clicked();

    void on_stopButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_tune_box_valueChanged(int arg1);

    void on_speed_box_valueChanged(int arg1);

private:
    Ui::CreatePage *ui;
};

#endif // CREATEPAGE_H
