#ifndef RFIDDLL_H
#define RFIDDLL_H

#include "rfiddll_global.h"
#include <QSerialPort>
#include <QDebug>


class RFIDDLLSHARED_EXPORT RFIDDll: public QObject
{
 Q_OBJECT
public:
    RFIDDll();
    void readData();
    void setup();
    QString palautakortti();
    QString luettukortti;

private:
    QSerialPort *serial;


};

#endif // RFIDDLL_H
