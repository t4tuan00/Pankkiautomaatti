#include "pindll.h"


Pindll::Pindll()
{
}

void Pindll::yhteys()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();
}

void Pindll::syotettykortti(QString id){
    saatukortti = id;
    qDebug() << "Tämä on pindlln syotettykortti" << saatukortti;

}

void Pindll::syotettypin(QString id){
    saatupin = id;
}

void Pindll::pinTarkistus()
{
    //QString painettu="80082";
    yhteys();
    qDebug() << "tämä on pintarkistuksessa saatukortti" << saatukortti;
    qDebug() << " tämä on pintarkistuksesa saatupin" << saatupin;
    QSqlQuery query;
    query.exec("SELECT pin FROM kortti WHERE kortti_nro='"+saatukortti+"' ");
    //query.exec("SELECT kortti_nro, pin FROM kortti");

    while(query.next())
    {


            pin = query.value(0).toString();
          //kortti_nro = query.value(0).toString();

            if(pin==saatupin){
                 qDebug()<<"PIN oikein";
                 qDebug()<<"Haettu PIN";
                 qDebug(pin.toLatin1());
            }

            else
            {
                qDebug()<< "PIN väärin";
            }

         // qDebug(kortti_nro.toLatin1());
         // qDebug()<<"Haettu Pin:";

          //qDebug() << "Pin oikein. Tervetuloa!";
    }
}

