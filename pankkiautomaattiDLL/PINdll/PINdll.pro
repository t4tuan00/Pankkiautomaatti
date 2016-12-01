#-------------------------------------------------
#
# Project created by QtCreator 2016-11-23T16:53:40
#
#-------------------------------------------------
QT += widgets
QT       +=sql
TARGET = PINdll
TEMPLATE = lib

DEFINES += PINDLL_LIBRARY

SOURCES += pindll.cpp \
    pinkoodi.cpp

HEADERS += pindll.h\
        pindll_global.h \
    pinkoodi.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    pinkoodi.ui
