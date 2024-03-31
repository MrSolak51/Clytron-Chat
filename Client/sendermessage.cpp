#include "sendermessage.h"
#include "ui_sendermessage.h"

senderMessage::senderMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::senderMessage)
{
    ui->setupUi(this);
}

senderMessage::~senderMessage()
{
    delete ui;
}

void senderMessage::setMessage(QString msg){
    ui->messageLabel->setText(msg);
}

void senderMessage::setName(QString name){
    ui->usernameLabel->setText(name);
}
