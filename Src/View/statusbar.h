#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QFrame>
#include <QPushButton>

class StatusBar : public QFrame
{
    Q_OBJECT
public:
    StatusBar(QWidget *parent = nullptr);

    void updateContent();

private:
    QPushButton *btnUpgrade;
    QPushButton *btnActive;
};

#endif // STATUSBAR_H
