#include "pin.h"
#include "ui_pin.h"

Pin::Pin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pin)
{
    ui->setupUi(this);
    uusiPaasivu = new Paasivu;
    uusiYhteys = new Yhteys;
    uusiTarkistus = new Yhteys;
    connect(this, ?(?()),this,SLOT(readData??()));
    //uusikortti = new Mainwindow;




}

Pin::~Pin()
{
    delete uusiPaasivu;
    delete ui;
    delete uusiYhteys;
    delete uusiTarkistus;
    //delete uusikortti;

}

void Pin::on_pushButtonCancel_clicked()
{
    this->close();
}

void Pin::on_pushButtonCorrect_clicked()
{

    ui->label->clear();

}

void Pin::on_pushButtonOk_clicked() //kun painetaan nappia tarkistetaan pin-koodi ja kortin täsmäävyys. kortti sisältää kortinnumeron. painettu sisältää syötetyn pinin.
{
   /*uusiYhteys->Connect();
    uusiTarkistus->Tarkistus();
    uusikortti->readData();
   if(kortti == kortti_nro)
    {

    if (painettu==pin)
        {
        uusiPaasivu->show();
        uusiPaasivu->exec();
        }

    }
    else
    {
        qDebug()<< "Pin väärin!!!!!HOMO YRITÄ UUDELLEEN";
    }
*/

}

void Pin::on_pushButton_1_clicked()
{
    painettu = painettu.append("1");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);

}

void Pin::on_pushButton_2_clicked()
{
    painettu = painettu.append("2");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_3_clicked()
{
    painettu = painettu.append("3");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_4_clicked()
{
    painettu = painettu.append("4");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_5_clicked()
{
    painettu = painettu.append("5");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_6_clicked()
{
    painettu = painettu.append("6");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_7_clicked()
{
    painettu = painettu.append("7");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_8_clicked()
{
    painettu = painettu.append("8");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_9_clicked()
{
    painettu = painettu.append("9");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_plus_clicked()
{
    painettu = painettu.append("+");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_0_clicked()
{
    painettu = painettu.append("0");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pin::on_pushButton_miinus_clicked()
{
    painettu = painettu.append("-");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}



