#include "mainwindow.h"
#include "ui_mainwindow.h"


QSerialPort *serial;

Mainwindow::Mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainwindow)
{
    uusiPin = new Pin;
    ui->setupUi(this);
   /* serial = new QSerialPort(this);
    connect (serial,&QSerialPort::readyRead,this,&Mainwindow::readData);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);*/
}

Mainwindow::~Mainwindow()
{
    delete uusiPin;
    delete ui;
    serial->close();
    delete serial;
}


void Mainwindow::on_pushButtonCancel_clicked()
{
    this->close();
}

/*void Mainwindow::readData()
{
    QByteArray data=serial->readAll();
    data = data.simplified();
    data.resize(11);
    qDebug() << data;
    uusiPin->show();
    uusiPin->exec();
}*/

void Mainwindow::on_pushButtonNEXT_clicked()
{
    uusiPin->show();
    uusiPin->exec();
}
