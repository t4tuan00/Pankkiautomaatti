#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <taulukko.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonGET_clicked();

private:
    Ui::MainWindow *ui;
    Taulukko*OlioTaulukko;
};

#endif // MAINWINDOW_H
