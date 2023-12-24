#include "colorbutton.h"


ColorButton::ColorButton(QColor color) : QPushButton(nullptr)
{
    setStyleSheet(QString("background: %1; color: rgb(200, 200, 200)").arg(color.name()));
}
