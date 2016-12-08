#include "sqldll.h"


SQLDLL::SQLDLL()
{
}
void SQLDLL::yhteys()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();
}

void SQLDLL::nosta20()
{
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '20', NOW(), '5', '2')");
}

void SQLDLL::nosta40()
{
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '40', NOW(), '5', '2')");
}
void SQLDLL::nosta60()
{
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '60', NOW(), '5', '2')");
}
void SQLDLL::nosta80()
{
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '80', NOW(), '5', '2')");
}
void SQLDLL::nosta100()
{
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '100', NOW(), '5', '2')");
}
void SQLDLL::nosta120()
{
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '120', NOW(), '5', '2')");
}

void SQLDLL::nostaMuuSumma()
{
    qDebug()<<"nostumuusumma"<<uusisyotetty;
    //QString painettu = olioMuuSumma->palautasumma(); //aiemmasta mallia että haetaan oliolta summa joka on syötetty ui:ssä
    QSqlQuery query;
    query.prepare("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES(:idnosto, :amount, NOW(), :id_tili, :id_automaatti)");
    query.bindValue(":idnosto", 0);
    query.bindValue(":amount", uusisyotetty);
    query.bindValue(":id_tili", 5);
    query.bindValue(":id_automaatti", 2);
    query.exec();


}
void SQLDLL::syotettySumma(QString id)
{
    uusisyotetty = id;
    qDebug()<<"sqldll:än syötetty summa"<<uusisyotetty;
}

QString SQLDLL::saldo()
{

    QSqlQuery query;
    query.exec("SELECT saldo FROM tili WHERE id_tili= '5'");
    while(query.next())
    {
        tulostasaldo = query.value(0).toString();
        qDebug(tulostasaldo.toLatin1());

    }

    return tulostasaldo;
}

