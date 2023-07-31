/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *HorLogForm;
    QSpacerItem *horizontalSpacer_4;
    QFrame *LogForm;
    QFormLayout *FillUpForm;
    QLabel *LoginLabel;
    QLineEdit *LoginTypeLine;
    QLabel *PasswordLabel;
    QLineEdit *PassTypeLine;
    QLabel *emailLabel;
    QLineEdit *emailTypeLine;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *SignUpbtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName("RegisterForm");
        RegisterForm->resize(720, 460);
        RegisterForm->setStyleSheet(QString::fromUtf8("#RegisterForm{\n"
"border-image: url(:/img/img/purple abstract paper.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(RegisterForm);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        HorLogForm = new QHBoxLayout();
        HorLogForm->setObjectName("HorLogForm");
        HorLogForm->setContentsMargins(-1, 10, -1, 10);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HorLogForm->addItem(horizontalSpacer_4);

        LogForm = new QFrame(RegisterForm);
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
        LoginTypeLine->setMaxLength(40);

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
        PassTypeLine->setMaxLength(40);
        PassTypeLine->setEchoMode(QLineEdit::Password);

        FillUpForm->setWidget(1, QFormLayout::FieldRole, PassTypeLine);

        emailLabel = new QLabel(LogForm);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setStyleSheet(QString::fromUtf8("color: black;"));

        FillUpForm->setWidget(2, QFormLayout::LabelRole, emailLabel);

        emailTypeLine = new QLineEdit(LogForm);
        emailTypeLine->setObjectName("emailTypeLine");
        emailTypeLine->setStyleSheet(QString::fromUtf8("background-color: white;"));
        emailTypeLine->setMaxLength(320);

        FillUpForm->setWidget(2, QFormLayout::FieldRole, emailTypeLine);


        HorLogForm->addWidget(LogForm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HorLogForm->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(HorLogForm);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SignUpbtn = new QPushButton(RegisterForm);
        SignUpbtn->setObjectName("SignUpbtn");
        SignUpbtn->setMinimumSize(QSize(110, 35));
        SignUpbtn->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 10px;\n"
"background-color: white;\n"
"color: black;"));

        horizontalLayout->addWidget(SignUpbtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QDialog *RegisterForm)
    {
        RegisterForm->setWindowTitle(QCoreApplication::translate("RegisterForm", "Register", nullptr));
        LoginLabel->setText(QCoreApplication::translate("RegisterForm", "Login:", nullptr));
#if QT_CONFIG(accessibility)
        LoginTypeLine->setAccessibleName(QCoreApplication::translate("RegisterForm", "LoginField", nullptr));
#endif // QT_CONFIG(accessibility)
        PasswordLabel->setText(QCoreApplication::translate("RegisterForm", "Password:", nullptr));
        emailLabel->setText(QCoreApplication::translate("RegisterForm", "Email:", nullptr));
        SignUpbtn->setText(QCoreApplication::translate("RegisterForm", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
