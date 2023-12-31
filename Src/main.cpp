#include "mainwindow.h"

#include <QApplication>
#include <QFile>

void LoadStylesheet(QString fileName, QApplication &a)
{
    QFile file(fileName);
    if ( file.open(QFile::ReadOnly) )
    {
        QString str = file.readAll();
        a.setStyleSheet(str);
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadStylesheet(":/black.qss", a);

    MainWindow w;

    w.showMaximized();
    return a.exec();
}
