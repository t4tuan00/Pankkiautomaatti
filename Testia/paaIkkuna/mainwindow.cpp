#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    olioPinkoodi = new pinKoodi;
    olioRFID = new RFIDDll;
    olioPinDll = new Pindll;

    olioRFID->setup();
    olioRFID->readData();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioPinkoodi;
    delete olioRFID;
    delete olioPinDll;
}

void MainWindow::on_pushButtonOK_clicked()
{

    kortti = olioRFID->palautakortti();
    qDebug() << "Tämä on mainwindowin ok nappi" << kortti;
    olioPinkoodi->syotetty(kortti);

    olioPinkoodi->show();

    //olioPinDll->pinTarkistus();
}
