#ifndef NOSTASUMMA_H
#define NOSTASUMMA_H

#include <QDialog>
#include "sqldll.h"


namespace Ui {
class NostaSumma;
}

class NostaSumma : public QDialog
{
    Q_OBJECT

public:
    explicit NostaSumma(QWidget *parent = 0);
    ~NostaSumma();
    SQLDLL *olioSumma;


private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Peruuta_clicked();

    void on_pushButton_Pyyhi_clicked();

    void on_pushButton_Ok_clicked();

private:
    Ui::NostaSumma *ui;
    QString painettu;

};

#endif // NOSTASUMMA_H
