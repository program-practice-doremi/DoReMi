#include "fileoperatingwidget.h"
#include "ui_fileoperatingwidget.h"

FileOperatingWidget::FileOperatingWidget(Music *t, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FileOperatingWidget)
{
    ui->setupUi(this);
    this->song = t;
}

FileOperatingWidget::~FileOperatingWidget()
{
    delete ui;
}
