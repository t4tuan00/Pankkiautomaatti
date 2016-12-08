#ifndef SQLDLL_H
#define SQLDLL_H

#include "sqldll_global.h"
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>





class SQLDLLSHARED_EXPORT SQLDLL:public QObject
{
Q_OBJECT
public:
    SQLDLL();
    void yhteys();
    void nosta20();
    void nosta40();
    void nosta60();
    void nosta80();
    void nosta100();
    void nosta120();
    void tilitapahtumat();
    void nostaMuuSumma();
    void syotettySumma(QString id);
    QString uusisyotetty;
    QString saldo();
    QString tulostasaldo;


};

#endif // SQLDLL_H
