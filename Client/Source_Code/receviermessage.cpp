#include "receviermessage.h"
#include "ui_receviermessage.h"

recevierMessage::recevierMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recevierMessage)
{
    ui->setupUi(this);
}

recevierMessage::~recevierMessage()
{
    delete ui;
}

void recevierMessage::setMessage(QString msg){
    ui->messageLabel->setText(msg);
}

void recevierMessage::setName(QString name){
    ui->usernameLabel->setText(name);
}
