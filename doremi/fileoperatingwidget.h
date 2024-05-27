#ifndef FILEOPERATINGWIDGET_H
#define FILEOPERATINGWIDGET_H

#include <QWidget>
#include "music.h"

namespace Ui {
class FileOperatingWidget;
}

class FileOperatingWidget : public QWidget
{
    Q_OBJECT

public:
    Music *song;
    explicit FileOperatingWidget(Music *t, QWidget *parent = nullptr);
    ~FileOperatingWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FileOperatingWidget *ui;
};

#endif // FILEOPERATINGWIDGET_H
