#include "rfiddll.h"


RFIDDll::RFIDDll()
{

}
void RFIDDll::setup()
{
    serial = new QSerialPort(this);
    connect (serial,&QSerialPort::readyRead,this,&RFIDDll::readData);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
}
void RFIDDll::readData()
{
    luettukortti=serial->readAll();
    luettukortti = luettukortti.simplified();
    luettukortti.resize(11);

}

QString RFIDDll::palautakortti()
{
    qDebug() << "Tämä on RFID Dll:n readdata-funktio" << luettukortti;
    return luettukortti;

}

