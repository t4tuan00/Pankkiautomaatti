#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T10:39:25
#
#-------------------------------------------------

QT       -= gui

TARGET = DLLAsiakas
TEMPLATE = lib

DEFINES += DLLASIAKAS_LIBRARY

SOURCES += dllasiakas.cpp

HEADERS += dllasiakas.h\
        dllasiakas_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
