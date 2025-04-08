/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(536, 598);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/logo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Login->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(Login);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo/logo.png")));
        label->setScaledContents(true);

        verticalLayout_4->addWidget(label);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        usernameLabel = new QLabel(Login);
        usernameLabel->setObjectName("usernameLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy);
        usernameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(Login);
        usernameLineEdit->setObjectName("usernameLineEdit");

        horizontalLayout_2->addWidget(usernameLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QString());
        usernameLabel->setText(QCoreApplication::translate("Login", "username:", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Join Chat Room", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("Login", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
