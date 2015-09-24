TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    catalogue.cpp \
    clients.cpp \
    orders.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    catalogue.h \
    clients.h \
    orders.h \
    tools.h

