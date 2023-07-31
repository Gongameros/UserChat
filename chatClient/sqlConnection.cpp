#include "sqlConnection.h"
#include <QMessageBox>

QSqlDatabase db;

QString usernameOfClient;
QString passwordOfClient;
const static QString hostName = "127.0.0.1";
const static int port = 3307;
const static QString databaseName = "appqt";
const static QString username = "testuser";
const static QString password = "testuser";

/* QMYSQL
 * 127.0.0.1 HostName
 * 3307 Port
 * appqt databaseName
 * testuser Username
 * testuser Password
*/

void initializeDB()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostName);
    db.setPort(port);
    db.setDatabaseName(databaseName);
    db.setUserName(username);
    db.setPassword(password);

    if(db.open())
        qDebug() << "Connected";

    else
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Failed to connect SQL");
        messageBox.setFixedSize(500,200);
    }
}

