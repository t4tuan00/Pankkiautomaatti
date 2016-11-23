


QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("mysli.oamk.fi");
db.setDatabaseName("opisk_t4kial00");
db.setUserName("t4kial00");
db.setPassword("uKwfgYPEX2sct3Qw");
bool ok = db.open();

if(ok==true){
    qDebug() << "yhteys OK";

*/
