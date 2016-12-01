#ifndef PINDLL_H
#define PINDLL_H

#include "pindll_global.h"
#include <pinkoodi.h>
#include <QObject>



class PINDLLSHARED_EXPORT PINdll:public QObject
{
Q_OBJECT
public:
    PINdll();
    void rajapintaFunktio(QString pkortti);

public slots:
    void Pinruutu();

private:
    Pinkoodi *olioPinkoodi;

};

#endif // PINDLL_H
