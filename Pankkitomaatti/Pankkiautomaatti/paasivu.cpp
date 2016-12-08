#include "paasivu.h"
#include "ui_paasivu.h"

Paasivu::Paasivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paasivu)
{
    ui->setupUi(this);
    olioNosto = new Nosto;
    olioSaldo = new Saldo;
    olioTiliID = new PinDLL;


  //  oliotili = new Tilitapahtumat;
}

Paasivu::~Paasivu()
{
    delete ui;
    delete olioNosto;
    delete olioSaldo;

   // delete oliotili;
}

void Paasivu::on_pushButton_Saldo_clicked()
{
    olioSaldo->show();
    olioSaldo->naytaSaldo();

    //olioSaldo->exec();
}

void Paasivu::on_pushButton_Tilitapahtumat_clicked()
{
    //oliotili->show();

}

void Paasivu::on_pushButton_Nosto_clicked()
{
    //olioTiliID->haettuAsiakas();
    olioNosto->show();

    //olioNosto->exec();
}

void Paasivu::on_pushButton_Peruuta_clicked()
{
   this->close();
}

