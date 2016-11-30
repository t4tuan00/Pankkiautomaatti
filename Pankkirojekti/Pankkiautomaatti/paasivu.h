#ifndef PAASIVU_H
#define PAASIVU_H

#include <QDialog>



namespace Ui {
class Paasivu;
}

class Paasivu : public QDialog
{
    Q_OBJECT

public:
    explicit Paasivu(QWidget *parent = 0);
    ~Paasivu();

private slots:
    void on_pushButtonSaldo_clicked();

    void on_pushButtonNosto_clicked();

    void on_pushButtonTilitapahtumat_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::Paasivu *ui;
};

#endif // PAASIVU_H
