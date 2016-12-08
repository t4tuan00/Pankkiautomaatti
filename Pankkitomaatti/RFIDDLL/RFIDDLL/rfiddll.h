#ifndef RFIDDLL_H
#define RFIDDLL_H

#include "rfiddll_global.h"
#include <QSerialPort>
#include <QDebug>

class RFIDDLLSHARED_EXPORT RFIDDLL: public QObject
{
Q_OBJECT
public:
    RFIDDLL();
    void readData();
    void setup();
    QString palautakortti();
    QString luettukortti;

private:
    QSerialPort *serial;
};

#endif // RFIDDLL_H
