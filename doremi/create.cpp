#include "create.h"
#include "ui_create.h"
#include "chooseinstruments.h"

create::create(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::create)
{
    ui->setupUi(this);
}

create::~create()
{
    delete ui;
}

//获取并设置成列表模式
/*QListView::viewMode viewMode() const;
void setViewMode(QListView::ViewMode mode);

//获取和设置交替显示
bool alternatingRowColors() const;
void setAlternatingRowColors(bool enable);*/
void create::on_addyingui_clicked()
{
    this->close();
    chooseinstruments *pic=new chooseinstruments();
    pic->show();
}

