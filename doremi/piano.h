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
    MediaPlayer *player = new MediaPlayer();
    void change_color(int id);
    void change_color_back(int id);

public:
    explicit piano(QWidget *parent = nullptr);
    ~piano();
    QButtonGroup *piano_keys;
signals:
    void newnote(v_spo *note);
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::piano *ui;
};

#endif // PIANO_H
