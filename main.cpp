#include "mainwindow.h"
#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QRect screenGeometry = QApplication::screens()[0]->geometry();
    w.resize(screenGeometry.width()/3, screenGeometry.height()/4);
    w.show();

    return a.exec();
}
