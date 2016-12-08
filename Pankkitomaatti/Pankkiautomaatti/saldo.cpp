#include "saldo.h"
#include "ui_saldo.h"


Saldo::Saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
    olioSaldo = new SQLDLL;

}

Saldo::~Saldo()
{
    delete ui;
    delete olioSaldo;
}

void Saldo::on_pushButton_Perruuta_clicked()
{
    this->close();
}

void Saldo::naytaSaldo()
{
    olioSaldo->yhteys();
    QString palautettusaldo=olioSaldo->saldo();
    //qDebug()<<"tämä on saldo.cppn saldo"<< palautettusaldo;
    ui->label->setText(palautettusaldo);
}
