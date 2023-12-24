#include "repotabwidget.h"


#include "repositywidget.h"
#include <QPushButton>
#include <QTabBar>
#include <QDebug>

RepoTabWidget::RepoTabWidget(QWidget *parent) : QTabWidget(parent)
{
    //
    setTabsClosable(true);


    initHomePage();

    connect(this, &QTabWidget::currentChanged, this, [=](int index){
        qDebug() << "Current Index:" << index;
    });
}

void RepoTabWidget::addRepo()
{
//    if(count() == 0)
//    {
//        tabBar()->addTab(0);
//        removeTab(0);
//    }

    ReposityWidget *widget = new ReposityWidget();
    int index = addTab(widget, QIcon("F:\\Qt\\QGitKraken\\Resources\\Reposity.png"), "testttythytyjhy");
    setCurrentIndex(index);
    qInfo() << "Add Repo";

    qDebug() << "tab index: "<< index;
}

void RepoTabWidget::initHomePage()
{
    m_homwWidget = new HomeWidget(this);
    connect(m_homwWidget, &HomeWidget::openLocalRepo, this, &RepoTabWidget::addRepo);

//    QPushButton *btn = new QPushButton("...");
//    setCornerWidget(btn, Qt::TopLeftCorner);

    int index = addTab(m_homwWidget, QIcon("F:\\Qt\\QGitKraken\\Resources\\AddReposity.png"), "");
//    tabBar()->removeTab(index);
    tabBar()->setTabButton(0, QTabBar::ButtonPosition::RightSide, nullptr);

    qDebug() << "tab count: "<< count();

//    connect(btn, &QPushButton::clicked, this, [=](){showMainPage();});
}

void RepoTabWidget::showMainPage()
{
    insertTab(0, m_homwWidget, "");
    setCurrentIndex(0);
    tabBar()->removeTab(0);
}
