#include "yhteys.h"

Yhteys::Yhteys()
{
}
void Yhteys::Connect() //luodaan yhteys tietokantaan
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();
}

void Yhteys::Tarkistus() //haetaan kortit ja pin-koodit
{

    QSqlQuery query;
    query.exec("SELECT kortti_nro, pin FROM kortti");
    while(query.next())
    {
        QString kortti_nro = query.value(0).toString();
        QString pin = query.value(1).toString();
        qDebug(kortti_nro.toLatin1());
        qDebug(pin.toLatin1());
    }

}

