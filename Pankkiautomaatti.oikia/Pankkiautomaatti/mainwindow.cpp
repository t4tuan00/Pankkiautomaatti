#include "mainwindow.h"
#include "ui_mainwindow.h"






Mainwindow::Mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainwindow)
{

    uusiPin = new Pin;
    ui->setupUi(this);
    serial = new QSerialPort(this);
    connect (serial,&QSerialPort::readyRead,this,&Mainwindow::readData);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);

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

void Mainwindow::readData()
{
    QByteArray kortti=serial->readAll();
    kortti = kortti.simplified();
    kortti.resize(11);
    qDebug() << kortti;
    uusiPin->show();
    uusiPin->exec();
}

void Mainwindow::on_pushButtonConnect_clicked()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();

    model = new QSqlTableModel(this);
    model->setTable("asiakas");
    model->select();
    ui->tableView->setModel(model);


}
