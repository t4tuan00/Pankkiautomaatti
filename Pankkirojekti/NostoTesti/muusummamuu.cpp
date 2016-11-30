#include "muusummamuu.h"
#include "ui_muusummamuu.h"

MuuSummaMuu::MuuSummaMuu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuuSummaMuu)
{
    ui->setupUi(this);
}

MuuSummaMuu::~MuuSummaMuu()
{
    delete ui;
}



void MuuSummaMuu::on_pushButton_1_clicked()
{
    painettu = painettu.append("1");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_2_clicked()
{
    painettu = painettu.append("2");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_3_clicked()
{
    painettu = painettu.append("3");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_4_clicked()
{
    painettu = painettu.append("4");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_5_clicked()
{
    painettu = painettu.append("5");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_6_clicked()
{
    painettu = painettu.append("6");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_7_clicked()
{
    painettu = painettu.append("7");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_8_clicked()
{
    painettu = painettu.append("8");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_9_clicked()
{
    painettu = painettu.append("9");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_0_clicked()
{
    painettu = painettu.append("0");
    ui->label->setText(painettu);
}

void MuuSummaMuu::on_pushButton_cancel_clicked()
{
    this->close();
}

void MuuSummaMuu::on_pushButton_OK_clicked()
{
    //painettu;
    //qDebug() << ui->label->text();
    this->close();

}

QString MuuSummaMuu::palautasumma()
{
    return painettu;
}
