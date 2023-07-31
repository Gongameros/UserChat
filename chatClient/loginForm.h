#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include <sqlConnection.h>
#include <QDebug>
#include <QMessageBox>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, QSqlDatabase* db = nullptr);
    ~MainWindow();

signals:
    void loginSuccessful();

private slots:
    void on_SignInbtn_clicked();

    void on_SignUpbtn_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase* db;

};
#endif // LOGINFORM_H
