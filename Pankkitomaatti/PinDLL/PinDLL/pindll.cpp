#include "pindll.h"


PinDLL::PinDLL()
{
}
void PinDLL::yhteys()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();
}

void PinDLL::syotettykortti(QString id)
{
    saatukortti = id;
    //qDebug() << "tämä on pindlln syotettykortti" << saatukortti;
}

void PinDLL::syotettypin(QString id)
{
    saatupin = id;
}

bool PinDLL::pinTarkistus()
{
    yhteys();
    qDebug() << "tämä on pintarkistuksessa saatukortti" << saatukortti;
    qDebug() << "tämä on pintarkistuksessa saatupin" << saatupin;
    QSqlQuery query;

    query.exec("SELECT pin FROM kortti WHERE kortti_nro='"+saatukortti+"' ");


    while(query.next())
    {
        pin = query.value(0).toString();


        if(pin==saatupin)
        {
            qDebug()<<"Pin oikein";
            qDebug()<<"Haettu Pin";
            qDebug(pin.toLatin1());
            return true;


        }
        else
        {
            qDebug()<<"Pin väärin";
            return false;
        }
    }


}

QString PinDLL::haettuAsiakas()
{
    yhteys();

    QSqlQuery query2;
    query2.exec("SELECT tili.id_tili FROM tili  JOIN kortti ON tili.id_tili = kortti.id_tili WHERE kortti_nro='"+saatukortti+"' ");

    while(query2.next())
    {
        id_asiakas = query2.value(0).toString();
        qDebug(id_asiakas.toLatin1());
    }
    TiliID=id_asiakas;
    qDebug() << "Tämä on pinDLL:än tili id" << TiliID;
    return TiliID;
    db.close();
}


