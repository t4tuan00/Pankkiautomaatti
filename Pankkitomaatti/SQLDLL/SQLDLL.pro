#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T14:52:45
#
#-------------------------------------------------

QT       -= gui
QT       += sql

TARGET = SQLDLL
TEMPLATE = lib

DEFINES += SQLDLL_LIBRARY

SOURCES += sqldll.cpp

HEADERS += sqldll.h\
        sqldll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
