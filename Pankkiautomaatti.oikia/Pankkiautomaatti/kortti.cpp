/*
#include "kortti.h"
#include <QSerialPort>
#include <QDebug>

QSerialPort *serial;
Kortti::Kortti()
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    connect (serial,&QSerialPort::readyRead,this,&Kortti::readData);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
}
void Kortti::readData()
{
    QByteArray data=serial->readAll();
    qDebug() << data;
    //ui->textEdit->setText(data);
}

*/
