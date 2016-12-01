#ifndef RFIDDLL_H
#define RFIDDLL_H

#include "rfiddll_global.h"
#include <QSerialPort>
#include <QDebug>


class RFIDDLLSHARED_EXPORT RFIDdll: public QObject
{
 Q_OBJECT
public:
    RFIDdll();
    void readData();
    void setup();
    QString palautakortti();
    QString luettukortti;

private:
    QSerialPort *serial;


};

#endif // RFIDDLL_H
