#include "server.h"

Server::Server()
{
    if(this->listen(QHostAddress::Any, 2324))
    {
        qDebug()<<"Started";
    }
    else
    {
        qDebug()<<"Error";
    }
}


void Server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
    Sockets.push_back(socket);
    qDebug()<<"Client connected";
}

void Server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Version::Qt_6_4);
    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "Read";
        QString str;
        in >> str;
        qDebug() << str;
        sendToClient(str);

    }
    else
    {
        qDebug()<<"Data stream error";
    }

}

void Server::sendToClient(QString str)
{
    data.clear();
    QDataStream out(&data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Version::Qt_6_4);
    out << str;
    for(int i = 0; i < Sockets.size(); i++)
    {
        Sockets[i]->write(data);
    }
}
