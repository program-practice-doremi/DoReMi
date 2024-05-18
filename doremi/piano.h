#ifndef PIANO_H
#define PIANO_H

#include <QMainWindow>
#include <QButtonGroup>

namespace Ui {
class piano;
}

class piano : public QMainWindow
{
    Q_OBJECT

public:
    explicit piano(QWidget *parent = nullptr);
    ~piano();
    QButtonGroup *piano_keys;

private:
    Ui::piano *ui;
};

#endif // PIANO_H
