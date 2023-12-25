#ifndef COMMANDWIDGET_H
#define COMMANDWIDGET_H

#include <QFrame>

namespace Ui
{
class Form;
}

class CommandWidget : public QFrame
{
    Q_OBJECT
public:
    CommandWidget(QWidget *parent = nullptr);

private:
    Ui::Form *ui;
};

#endif   // COMMANDWIDGET_H
