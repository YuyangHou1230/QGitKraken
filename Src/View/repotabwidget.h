#ifndef REPOTABWIDGET_H
#define REPOTABWIDGET_H

#include "homewidget.h"

#include <QTabWidget>

class RepoTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    explicit RepoTabWidget(QWidget *parent = nullptr);

    void addRepo();

private:
    void initHomePage();
    void showMainPage();
    void hideMainpage();

private:
    HomeWidget *m_homwWidget;
};

#endif // REPOTABWIDGET_H
