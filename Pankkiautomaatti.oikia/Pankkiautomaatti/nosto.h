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

private:
    Ui::Nosto *ui;
    QSqlTableModel *model;
    //Yhteys *uusiYhteys;
    QSqlDatabase db;
};

#endif // NOSTO_H
