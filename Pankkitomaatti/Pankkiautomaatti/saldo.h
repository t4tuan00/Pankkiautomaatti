#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include "sqldll.h"

namespace Ui {
class Saldo;
}

class Saldo : public QDialog
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = 0);
    ~Saldo();
    void naytaSaldo();
    QString tulostasaldo;

private slots:
    void on_pushButton_Perruuta_clicked();

private:
    Ui::Saldo *ui;
    SQLDLL *olioSaldo;
};

#endif // SALDO_H
