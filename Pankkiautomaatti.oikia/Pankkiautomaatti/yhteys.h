#ifndef YHTEYS_H
#define YHTEYS_H

#include <QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlQuery>



class Yhteys
{
public:
    Yhteys();
    void Connect();
    void Tarkistus();


private slots:
private:
    QSqlDatabase db;


};

#endif // YHTEYS_H
