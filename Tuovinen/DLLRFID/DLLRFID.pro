#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T10:37:46
#
#-------------------------------------------------

QT       -= gui
QT +=serialport

TARGET = DLLRFID
TEMPLATE = lib

DEFINES += DLLRFID_LIBRARY

SOURCES += dllrfid.cpp

HEADERS += dllrfid.h\
        dllrfid_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
