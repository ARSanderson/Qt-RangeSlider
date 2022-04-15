#include "mainwindow.h"

#include <QSlider>
#include <QHBoxLayout>
#include "RangeSlider.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    widget = new QWidget(this);
    rsH = new RangeSlider(Qt::Horizontal, RangeSlider::SliderHandle::DoubleHandles, nullptr);
    rsV = new RangeSlider(Qt::Vertical, RangeSlider::SliderHandle::DoubleHandles, nullptr);
    rsHsingleLeft = new RangeSlider(Qt::Horizontal, RangeSlider::SliderHandle::LeftHandle, nullptr);
    rsVsingleLeft = new RangeSlider(Qt::Vertical, RangeSlider::SliderHandle::LeftHandle, nullptr);
    rsHsingleRight = new RangeSlider(Qt::Horizontal, RangeSlider::SliderHandle::RightHandle, nullptr);
    rsVsingleRight = new RangeSlider(Qt::Vertical, RangeSlider::SliderHandle::RightHandle, nullptr);

    rsVsingleRight->SetLowerHandleColor(QColor(Qt::red));
    rsVsingleRight->SetUpperHandleColor(QColor(Qt::red));

    QSlider *hSlider = new QSlider(nullptr);
    hSlider->setOrientation(Qt::Horizontal);
    QSlider *vSlider = new QSlider(nullptr);
    vSlider->setOrientation(Qt::Vertical);

    layout = new QHBoxLayout();
    layout->addWidget(rsH);
    layout->addWidget(rsV);
    layout->addWidget(rsHsingleLeft);
    layout->addWidget(rsVsingleLeft);
    layout->addWidget(rsHsingleRight);
    layout->addWidget(rsVsingleRight);

//    layout->addWidget(hSlider);
//    layout->addWidget(vSlider);

    widget->setLayout(layout);
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
}
