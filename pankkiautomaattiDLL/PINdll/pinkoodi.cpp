#include "pinkoodi.h"
#include "ui_pinkoodi.h"

Pinkoodi::Pinkoodi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pinkoodi)
{
    ui->setupUi(this);
    connect(this,SIGNAL(Pinsyotetty()),this,SLOT(on_pushButton_Ok_clicked()));
}

Pinkoodi::~Pinkoodi()
{
    delete ui;
}

void Pinkoodi::on_pushButton_1_clicked()
{
    painettu = painettu.append("1");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_2_clicked()
{
    painettu = painettu.append("2");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_3_clicked()
{
    painettu = painettu.append("3");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_4_clicked()
{
    painettu = painettu.append("4");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_5_clicked()
{
    painettu = painettu.append("5");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_6_clicked()
{
    painettu = painettu.append("6");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_7_clicked()
{
    painettu = painettu.append("7");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_8_clicked()
{
    painettu = painettu.append("8");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_9_clicked()
{
    painettu = painettu.append("9");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_plus_clicked()
{
    painettu = painettu.append("+");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_0_clicked()
{
    painettu = painettu.append("0");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_miinus_clicked()
{
    painettu = painettu.append("-");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}


void Pinkoodi::on_pushButton_Peruuta_clicked()
{
    this->close();
}

void Pinkoodi::on_pushButton_Pyyhi_clicked()
{
     ui->label->clear();
}



void Pinkoodi::on_pushButton_Ok_clicked()
{
   //qDebug() << "pushbuttonok clicked slot" << luettukortti;
    qDebug()<< "Ok clicked: " << saatukortti;
    this->pinTarkistus();
}

void Pinkoodi::syotettykortti(QString id)
{
   saatukortti = id; //käytetty id sijoitetaan muuttujaan luettukortti
   qDebug()<< "Funktio syotettykortti" << saatukortti;
}


void Pinkoodi::pinTarkistus(QString id){
    saatukortti = id;
    qDebug()<< "funktio pintarkistus" << saatukortti;
    qDebug()<< "Painettu pin" << painettu;

    QString pin;
   // QString kortti_nro;
  //  QString saatukortti= "9312e8b9kk";

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();

    QSqlQuery query;
    query.exec("SELECT pin FROM kortti WHERE kortti_nro='"+saatukortti+"' ");
    //query.exec("SELECT kortti_nro, pin FROM kortti");

    while(query.next())
    {
          pin = query.value(0).toString();
          //kortti_nro = query.value(0).toString();
          qDebug()<<"Haettu PIN";
         // qDebug(kortti_nro.toLatin1());
         // qDebug()<<"Haettu Pin:";
          qDebug(pin.toLatin1());
          //qDebug() << "Pin oikein. Tervetuloa!";
    }
//qDebug(pin.toLatin1());

           /*   qDebug() << saatukortti;
            qDebug()<< painettu;
            qDebug()<< oikeapin;
            if(oikeapin==painettu){
                qDebug()<<"PIN oikein.";
            }

            else
            {
                qDebug() << "Ei ole oikein";
            }*/

          /*  QString kortti_nro = query.value(0).toString();

          qDebug(kortti_nro.toLatin1());

            qDebug() << painettu;*/
}

