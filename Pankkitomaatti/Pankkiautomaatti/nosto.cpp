#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
    olioNosta = new SQLDLL;
    olioNostaSumma = new NostaSumma;

}

Nosto::~Nosto()
{
    delete ui;
    delete olioNosta;
    delete olioNostaSumma;
}


void Nosto::on_pushButton_20_clicked()
{
    olioNosta->yhteys();
    olioNosta->nosta20();
}

void Nosto::on_pushButton_40_clicked()
{
    olioNosta->yhteys();
    olioNosta->nosta40();
}

void Nosto::on_pushButton_60_clicked()
{
    olioNosta->yhteys();
    olioNosta->nosta60();
}


void Nosto::on_pushButton_80_clicked()
{
    olioNosta->yhteys();
    olioNosta->nosta80();
}

void Nosto::on_pushButton_100_clicked()
{
    olioNosta->yhteys();
    olioNosta->nosta100();
}

void Nosto::on_pushButton_120_clicked()
{
    olioNosta->yhteys();
    olioNosta->nosta120();
}

void Nosto::on_pushButton_MuuSumma_clicked()
{
 olioNostaSumma->show();
}
void Nosto::on_pushButton_Peruuta_clicked()
{
    this->close();
}
