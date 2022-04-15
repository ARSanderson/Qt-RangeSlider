#include "RangeSliderPlugin.h"
#include "RangeSlider.h"

#include <QtPlugin>

RangeSliderPlugin::RangeSliderPlugin(QObject *parent)
    : QObject(parent)
{
}

void RangeSliderPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    m_initialized = true;
}

bool RangeSliderPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *RangeSliderPlugin::createWidget(QWidget *parent)
{
    return new RangeSlider(parent);
}

QString RangeSliderPlugin::name() const
{
    return QLatin1String("RangeSlider");
}

QString RangeSliderPlugin::group() const
{
    return QLatin1String("Custom Widgets");
}

QIcon RangeSliderPlugin::icon() const
{
    return QIcon();
}

QString RangeSliderPlugin::toolTip() const
{
    return QLatin1String("A range slider widget");
}

QString RangeSliderPlugin::whatsThis() const
{
    return QLatin1String("A range slider widget for setting a minimum and maximum range.");
}

bool RangeSliderPlugin::isContainer() const
{
    return false;
}

QString RangeSliderPlugin::domXml() const
{
    return QLatin1String("<ui language=\"c++\">\n"
                         " <widget class=\"RangeSlider\" name=\"RangeSlider\">\n"
                         "  <property name=\"geometry\">\n"
                         "   <rect>\n"
                         "    <x>0</x>\n"
                         "    <y>0</y>\n"
                         "    <width>160</width>\n"
                         "    <height>25</height>\n"
                         "   </rect>\n"
                         "  </property>\n"
                         "  <property name=\"minimum\">\n"
                         "   <number>0</number>\n"
                         "  </property>\n"
                         "  <property name=\"maximum\">\n"
                         "   <number>99</number>\n"
                         "  </property>\n"
                         "  <property name=\"lowerValue\">\n"
                         "   <number>0</number>\n"
                         "  </property>\n"
                         "  <property name=\"upperValue\">\n"
                         "   <number>99</number>\n"
                         "  </property>\n"
                         "  <property name=\"orientation\">\n"
                         "   <enum>Qt::Horizontal</enum>\n"
                         "  </property>\n"
                         " </widget>\n"
                         "</ui>\n");
}

QString RangeSliderPlugin::includeFile() const
{
    return QLatin1String("RangeSlider.h");
}
