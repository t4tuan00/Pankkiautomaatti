#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "pinkoodi.h"
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
    void on_pushButtonOK_clicked();

private:
    Ui::MainWindow *ui;
    pinKoodi *olioPinkoodi;
    RFIDDll *olioRFID;
    Pindll *olioPinDll;
};

#endif // MAINWINDOW_H
