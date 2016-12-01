#include "rfiddll.h"


RFIDdll::RFIDdll()
{

}
void RFIDdll::setup()
{
    serial = new QSerialPort(this);
    connect (serial,&QSerialPort::readyRead,this,&RFIDdll::readData);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
}
void RFIDdll::readData()
{
    luettukortti=serial->readAll();
    luettukortti = luettukortti.simplified();
    luettukortti.resize(11);

   //qDebug() << saatukortti;
   // return saatukortti;


}

QString RFIDdll::palautakortti()
{
    return luettukortti;
    //qDebug() << saatukortti;
}

