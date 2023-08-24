# UserChat
The chat app with login and registration forms created with C++ and SQL.
The login and registration forms serve as the gateway for users to access the app's features.

<p align = "center">
  <img src="https://github.com/Gongameros/UserChat/assets/113860048/2a73c535-da3c-4ceb-ad37-024b2b96e5b7" width="800" height="500"/>


  
  <img src="https://github.com/Gongameros/UserChat/assets/113860048/ceadb24e-5446-49b4-9f8a-72a7dc6dfac0" width="800" height="500"/>

  
</p>


***To start the app you need to connect database form.***

You are provided with a SQL file that you need to import into the Phpmyadmin database. This file has a structure that you will need to use.
To test the app, I suggest you use XAMPP, which will provide a MySQL local server for you.

## Database info
* 127.0.0.1 HostName
* 3307 Port
* appqt databaseName
* testuser Username
* testuser Password

If you have another data, you should change it yourself in sqlConnection.cpp and build the app yourself.

## Build
I used MinGW 6.4.2; if you want to use another version, you need to download pre-compiled dll files for MySQL.

***THERE YOU CAN FIND THE QMYSQL LIBRARY: https://github.com/thecodemonkey86/qt_mysql_driver/releases***


1. Start your QT Creator, and open .pro file in the client folder.<br />
2. Press the hammer button, and you are finally able to use the app.<br />
3. When you have an executable, you can delete all files in the build except that one.<br />
4. Then you should open .../QT/YOUR_VERSION/mingw_64/bin/windeployqt.exe with the executable you built before.<br />


<p align="center">
  <img src="https://github.com/Gongameros/UserChat/assets/113860048/d9c09e63-0086-4344-9fe8-46a89386a180" width="600" height="300"/>
</p>

