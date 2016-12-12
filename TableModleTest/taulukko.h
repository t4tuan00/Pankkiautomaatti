#ifndef TAULUKKO_H
#define TAULUKKO_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>

namespace Ui {
class Taulukko;
}

class Taulukko : public QDialog
{
    Q_OBJECT

public:
    explicit Taulukko(QWidget *parent = 0);
    ~Taulukko();

private slots:
    void on_pushButton_LOAD_clicked();

private:
    Ui::Taulukko *ui;

};

#endif // TAULUKKO_H
