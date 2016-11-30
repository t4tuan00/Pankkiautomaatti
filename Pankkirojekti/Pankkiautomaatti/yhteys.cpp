#include "yhteys.h"

void Yhteys::Connect(){
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

  // QSqlQuery query;
}
