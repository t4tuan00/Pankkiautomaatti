#ifndef MUUSUMMAMUU_H
#define MUUSUMMAMUU_H

#include <QDialog>
#include <QTextEdit>
#include <QDebug>
#include <QString>

namespace Ui {
class MuuSummaMuu;
}

class MuuSummaMuu : public QDialog
{
    Q_OBJECT

public:
    explicit MuuSummaMuu(QWidget *parent = 0);
    ~MuuSummaMuu();
    QString palautasumma();

private slots:


    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_OK_clicked();

private:
    Ui::MuuSummaMuu *ui;
 public:
    QString painettu;
};

#endif // MUUSUMMAMUU_H
