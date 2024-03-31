/********************************************************************************
** Form generated from reading UI file 'receviermessage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEVIERMESSAGE_H
#define UI_RECEVIERMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recevierMessage
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *usernameLabel;
    QLabel *messageLabel;

    void setupUi(QWidget *recevierMessage)
    {
        if (recevierMessage->objectName().isEmpty())
            recevierMessage->setObjectName(QString::fromUtf8("recevierMessage"));
        recevierMessage->resize(263, 126);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recevierMessage->sizePolicy().hasHeightForWidth());
        recevierMessage->setSizePolicy(sizePolicy);
        recevierMessage->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border:none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(recevierMessage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(recevierMessage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	background-color: rgb(0, 115, 255);\n"
"	border:none;\n"
"	border-radius:10px;\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        sizePolicy1.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy1);
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:gray;\n"
"}"));
        usernameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        usernameLabel->setWordWrap(true);

        verticalLayout->addWidget(usernameLabel);

        messageLabel = new QLabel(groupBox);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        sizePolicy1.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy1);
        messageLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:black;\n"
"}"));
        messageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        messageLabel->setWordWrap(true);

        verticalLayout->addWidget(messageLabel);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(recevierMessage);

        QMetaObject::connectSlotsByName(recevierMessage);
    } // setupUi

    void retranslateUi(QWidget *recevierMessage)
    {
        recevierMessage->setWindowTitle(QCoreApplication::translate("recevierMessage", "Form", nullptr));
        groupBox->setTitle(QString());
        usernameLabel->setText(QString());
        messageLabel->setText(QCoreApplication::translate("recevierMessage", "message message message message message message message message message message message message message message message message message message ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recevierMessage: public Ui_recevierMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEVIERMESSAGE_H
