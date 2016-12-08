#ifndef PINDLL_H
#define PINDLL_H

#include "pindll_global.h"

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>


class PINDLLSHARED_EXPORT PinDLL
{

public:
    PinDLL();
    void syotettykortti(QString id);
    void syotettypin(QString id);
    QString saatupin;
    QString saatukortti;
    QString pin;
    QString painettu;
    QString id_asiakas;
    bool pinTarkistus();
    QString haettuAsiakas();

    QString TiliID;


private:
    void yhteys();
    QSqlDatabase db;

};

#endif // PINDLL_H
