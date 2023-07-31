#include "chat.h"
#include "ui_chat.h"
#include <iostream>

extern QString usernameOfClient;

Chat::Chat(QWidget *parent, QSqlDatabase* db) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    this->db = db;
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &Chat::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
}

Chat::~Chat()
{
    delete ui;
}

void Chat::sendToServer(QString str)
{
    data.clear();
    QDataStream out(&data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Version::Qt_6_4);
    QString mainStr = usernameOfClient +  ": " + str;
    out << mainStr;
    socket->write(data);
    ui->lineEdit->clear();
}

void Chat::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Version::Qt_6_4);
    if(in.status() == QDataStream::Ok)
    {
        QString str;
        in >> str;
        ui->chatBrowser->append(str);
    }

}

void Chat::on_connectBtn_clicked()
{
    socket->connectToHost("127.0.0.1", 2324);

}


void Chat::on_lineEdit_returnPressed()
{
    sendToServer(ui->lineEdit->text());
}


void Chat::on_sendBtn_clicked()
{
    sendToServer(ui->lineEdit->text());
}
