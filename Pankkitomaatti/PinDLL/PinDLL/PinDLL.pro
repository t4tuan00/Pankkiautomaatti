#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T14:21:10
#
#-------------------------------------------------

QT       -= gui
QT       +=sql

TARGET = PinDLL
TEMPLATE = lib

DEFINES += PINDLL_LIBRARY

SOURCES += pindll.cpp

HEADERS += pindll.h\
        pindll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
