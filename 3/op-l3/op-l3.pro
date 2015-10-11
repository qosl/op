TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    segment.h \
    trianglea.h \
    tools.h \
    triangle.h \
    triangleb.h \
    trianglec.h

