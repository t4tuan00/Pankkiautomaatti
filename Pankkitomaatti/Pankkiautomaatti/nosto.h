#ifndef NOSTO_H
#define NOSTO_H

#include <QDialog>
#include "sqldll.h"
#include <nostasumma.h>
#include "pindll.h"

namespace Ui {
class Nosto;
}

class Nosto : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = 0);
    ~Nosto();



private slots:

    void on_pushButton_20_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_Peruuta_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_100_clicked();

    void on_pushButton_120_clicked();

    void on_pushButton_MuuSumma_clicked();

private:
    Ui::Nosto *ui;
    SQLDLL *olioNosta;
    NostaSumma *olioNostaSumma;


};

#endif // NOSTO_H
