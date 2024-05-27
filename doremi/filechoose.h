#ifndef FILECHOOSE_H
#define FILECHOOSE_H

#include <QWidget>
#include "music.h"

namespace Ui {
class FileChoose;
}

class FileChoose : public QWidget
{
    Q_OBJECT

public:
    explicit FileChoose(QWidget *parent = nullptr);
    ~FileChoose();

signals:
    void songcopy(Music *song);

private slots:
    void on_create_clicked();

    void on_back_clicked();

    void on_queren_clicked();

    void on_chooseButton_clicked();

    void on_twinkleButton_clicked();

    void on_fireworksButton_clicked();

    void on_oceanButton_clicked();

    void on_fightButton_clicked();

    void on_queren2_clicked();

    void on_open_clicked();

private:
    Ui::FileChoose *ui;
};

#endif // FILECHOOSE_H
