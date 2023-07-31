#include "loginForm.h"
#include "ui_loginForm.h"
#include "registerform.h"

extern QString usernameOfClient;
extern QString passwordOfClient;

MainWindow::MainWindow(QWidget *parent, QSqlDatabase *db)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->db = db;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignInbtn_clicked()
{
    QString username = ui->LoginTypeLine->text();
    QString password = ui->PassTypeLine->text();
    qDebug()<<username<<password;

    QString command = "SELECT * FROM user WHERE username = '" + username
            + "' AND password = '" + password + "';";
    QSqlQuery query(*db);
    if(query.exec(command))
    {
        if (query.size() > 0)
        {
            QMessageBox::information(this, "Login Success", "You have successfully logged in!");
            QString statusUpdate = "UPDATE `user` SET `status` = '1' WHERE `username` = '" +
                    username + "';";
            if(query.exec(statusUpdate))
            {
                usernameOfClient = username;
                passwordOfClient = password;
                emit loginSuccessful();
            }
            else
            {
                return;
            }


        }

        else
            QMessageBox::information(this, "Login Failed", "Login Failed. Please try again...");
    }
}


void MainWindow::on_SignUpbtn_clicked()
{
    RegisterForm regForm(nullptr, db);
    regForm.setModal(true);
    regForm.exec();
}

