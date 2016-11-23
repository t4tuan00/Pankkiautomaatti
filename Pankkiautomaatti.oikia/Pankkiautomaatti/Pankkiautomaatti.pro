#-------------------------------------------------
#
# Project created by QtCreator 2016-11-16T15:02:31
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pankkiautomaatti
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pin.cpp \
    paasivu.cpp \
    yhteys.cpp \
    nosto.cpp

HEADERS  += mainwindow.h \
    pin.h \
    paasivu.h \
    yhteys.h \
    nosto.h

FORMS    += mainwindow.ui \
    pin.ui \
    paasivu.ui \
    nosto.ui
