#ifndef REGISTERFORM_H
#define REGISTERFORM_H

#include <QDialog>
#include <sqlConnection.h>
#include <QString>
#include <QMessageBox>

namespace Ui {
class RegisterForm;
}

class RegisterForm : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterForm(QWidget *parent = nullptr, QSqlDatabase *db = nullptr);
    ~RegisterForm();

private slots:
    void on_SignUpbtn_clicked();

private:
    Ui::RegisterForm *ui;
    QSqlDatabase *db;
};

#endif // REGISTERFORM_H
