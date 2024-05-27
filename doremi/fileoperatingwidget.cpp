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

void FileOperatingWidget::on_pushButton_clicked()
{
    std::string name;
    name = this->ui->lineEdit->text().toStdString();
    this->song->save_file(name);
}

