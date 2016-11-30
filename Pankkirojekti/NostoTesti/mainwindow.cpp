#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    olioMuuSumma = new MuuSummaMuu;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioMuuSumma;
}

void MainWindow::on_pushButton20_clicked()
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

           QSqlQuery query;
           query.exec("SELECT id_tili,saldo,id_asiakas FROM tili WHERE id_asiakas='7'");
           while(query.next()){
           QString saldo = query.value(1).toString();
           uusisaldo = saldo-20;
           //qDebug() << uusisaldo;
           }





                           /*query.prepare("UPDATE tili SET (id_tili, saldo, id_asiakas) Values (:id_tili, :saldo :id_asiakas)");
                           query.bindValue(":id_tili", 0);
                           query.bindValue(":saldo", uusisaldo);
                           query.bindValue(":id_asiakas", 7);*/


          //QSqlQuery query;


          //query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES( 'NULL', '20', 'DATE', '5', '2')");
}

void MainWindow::on_pushButton_40_clicked()
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
           QSqlQuery query;
             query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES( 'NULL', 40'', 'DATE', '5', '2')");
}

void MainWindow::on_pushButton_60_clicked()
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
           QSqlQuery query;
             query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES( 'NULL', '60', 'DATE', '5', '2')");
}

void MainWindow::on_pushButton_80_clicked()
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
           QSqlQuery query;
             query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES( 'NULL', '80', 'DATE', '5', '2')");
}

void MainWindow::on_pushButton_100_clicked()
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
           QSqlQuery query;
             query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES( 'NULL', '100', 'DATE', '5', '2')");

}

void MainWindow::on_pushButton_120_clicked()
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
           QSqlQuery query;
             query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES( 'NULL', '120', 'DATE', '5', '2')");
}

void MainWindow::on_pushButton_MUU_clicked()
{

        olioMuuSumma->show();
}

void MainWindow::on_pushButtonCANCEL_clicked()
{
    this->close();
}

void MainWindow::on_pushButtonNAUTA_clicked()
{
    QString painettu = olioMuuSumma->palautasumma();
    qDebug() << painettu;
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
       QSqlQuery query;
         query.prepare("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES(:idnosto, :amount, NOW(), :id_tili, :id_automaatti)");
         query.bindValue(":idnosto", 0);
         query.bindValue(":amount", painettu);
         query.bindValue(":id_tili", 5);
         query.bindValue(":id_automaatti", 2);
         query.exec();

}
