CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(RangeSliderPlugin)
TEMPLATE    = lib

HEADERS     = RangeSliderPlugin.h
SOURCES     = RangeSliderPlugin.cpp

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(RangeSlider.pri)
