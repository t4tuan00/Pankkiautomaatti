/*#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql>
#include "sqldll.h"

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = 0);
    ~Tilitapahtumat();

private slots:
    void on_pushButton_peruuta_clicked();

private:
    Ui::Tilitapahtumat *ui;
    QSqlTableModel *model;
    SQLDLL *oliotilitapahtumat;
};

#endif // TILITAPAHTUMAT_H
*/
