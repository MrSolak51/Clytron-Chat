#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    if (!ui->usernameLineEdit->text().isEmpty()) {
        this->hide();
        MainWindow *m = new MainWindow(ui->usernameLineEdit->text() ,this);
        m->show();
    }else{
        QMessageBox messageBox;
        messageBox.critical(0,"Error","There are empty space!");
        messageBox.setFixedSize(500,200);
    }
}

