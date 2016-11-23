#include "paasivu.h"
#include "ui_paasivu.h"

Paasivu::Paasivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paasivu)
{
    ui->setupUi(this);
    uusiNosto = new Nosto;

}

Paasivu::~Paasivu()
{
    delete ui;
    delete uusiNosto;

}

void Paasivu::on_pushButtonSaldo_clicked()
{

}

void Paasivu::on_pushButtonNosto_clicked()
{
    uusiNosto->show();
    //uusiNosto->exec();
}

void Paasivu::on_pushButtonTilitapahtumat_clicked()
{

}

void Paasivu::on_pushButtonCancel_clicked()
{
   this->close();
}
