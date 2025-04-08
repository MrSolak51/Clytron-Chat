/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *sendMessagePushButton;
    QLineEdit *inputMessageLineEdit;
    QListWidget *messages;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(601, 634);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/logo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        sendMessagePushButton = new QPushButton(centralwidget);
        sendMessagePushButton->setObjectName("sendMessagePushButton");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MailSend));
        sendMessagePushButton->setIcon(icon1);

        gridLayout_2->addWidget(sendMessagePushButton, 0, 1, 1, 1);

        inputMessageLineEdit = new QLineEdit(centralwidget);
        inputMessageLineEdit->setObjectName("inputMessageLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputMessageLineEdit->sizePolicy().hasHeightForWidth());
        inputMessageLineEdit->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(inputMessageLineEdit, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        messages = new QListWidget(centralwidget);
        messages->setObjectName("messages");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messages->sizePolicy().hasHeightForWidth());
        messages->setSizePolicy(sizePolicy1);
        messages->setStyleSheet(QString::fromUtf8(""));
        messages->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        messages->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        messages->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustIgnored);
        messages->setAutoScroll(true);
        messages->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        messages->setProperty("isWrapping", QVariant(false));
        messages->setUniformItemSizes(false);

        gridLayout_3->addWidget(messages, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 601, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Chat", nullptr));
        sendMessagePushButton->setText(QString());
#if QT_CONFIG(shortcut)
        sendMessagePushButton->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        inputMessageLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Message...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
