#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    olioRFID = new RFIDdll;
    //olioPinsyotetty = new Pinkoodi;
    olioPinruutu = new PINdll;
    olioRFID->setup();
    olioRFID->readData();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioRFID;
    //delete olioPinsyotetty;
    delete olioPinruutu;
}

void MainWindow::on_pushButton_ok_clicked()
{


     olioPinruutu->Pinruutu(); //Näytetään pin-koodin syöttämisessä tarvittava ruutu
     kortti = olioRFID->palautakortti(); //palautetaan syötetyn kortin id muuttujaan saatukortti
     olioPinruutu->rajapintaFunktio(kortti); //haetaan RFID:ltä syötetty kortti ja sijoitetaan muuttujaan luettukortti PINdll:ssä.

    //olioPinsyotetty->pinTarkistus();
    qDebug() << "Mainwindow ok nappi" << kortti;



}

