#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QString username, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 1212);

    this->userSucc = false;
    this->username = username;
    SendToServer("USERNAME" + this->username);

    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent (QCloseEvent *event)
{
    SendToServer("EXIT" + this->username);
}

void MainWindow::on_sendMessagePushButton_clicked()
{


    QListWidgetItem *messageItem = new QListWidgetItem();
    auto w = new senderMessage();
    QString message_ = ui->inputMessageLineEdit->text();
    w->setMessage(message_);
    w->setName("you");
    messageItem->setSizeHint(w->size());

    ui->messages->addItem(messageItem);
    ui->messages->setItemWidget(messageItem, w);

    QString plaintext = ui->inputMessageLineEdit->text();

    SendToServer(username + ": " + plaintext);
    ui->inputMessageLineEdit->clear();
}
void MainWindow::SendToServer(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << str;
    socket->write(Data);
}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if (in.status() == QDataStream::Ok) {
       QString str;
       in >> str;
       qDebug() << str;
       if (str.contains("USERNAMEEXIST") && !this->userSucc) {
           QMessageBox messageBox;
           messageBox.critical(0,"Error","Username Exist!");
           messageBox.setFixedSize(500,200);
           QApplication::quit();
       }
       else if (str.contains("USERNAMESUCCESS") && str.contains(this->username)) {
           this->userSucc = true;
           this->setWindowTitle(this->username);
       }
       else if (str.contains("USERNAMESUCCESS") && !str.contains(this->username)) {
           QListWidgetItem *messageItem = new QListWidgetItem("server: " + str.replace("USERNAMESUCCESS", "") + " joined the group!");
           messageItem->setTextAlignment(Qt::AlignCenter);
           ui->messages->insertItem(ui->messages->count(), messageItem);
       }
       else if (str.contains("EXITUSER") && !str.contains(this->username)) {
           QListWidgetItem *messageItem = new QListWidgetItem("server: " + str.replace("EXITUSER", "") + " left the group!");
           messageItem->setTextAlignment(Qt::AlignCenter);
           ui->messages->insertItem(ui->messages->count(), messageItem);
       }
       else if (str.contains("EXITUSER") && str.contains(this->username)) {
           QApplication::quit();
           close();
       }
       else{
           if (!str.contains(username + ": ")) {
               QListWidgetItem *messageItem = new QListWidgetItem();
               auto w = new recevierMessage();
               w->setName(str.replace(username + ": ", ""));
               QString message_ = "";
               QString name = "";
               bool a = false;
               for (int var = 0; var < str.size(); ++var) {
                   if (str.at(var) == ':') {
                       a = true;
                   }
                   else{
                       if (a) {
                           message_ += str.at(var);
                       }else{
                           name += str.at(var);
                       }
                   }
               }

               w->setMessage(message_);
               w->setName(name);
               messageItem->setSizeHint(w->sizeHint());


               ui->messages->addItem(messageItem);
               ui->messages->setItemWidget(messageItem, w);
           }
       }
    }
    else{
        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

