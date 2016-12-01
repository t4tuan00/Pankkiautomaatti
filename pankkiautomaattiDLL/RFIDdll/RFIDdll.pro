#-------------------------------------------------
#
# Project created by QtCreator 2016-11-23T16:49:08
#
#-------------------------------------------------

QT       -= gui
QT      +=serialport

TARGET = RFIDdll
TEMPLATE = lib

DEFINES += RFIDDLL_LIBRARY

SOURCES += rfiddll.cpp

HEADERS += rfiddll.h\
        rfiddll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
