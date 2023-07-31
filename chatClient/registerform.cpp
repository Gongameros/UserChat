#include "registerform.h"
#include "ui_registerform.h"

RegisterForm::RegisterForm(QWidget *parent, QSqlDatabase *db) :
    QDialog(parent),
    ui(new Ui::RegisterForm)
{
    ui->setupUi(this);
    this->db = db;
}

RegisterForm::~RegisterForm()
{
    delete ui;
}

void RegisterForm::on_SignUpbtn_clicked()
{

    QString login = ui->LoginTypeLine->text();
    QString password = ui->PassTypeLine->text();
    QString email = ui->emailTypeLine->text();

    if(login.isEmpty())
    {
        QMessageBox::information(this, "Invalid Login.", "Login field is empty!");
        return;
    }

    if(password.length() < 8 || password.isEmpty() || password.isLower())
    {
        QMessageBox::information(this, "Invalid Password.", "Invalid password input!");
        return;
    }

    if(email.isEmpty() || !(email.contains('@')))
    {
        QMessageBox::information(this, "Invalid Email.", "Email field is filled incorrect!");
        return;
    }


    QSqlQuery query(*db);

    QString commandRecieveLogin = "SELECT * FROM `user` WHERE username = '" +login + "'" + "; ";
    QString commandRecieveEmail = "SELECT * FROM `user` WHERE username = '" + email + "'" + "; ";

    if(query.exec(commandRecieveLogin))
    {
        if(query.size() > 0)
        {
            QMessageBox::information(this, "Invalid Login.", "This login is already used!");
            return;
        }
    }
    else
    {
        qDebug()<<"Forms is not checked right!";
        return;
    }

    if(query.exec(commandRecieveEmail))
    {
        if(query.size() > 0)
        {
            QMessageBox::information(this, "Invalid email.", "This email is already used!");
            return;
        }
    }
    else
    {
        qDebug()<<"Forms is not checked right!";
        return;
    }

    QString command = "INSERT INTO `user` (id, timestamp, email, username, password, status) "
                      "VALUES (:id, :timestamp, :email, :username, :password, :status);";


    query.prepare(command);
    query.bindValue(":id","NULL");
    query.bindValue(":timestamp", "current_timestamp()");
    query.bindValue(":email", email);
    query.bindValue(":username", login);
    query.bindValue(":password", password);
    query.bindValue(":status", 0);


    if(query.exec())
    {
        QMessageBox::information(this, "Register", "You have successfully signed in!");
        this->close();
    }

    else
    {
        QMessageBox::warning(this, "Register", "Register Failed. Please try again...");
        return;
    }

}




