#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QTcpSocket>
#include "sqlConnection.h"

namespace Ui {
class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr, QSqlDatabase * db = nullptr);
    ~Chat();

private:
    Ui::Chat *ui;
    QSqlDatabase* db;
    QTcpSocket *socket;
    QByteArray data;
    void sendToServer(QString str);

public slots:
    void slotReadyRead();


private slots:
    void on_connectBtn_clicked();
    void on_lineEdit_returnPressed();
    void on_sendBtn_clicked();
};

#endif // CHAT_H
