#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T11:33:21
#
#-------------------------------------------------

QT       += core gui serialport sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = paaIkkuna
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pinkoodi.cpp

HEADERS  += mainwindow.h \
    pinkoodi.h

FORMS    += mainwindow.ui \
    pinkoodi.ui

unix:!macx: LIBS += -L$$PWD/../build-RFIDDll-Desktop-Release/ -lRFIDDll

INCLUDEPATH += $$PWD/../RFIDDll
DEPENDPATH += $$PWD/../RFIDDll

unix:!macx: LIBS += -L$$PWD/../build-Pindll-Desktop-Release/ -lPindll

INCLUDEPATH += $$PWD/../Pindll
DEPENDPATH += $$PWD/../Pindll
