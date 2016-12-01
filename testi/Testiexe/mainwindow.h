#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>


#include "pindll.h"
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
 void syotettykortti();

private slots:


    void on_pushButton_ok_clicked();

private:
    Ui::MainWindow *ui;
    Pinkoodi *olioPinsyotetty;
    PINdll *olioPinruutu;
    RFIDdll *olioRFID;
    QString kortti;





};

#endif // MAINWINDOW_H
