
#ifndef NOSTO_H
#define NOSTO_H

#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql>
#include <QSqlTableModel>

#include <yhteys.h>

namespace Ui {
class Nosto;
}

class Nosto : public QMainWindow
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = 0);
    ~Nosto();

private slots:
    void on_pushButton_nosta20_clicked();

    void on_pushButton_nosta40_clicked();

    void on_pushButton_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButton_nosta90_clicked();

    void on_pushButton_nosta140_clicked();

    void on_pushButton_nosta240_clicked();

    void on_pushButton_nostasumma_clicked();

private:
    Ui::Nosto *ui;
    //QSqlTableModel *model;
    Yhteys *uusiYhteys;
    //QSqlDatabase db;
};

#endif // NOSTO_H

