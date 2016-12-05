#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T12:05:50
#
#-------------------------------------------------

QT       += sql

QT       -= gui

TARGET = Pindll
TEMPLATE = lib

DEFINES += PINDLL_LIBRARY

SOURCES += pindll.cpp

HEADERS += pindll.h\
        pindll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
