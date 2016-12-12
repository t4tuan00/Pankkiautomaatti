#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "taulukko.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    OlioTaulukko = new Taulukko;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete OlioTaulukko;
}

void MainWindow::on_pushButtonGET_clicked()
{
    OlioTaulukko->show();
}
