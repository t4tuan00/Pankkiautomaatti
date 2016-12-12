#include "taulukko.h"
#include "ui_taulukko.h"
#include <QTableView>
#include <QSqlQueryModel>


Taulukko::Taulukko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Taulukko)
{
    ui->setupUi(this);

}

Taulukko::~Taulukko()
{
    delete ui;

}

void Taulukko::on_pushButton_LOAD_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase ("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    bool ok = db.open();

       if(ok == 1)
       {
           qDebug("Connection ok");
       }
       else
       {
           qDebug("Connection not ok");
       }
       QSqlQueryModel * view = new QSqlQueryModel;

       QSqlQuery query;


       query.prepare("SELECT * FROM nosto");
       query.exec();
       view->setQuery(query);
       ui->tableView->setModel(view);

}
