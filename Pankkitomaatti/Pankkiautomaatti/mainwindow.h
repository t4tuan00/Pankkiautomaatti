#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <pinkoodi.h>
#include <QString>
#include <QDebug>

#include "rfiddll.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString kortti;


private slots:
    void on_pushButton_Ok_clicked();

private:
    Ui::MainWindow *ui;
    Pinkoodi *olioPinkoodi;
    RFIDDLL *olioRFID;

};

#endif // MAINWINDOW_H
