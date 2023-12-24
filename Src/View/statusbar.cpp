#include "statusbar.h"


#include "View/colorbutton.h"

#include <QHBoxLayout>

StatusBar::StatusBar(QWidget *parent) :QFrame(parent)
{
    updateContent();
}

void StatusBar::updateContent()
{
    btnUpgrade = new ColorButton(QColor(59, 80, 68));
    btnUpgrade->setText("更新就绪（重启QGitGraken）");
    btnUpgrade->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);

    btnActive = new ColorButton(QColor(51, 54, 63));
    btnActive->setText("更新失败！");
    btnActive->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(1, 1, 1, 1);
    layout->setSpacing(2);
    layout->addWidget(btnUpgrade);
    layout->addWidget(btnActive);
    layout->addStretch();
}
