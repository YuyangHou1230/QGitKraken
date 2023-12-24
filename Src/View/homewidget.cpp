#include "homewidget.h"
#include "ui_homewidget.h"

HomeWidget::HomeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeWidget)
{
    ui->setupUi(this);
}

HomeWidget::~HomeWidget()
{
    delete ui;
}

void HomeWidget::on_btnOpenLocalRepo_clicked()
{
    emit openLocalRepo("");
}
