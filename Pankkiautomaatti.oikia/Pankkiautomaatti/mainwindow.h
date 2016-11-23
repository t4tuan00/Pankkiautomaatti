#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSqlDatabase>
#include <QString>
#include <QDebug>

#include <pin.h>
#include <yhteys.h>

namespace Ui {
class Mainwindow;
}

class Mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainwindow(QWidget *parent = 0);
    ~Mainwindow();


private slots:

    void on_pushButtonCancel_clicked();

    void readData();

    void on_pushButtonConnect_clicked();


private:
    Ui::Mainwindow *ui;
    Pin *uusiPin;
    QSerialPort *serial;
    QSqlTableModel *model;
    //Yhteys *uusiYhteys;
    QSqlDatabase db;

};

#endif // MAINWINDOW_H
