#ifndef CREATEPAGE_H
#define CREATEPAGE_H

#include <QMainWindow>
#include "music.h"


namespace Ui {
class CreatePage;
}

class CreatePage : public QMainWindow
{
    Q_OBJECT
public:
    Music *sang;

public slots:
    void getmusic(Music *song);
public:
    explicit CreatePage(QWidget *parent = nullptr);
    ~CreatePage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreatePage *ui;
};

#endif // CREATEPAGE_H
