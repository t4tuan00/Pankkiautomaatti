#include "rfiddll.h"


RFIDDLL::RFIDDLL()
{
}
void RFIDDLL::setup()
{
    serial = new QSerialPort(this);
    connect (serial,&QSerialPort::readyRead,this,&RFIDDLL::readData);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
}
void RFIDDLL::readData()
{
    luettukortti=serial->readAll();
    luettukortti = luettukortti.simplified();
    luettukortti.resize(11);
}
QString RFIDDLL::palautakortti()
{
    qDebug() <<"Tämä on RFID DLL:n readdata-funktio" << luettukortti;
    return luettukortti;
}
