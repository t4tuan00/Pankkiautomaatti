#include "pindll.h"


PINdll::PINdll()
{

}

void PINdll::Pinruutu()
{
    olioPinkoodi = new Pinkoodi;
    olioPinkoodi->show();
    //pinkoodi.show();
    olioPinkoodi->exec();


}

void PINdll::rajapintaFunktio(QString pkortti)
{
    qDebug() <<"rp:" << pkortti;
   // olioPinkoodi->syotettykortti(pkortti);
}
