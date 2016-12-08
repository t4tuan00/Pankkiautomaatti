#ifndef PINKOODI_H
#define PINKOODI_H

#include <QDialog>
#include <paasivu.h>
#include "rfiddll.h"
#include "pindll.h"
#include <QDebug>
#include <QMessageBox>


namespace Ui {
class Pinkoodi;
}

class Pinkoodi : public QDialog
{
    Q_OBJECT

public:
    explicit Pinkoodi(QWidget *parent = 0);
    ~Pinkoodi();
    QString kortti;

    void syotetty(QString id);

private slots:
    void on_pushButton_Ok_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_Plus_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Miinus_clicked();

    void on_pushButton_Peruuta_clicked();

    void on_pushButton_Pyyhi_clicked();

private:
    Ui::Pinkoodi *ui;
    Paasivu *olioPaasivu;
    PinDLL *olioPindll;
    RFIDDLL *olioRFID;
    QString painettu;
    QString tulostus;

};

#endif // PINKOODI_H
