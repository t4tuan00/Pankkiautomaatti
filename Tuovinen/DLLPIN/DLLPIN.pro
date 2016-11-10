#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T10:38:46
#
#-------------------------------------------------

QT       -= gui

TARGET = DLLPIN
TEMPLATE = lib

DEFINES += DLLPIN_LIBRARY

SOURCES += dllpin.cpp

HEADERS += dllpin.h\
        dllpin_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
