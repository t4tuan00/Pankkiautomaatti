#ifndef PIN_H
#define PIN_H

#include <QDialog>
#include <QString>
#include <QTextEdit>

#include <paasivu.h>
#include <yhteys.h>

namespace Ui {
class Pin;

}

class Pin : public QDialog
{
    Q_OBJECT

public:
    explicit Pin(QWidget *parent = 0);
    ~Pin();

private slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonCorrect_clicked();

    void on_pushButtonOk_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_miinus_clicked();

private:
    Ui::Pin *ui;
    Paasivu *uusiPaasivu;
    QString painettu;
    QString tulostus;
    Yhteys *uusiYhteys;
    Yhteys *uusiTarkistus;
   // Mainwindow *uusikortti;




};

#endif // PIN_H
