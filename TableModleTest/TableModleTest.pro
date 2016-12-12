#-------------------------------------------------
#
# Project created by QtCreator 2016-12-12T08:01:15
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TableModleTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    taulukko.cpp

HEADERS  += mainwindow.h \
    taulukko.h

FORMS    += mainwindow.ui \
    taulukko.ui
