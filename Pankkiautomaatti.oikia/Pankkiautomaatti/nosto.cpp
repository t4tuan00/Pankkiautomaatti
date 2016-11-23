#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);
   // uusiYhteys = new Yhteys;
   // uusiYhteys->Connect();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();

    model = new QSqlTableModel(this);
    model->setTable("asiakas");
    model->select();
    ui->tableView->setModel(model);

}

Nosto::~Nosto()
{
    delete ui;
   // delete uusiYhteys;
    db.close();
}
