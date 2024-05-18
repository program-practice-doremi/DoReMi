#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "mainwindow.h"
#include "music.h"

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

signals:
    void songcopy(Music *song);

private slots:
    void on_create_clicked();

    void on_back_clicked();

    void on_queren_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
