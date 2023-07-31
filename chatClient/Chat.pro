QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    loginForm.cpp \
    main.cpp \
    registerform.cpp \
    sqlConnection.cpp

HEADERS += \
    chat.h \
    loginForm.h \
    registerform.h \
    sqlConnection.h

FORMS += \
    chat.ui \
    loginForm.ui \
    registerform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    BackgroundResource.qrc \
    Icon.qrc

RC_ICONS = img/icon.ico
