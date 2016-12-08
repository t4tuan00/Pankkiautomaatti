/*#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);
    oliotilitapahtumat = new SQLDLL;
    oliotilitapahtumat->yhteys();

    model = new QSqlTableModel(this);
    model->setTable("nosto");
    model->select();

    ui->tableView->setModel(model);

}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
}

void Tilitapahtumat::on_pushButton_peruuta_clicked()
{
    this->close();
}

*/
