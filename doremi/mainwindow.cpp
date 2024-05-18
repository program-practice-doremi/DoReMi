#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_2_clicked()) );
}

void MainWindow::play() {
    player = new MediaPlayer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*play();
    Test *t = new Test();
    t->Test4();
    */
    menu *pic=new menu();
    pic->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

