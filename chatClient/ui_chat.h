/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QGridLayout *gridLayout;
    QPushButton *sendBtn;
    QTextBrowser *chatBrowser;
    QLineEdit *lineEdit;
    QPushButton *connectBtn;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(514, 364);
        Chat->setStyleSheet(QString::fromUtf8("#Chat{\n"
"border-image: url(:/img/img/purple abstract paper.png);\n"
"}"));
        gridLayout = new QGridLayout(Chat);
        gridLayout->setObjectName("gridLayout");
        sendBtn = new QPushButton(Chat);
        sendBtn->setObjectName("sendBtn");

        gridLayout->addWidget(sendBtn, 2, 1, 1, 1);

        chatBrowser = new QTextBrowser(Chat);
        chatBrowser->setObjectName("chatBrowser");

        gridLayout->addWidget(chatBrowser, 1, 0, 1, 2);

        lineEdit = new QLineEdit(Chat);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        connectBtn = new QPushButton(Chat);
        connectBtn->setObjectName("connectBtn");

        gridLayout->addWidget(connectBtn, 0, 0, 1, 2);


        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Chat", nullptr));
        sendBtn->setText(QCoreApplication::translate("Chat", "Send", nullptr));
        connectBtn->setText(QCoreApplication::translate("Chat", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
