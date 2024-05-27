#ifndef PIANO_H
#define PIANO_H

#include <QMainWindow>
#include <QButtonGroup>
#include "mediaplayer.h"
#include <QKeyEvent>

namespace Ui {
class piano;
}

class piano : public QMainWindow
{
    Q_OBJECT
public:
    bool on_record = false;
    MediaPlayer *player = new MediaPlayer();
    void change_color(int id);
    void change_color_back(int id);

public:
    explicit piano(QWidget *parent = nullptr);
    ~piano();
    QButtonGroup *piano_keys;
    void setInstrumentText(QString t);
signals:
    void startrecord();
    void stoprecord();
    void newnote(v_spo *note);

public slots:
    void recievenote(v_spo *note);
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private slots:
    void on_record_button_clicked();

private:
    Ui::piano *ui;
};

#endif // PIANO_H
