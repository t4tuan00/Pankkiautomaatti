#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T14:39:23
#
#-------------------------------------------------

QT       -= gui
QT       +=serialport

TARGET = RFIDDLL
TEMPLATE = lib

DEFINES += RFIDDLL_LIBRARY

SOURCES += rfiddll.cpp

HEADERS += rfiddll.h\
        rfiddll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
