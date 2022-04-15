#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QHBoxLayout;
class RangeSlider;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QWidget *widget;
    RangeSlider *rsH, *rsV, *rsHsingleLeft, *rsVsingleLeft, *rsHsingleRight, *rsVsingleRight;
    QHBoxLayout *layout;
};

#endif // MAINWINDOW_H
