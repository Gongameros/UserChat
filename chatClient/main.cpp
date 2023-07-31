#include "loginForm.h"
#include "sqlConnection.h"
#include <QApplication>
#include "Chat.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    initializeDB();
    MainWindow loginWindow(nullptr, &db);
    Chat chat(nullptr, &db);
    loginWindow.show();
    QObject::connect(&loginWindow, &MainWindow::loginSuccessful, &loginWindow, &QMainWindow::close);
    QObject::connect(&loginWindow, &MainWindow::loginSuccessful, &chat, &QMainWindow::show);

    return a.exec();
}
