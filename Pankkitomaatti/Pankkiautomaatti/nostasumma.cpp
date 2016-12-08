#include "nostasumma.h"
#include "ui_nostasumma.h"

NostaSumma::NostaSumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NostaSumma)
{
    ui->setupUi(this);
    olioSumma = new SQLDLL;

}

NostaSumma::~NostaSumma()
{
    delete ui;
    delete olioSumma;

}

void NostaSumma::on_pushButton_1_clicked()
{
    painettu = painettu.append("1");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_2_clicked()
{
    painettu = painettu.append("2");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_3_clicked()
{
    painettu = painettu.append("3");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_4_clicked()
{
    painettu = painettu.append("4");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_5_clicked()
{
    painettu = painettu.append("5");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_6_clicked()
{
    painettu = painettu.append("6");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_7_clicked()
{
    painettu = painettu.append("7");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_8_clicked()
{
    painettu = painettu.append("1");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_9_clicked()
{
    painettu = painettu.append("9");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_0_clicked()
{
    painettu = painettu.append("0");
    ui->label->setText(painettu);
}

void NostaSumma::on_pushButton_Peruuta_clicked()
{
    this->close();
}

void NostaSumma::on_pushButton_Pyyhi_clicked()
{
    ui->label->setText("");
    painettu="";
}

void NostaSumma::on_pushButton_Ok_clicked()
{
    olioSumma->yhteys();
    olioSumma->syotettySumma(painettu);
    olioSumma->nostaMuuSumma();
    this->close();
}
