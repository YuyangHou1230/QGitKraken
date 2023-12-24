#ifndef REPOSITYWIDGET_H
#define REPOSITYWIDGET_H

#include <QFrame>

namespace Ui {
class ReposityWidget;
}

class ReposityWidget : public QFrame
{
    Q_OBJECT

public:
    explicit ReposityWidget(QWidget *parent = nullptr);
    ~ReposityWidget();

private:
    Ui::ReposityWidget *ui;
};

#endif // REPOSITYWIDGET_H
