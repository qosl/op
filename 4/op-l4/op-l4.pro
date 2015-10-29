TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
SOURCES += main.cpp \
    figure.cpp \
    tetrahedron.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    figure.h \
    tetrahedron.h \
    parallelepiped.h \
    cube.h

