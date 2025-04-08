/********************************************************************************
** Form generated from reading UI file 'sendermessage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDERMESSAGE_H
#define UI_SENDERMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_senderMessage
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *usernameLabel;
    QLabel *messageLabel;

    void setupUi(QWidget *senderMessage)
    {
        if (senderMessage->objectName().isEmpty())
            senderMessage->setObjectName("senderMessage");
        senderMessage->resize(263, 126);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(senderMessage->sizePolicy().hasHeightForWidth());
        senderMessage->setSizePolicy(sizePolicy);
        senderMessage->setLayoutDirection(Qt::RightToLeft);
        senderMessage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(senderMessage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(senderMessage);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	background-color: rgb(60, 255, 0);\n"
"	border:none;\n"
"	border-radius:10px;\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName("usernameLabel");
        sizePolicy1.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy1);
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:gray;\n"
"}"));
        usernameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        usernameLabel->setWordWrap(true);

        verticalLayout->addWidget(usernameLabel);

        messageLabel = new QLabel(groupBox);
        messageLabel->setObjectName("messageLabel");
        sizePolicy1.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy1);
        messageLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:black;\n"
"}"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        messageLabel->setWordWrap(true);

        verticalLayout->addWidget(messageLabel);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(senderMessage);

        QMetaObject::connectSlotsByName(senderMessage);
    } // setupUi

    void retranslateUi(QWidget *senderMessage)
    {
        senderMessage->setWindowTitle(QCoreApplication::translate("senderMessage", "Form", nullptr));
        groupBox->setTitle(QString());
        usernameLabel->setText(QString());
        messageLabel->setText(QCoreApplication::translate("senderMessage", "message message message message message message message message message message message message message message message message message message ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class senderMessage: public Ui_senderMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDERMESSAGE_H
