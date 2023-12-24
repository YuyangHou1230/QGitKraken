#include "repositywidget.h"
#include "ui_repositywidget.h"

ReposityWidget::ReposityWidget(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::ReposityWidget)
{
    ui->setupUi(this);

}

ReposityWidget::~ReposityWidget()
{
    delete ui;
}
