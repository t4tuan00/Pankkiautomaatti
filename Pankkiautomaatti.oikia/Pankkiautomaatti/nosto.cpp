
#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);

}

Nosto::~Nosto()
{
    delete ui;

}


void Nosto::on_pushButton_nosta20_clicked()
{

}

void Nosto::on_pushButton_nosta40_clicked()
{

}

void Nosto::on_pushButton_clicked()
{

}


void Nosto::on_pushButton_nosta90_clicked()
{

}

void Nosto::on_pushButton_nosta140_clicked()
{

}

void Nosto::on_pushButton_nosta240_clicked()
{

}

void Nosto::on_pushButton_nostasumma_clicked()
{

}
void Nosto::on_pushButton_Cancel_clicked()
{
  this->close();
}
