#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T11:48:28
#
#-------------------------------------------------

QT       -= gui
QT      += serialport

TARGET = RFIDDll
TEMPLATE = lib

DEFINES += RFIDDLL_LIBRARY

SOURCES += rfiddll.cpp

HEADERS += rfiddll.h\
        rfiddll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
