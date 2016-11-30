#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <QTextEdit>
#include "muusummamuu.h"
#include <QDateTime>
//#include <QVariant>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MuuSummaMuu * olioMuuSumma;
    QString uusisaldo;

private slots:
    void on_pushButton20_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_100_clicked();

    void on_pushButton_120_clicked();

    void on_pushButton_MUU_clicked();

    void on_pushButtonCANCEL_clicked();

    void on_pushButtonNAUTA_clicked();

private:
    Ui::MainWindow *ui;
    QString painettu;


};

#endif // MAINWINDOW_H
