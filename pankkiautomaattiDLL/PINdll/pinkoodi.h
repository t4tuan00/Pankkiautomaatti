#ifndef PINKOODI_H
#define PINKOODI_H

#include <QDialog>
#include <QString>
#include <QTextEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Pinkoodi;
}

class Pinkoodi : public QDialog
{
    Q_OBJECT

public:
    explicit Pinkoodi(QWidget *parent = 0);
    ~Pinkoodi();
    void syotettykortti(QString id);

    void pinTarkistus();


signals:
    void Pinsyotetty();

public slots:
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

    void on_pushButton_Peruuta_clicked();

    void on_pushButton_Pyyhi_clicked();

    void on_pushButton_Ok_clicked();

private:
    Ui::Pinkoodi *ui;
    QString painettu;
    QString tulostus;
    QSqlDatabase db;
    QString saatukortti;




};

#endif // PINKOODI_H
