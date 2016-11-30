#include "paasivu.h"
#include "ui_paasivu.h"

Paasivu::Paasivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paasivu)
{
    ui->setupUi(this);
}

Paasivu::~Paasivu()
{
    delete ui;
}

void Paasivu::on_pushButtonSaldo_clicked()
{

}

void Paasivu::on_pushButtonNosto_clicked()
{

}

void Paasivu::on_pushButtonTilitapahtumat_clicked()
{

}

void Paasivu::on_pushButtonCancel_clicked()
{
   this->close();
}
