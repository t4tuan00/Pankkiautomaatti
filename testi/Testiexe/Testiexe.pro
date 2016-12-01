#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T10:54:40
#
#-------------------------------------------------

QT       += core gui
QT      +=sql
QT      +=serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Testiexe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui





unix:!macx: LIBS += -L$$PWD/../../pankkiautomaattiDLL/build-PINdll-Desktop-Release/ -lPINdll

INCLUDEPATH += $$PWD/../../pankkiautomaattiDLL/PINdll
DEPENDPATH += $$PWD/../../pankkiautomaattiDLL/PINdll

unix:!macx: LIBS += -L$$PWD/../../pankkiautomaattiDLL/build-RFIDdll-Desktop-Release/ -lRFIDdll

INCLUDEPATH += $$PWD/../../pankkiautomaattiDLL/RFIDdll
DEPENDPATH += $$PWD/../../pankkiautomaattiDLL/RFIDdll
