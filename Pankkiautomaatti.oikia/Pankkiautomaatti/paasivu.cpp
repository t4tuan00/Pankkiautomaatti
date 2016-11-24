#include "paasivu.h"
#include "ui_paasivu.h"

Paasivu::Paasivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paasivu)
{
    ui->setupUi(this);
    uusiNosto = new Nosto;

}

Paasivu::~Paasivu()
{
    delete ui;
    delete uusiNosto;

}

void Paasivu::on_pushButtonSaldo_clicked()
{
    uusiYhteys = new Yhteys;
    uusiYhteys->Connect();

    model = new QSqlTableModel(this);
    model->setTable("tili");
    model->select();
    ui->tableView->setModel(model);

}

void Paasivu::on_pushButtonNosto_clicked()
{
//rahan nosto
   //uusiYhteys = new Yhteys;
   //uusiYhteys->Connect();
    uusiNosto->show();
    //uusiNosto->exec();


}

void Paasivu::on_pushButtonTilitapahtumat_clicked()
{
    uusiYhteys = new Yhteys;
    uusiYhteys->Connect();

    model = new QSqlTableModel(this);
    model->setTable("nosto");
    model->select();
    ui->tableView->setModel(model);
}

void Paasivu::on_pushButtonCancel_clicked()
{
   this->close();
}


/* db = QSqlDatabase::addDatabase("QMYSQL");
 db.setHostName("mysli.oamk.fi");
 db.setDatabaseName("opisk_t4kial00");
 db.setUserName("t4kial00");
 db.setPassword("uKwfgYPEX2sct3Qw");
 db.open();
*/


//uusiNosto->show();
//uusiNosto->exec();
//this->setCentralWidget(ui->tableView);
