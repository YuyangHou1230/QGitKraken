#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "View/repotabwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    RepoTabWidget *widget = new RepoTabWidget();
//    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

