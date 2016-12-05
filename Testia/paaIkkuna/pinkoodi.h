#ifndef PINKOODI_H
#define PINKOODI_H

#include <QDialog>
#include "pindll.h"
#include "rfiddll.h"
#include <QDebug>


namespace Ui {
class pinKoodi;
}

class pinKoodi : public QDialog
{
    Q_OBJECT

public:
    explicit pinKoodi(QWidget *parent = 0);
    ~pinKoodi();
    QString kortti;
    void syotetty(QString id);

private slots:
    void on_pushButtonPinOK_clicked();



    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButtonPinPeruuta_clicked();

    void on_pushButtonPinPyyhi_clicked();

private:
    Ui::pinKoodi *ui;
    Pindll *olioPindll;
    RFIDDll *olioRFID;
    QString painettu;
    QString tulostus;


};

#endif // PINKOODI_H
