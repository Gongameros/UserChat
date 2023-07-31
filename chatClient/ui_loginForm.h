/********************************************************************************
** Form generated from reading UI file 'loginForm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *mainVertLay;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *VertLay;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *HorLogForm;
    QSpacerItem *horizontalSpacer_4;
    QFrame *LogForm;
    QFormLayout *FillUpForm;
    QLabel *LoginLabel;
    QLineEdit *LoginTypeLine;
    QLabel *PasswordLabel;
    QLineEdit *PassTypeLine;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *SubmitBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *SignInbtn;
    QPushButton *SignUpbtn;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(720, 460);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"border-image: url(:/img/img/purple abstract paper.png);\n"
"}"));
        mainVertLay = new QWidget(MainWindow);
        mainVertLay->setObjectName("mainVertLay");
        mainVertLay->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(mainVertLay);
        verticalLayout->setObjectName("verticalLayout");
        VertLay = new QVBoxLayout();
        VertLay->setObjectName("VertLay");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VertLay->addItem(verticalSpacer);

        HorLogForm = new QHBoxLayout();
        HorLogForm->setObjectName("HorLogForm");
        HorLogForm->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HorLogForm->addItem(horizontalSpacer_4);

        LogForm = new QFrame(mainVertLay);
        LogForm->setObjectName("LogForm");
        LogForm->setStyleSheet(QString::fromUtf8("#LogForm{\n"
"border: 1px solid black;\n"
"border-radius: 10px;\n"
"background-color: white;\n"
"}\n"
""));
        FillUpForm = new QFormLayout(LogForm);
        FillUpForm->setObjectName("FillUpForm");
        FillUpForm->setSizeConstraint(QLayout::SetDefaultConstraint);
        FillUpForm->setContentsMargins(25, 25, 25, 25);
        LoginLabel = new QLabel(LogForm);
        LoginLabel->setObjectName("LoginLabel");
        LoginLabel->setMinimumSize(QSize(40, 20));
        LoginLabel->setStyleSheet(QString::fromUtf8("color: black;"));

        FillUpForm->setWidget(0, QFormLayout::LabelRole, LoginLabel);

        LoginTypeLine = new QLineEdit(LogForm);
        LoginTypeLine->setObjectName("LoginTypeLine");
        LoginTypeLine->setMinimumSize(QSize(150, 25));
        LoginTypeLine->setStyleSheet(QString::fromUtf8("background-color: white;"));

        FillUpForm->setWidget(0, QFormLayout::FieldRole, LoginTypeLine);

        PasswordLabel = new QLabel(LogForm);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setMinimumSize(QSize(40, 20));
        PasswordLabel->setStyleSheet(QString::fromUtf8("color: black;"));

        FillUpForm->setWidget(1, QFormLayout::LabelRole, PasswordLabel);

        PassTypeLine = new QLineEdit(LogForm);
        PassTypeLine->setObjectName("PassTypeLine");
        PassTypeLine->setMinimumSize(QSize(150, 25));
        PassTypeLine->setStyleSheet(QString::fromUtf8("background-color: white;"));
        PassTypeLine->setEchoMode(QLineEdit::Password);

        FillUpForm->setWidget(1, QFormLayout::FieldRole, PassTypeLine);


        HorLogForm->addWidget(LogForm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HorLogForm->addItem(horizontalSpacer_3);


        VertLay->addLayout(HorLogForm);

        SubmitBox = new QHBoxLayout();
        SubmitBox->setObjectName("SubmitBox");
        SubmitBox->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SubmitBox->addItem(horizontalSpacer);

        SignInbtn = new QPushButton(mainVertLay);
        SignInbtn->setObjectName("SignInbtn");
        SignInbtn->setMinimumSize(QSize(150, 35));
        SignInbtn->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 10px;\n"
"background-color: white;\n"
"color: black;"));

        SubmitBox->addWidget(SignInbtn);

        SignUpbtn = new QPushButton(mainVertLay);
        SignUpbtn->setObjectName("SignUpbtn");
        SignUpbtn->setMinimumSize(QSize(110, 35));
        SignUpbtn->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 10px;\n"
"background-color: white;\n"
"color: black;"));

        SubmitBox->addWidget(SignUpbtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SubmitBox->addItem(horizontalSpacer_2);


        VertLay->addLayout(SubmitBox);


        verticalLayout->addLayout(VertLay);

        MainWindow->setCentralWidget(mainVertLay);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 720, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        LoginLabel->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
#if QT_CONFIG(accessibility)
        LoginTypeLine->setAccessibleName(QCoreApplication::translate("MainWindow", "LoginField", nullptr));
#endif // QT_CONFIG(accessibility)
        PasswordLabel->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        SignInbtn->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        SignUpbtn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
