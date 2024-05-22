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

public:
    explicit piano(QWidget *parent = nullptr);
    ~piano();
    QButtonGroup *piano_keys;

protected:
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::piano *ui;
};

#endif // PIANO_H
