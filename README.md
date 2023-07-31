# UserChat
The chat app with login and registration forms created with C++ and SQL.
The login and registration forms serve as the gateway for users to access the app's features.

A notable aspect of this project is that all executables were built by me.
***To start the app you need to connect database form.***

You are provided with a SQL file that you need to import into Phpmyadmin. This file has a structure that you will need to use.
To test the app I suggest you use XAMPP, which will provide a MySQL local server for you.

## Database info
* 127.0.0.1 HostName
* 3307 Port
* appqt databaseName
* testuser Username
* testuser Password

If you have another data, you should change it yourself in sqlConnection.cpp and build the app yourself.

## Build
I used MinGW 6.4.2, so you have to use it too.
Start your QT CREATOR, and open .pro file in the client folder.
Press the hammer button, and you are finally able to use the app.
