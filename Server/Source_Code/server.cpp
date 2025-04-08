#include "server.h"

Server::Server()
{
    if (this->listen(QHostAddress::Any, 1212)) {
        qDebug() << "Start to listening server";
    }
    else {
       qDebug() << "An error occured!";
    }
}


void Server::incomingConnection(qintptr socketDescriptor){
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    qDebug() << "client connected" << socketDescriptor;
}


void Server::slotReadyRead(){
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if (in.status() == QDataStream::Ok) {
       qDebug() << "read...";
       QString str;
       in >> str;
       qDebug() << str;
       if (str.contains("USERNAME")) {
           if(usernames.contains(str.replace("USERNAME",""))){
                SendToClient("USERNAMEEXIST" + str.replace("USERNAME",""));
           }
           else{
               usernames.push_back(str.replace("USERNAME", ""));
               SendToClient("USERNAMESUCCESS" + str.replace("USERNAME",""));
           }
       }
       else if (str.contains("EXIT")) {
           for (int i = 0; i < usernames.size(); ++i) {
               if (usernames.at(i)  == str.replace("EXIT","")) {
                   usernames.removeAt(i);
               }
           }
            SendToClient("EXITUSER" + str.replace("EXIT",""));
       }
       else {
           SendToClient(str);
       }
    } else {
        qDebug() << "DataStream error";
    }
}


void Server::SendToClient(QString str){
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << str;
    for (int i = 0; i < Sockets.size(); ++i) {
       Sockets[i]->write(Data);
    }
}
