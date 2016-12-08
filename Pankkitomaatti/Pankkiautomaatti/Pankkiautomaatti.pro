#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T14:14:32
#
#-------------------------------------------------

QT       += core gui
QT      += sql
QT      += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pankkiautomaatti
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pinkoodi.cpp \
    paasivu.cpp \
    saldo.cpp \
    nosto.cpp \
    tilitapahtumat.cpp \
    nostasumma.cpp

HEADERS  += mainwindow.h \
    pinkoodi.h \
    paasivu.h \
    saldo.h \
    nosto.h \
    tilitapahtumat.h \
    nostasumma.h

FORMS    += mainwindow.ui \
    pinkoodi.ui \
    paasivu.ui \
    saldo.ui \
    nosto.ui \
    tilitapahtumat.ui \
    nostasumma.ui

unix:!macx: LIBS += -L$$PWD/../build-SQLDLL-Desktop-Release/ -lSQLDLL

INCLUDEPATH += $$PWD/../SQLDLL
DEPENDPATH += $$PWD/../SQLDLL

unix:!macx: LIBS += -L$$PWD/../RFIDDLL/build-RFIDDLL-Desktop-Release/ -lRFIDDLL

INCLUDEPATH += $$PWD/../RFIDDLL/RFIDDLL
DEPENDPATH += $$PWD/../RFIDDLL/RFIDDLL

unix:!macx: LIBS += -L$$PWD/../PinDLL/build-PinDLL-Desktop-Release/ -lPinDLL

INCLUDEPATH += $$PWD/../PinDLL/PinDLL
DEPENDPATH += $$PWD/../PinDLL/PinDLL
