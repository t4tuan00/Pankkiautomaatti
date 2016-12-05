#include "pinkoodi.h"
#include "ui_pinkoodi.h"

pinKoodi::pinKoodi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinKoodi)
{
    ui->setupUi(this);
    olioPindll = new Pindll;
    olioRFID = new RFIDDll;
}

pinKoodi::~pinKoodi()
{
    delete ui;
    delete olioPindll;
    delete olioRFID;
}

void pinKoodi::syotetty(QString id)
{
    kortti = id;
    qDebug() <<"pinkoodin syotetty"<<kortti;
}


void pinKoodi::on_pushButtonPinOK_clicked()
{
    qDebug()<<"Painettupin pinkoodi cpp" << painettu;
    olioPindll->syotettykortti(kortti);
    olioPindll->syotettypin(painettu);
    olioPindll->pinTarkistus();
}

void pinKoodi::on_pushButton_1_clicked()
{
    painettu = painettu.append("1");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_2_clicked()
{
    painettu = painettu.append("2");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_3_clicked()
{
    painettu = painettu.append("3");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_4_clicked()
{
    painettu = painettu.append("4");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_5_clicked()
{
    painettu = painettu.append("5");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_6_clicked()
{
    painettu = painettu.append("6");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_7_clicked()
{
    painettu = painettu.append("7");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_8_clicked()
{
    painettu = painettu.append("8");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_9_clicked()
{
    painettu = painettu.append("9");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_0_clicked()
{
    painettu = painettu.append("0");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButton_minus_clicked()
{
    painettu = painettu.append("-");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}


void pinKoodi::on_pushButton_plus_clicked()
{
    painettu = painettu.append("+");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void pinKoodi::on_pushButtonPinPeruuta_clicked()
{
    this->close();
}

void pinKoodi::on_pushButtonPinPyyhi_clicked()
{
    ui->label->clear();
}
