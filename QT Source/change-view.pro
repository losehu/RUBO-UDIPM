#-------------------------------------------------
#
# Project created by QtCreator 2022-07-26T15:03:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = change-view
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    change-view.cpp \
    rubo_label.cpp

HEADERS += \
        mainwindow.h \
    change-view.h \
    rubo_label.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


INCLUDEPATH += C:\OPENCV\make-qt\install\include
C:\OPENCV\opencv\opencv\build\include\opencv2
C:\OPENCV\opencv\opencv\build\bin
LIBS += C:\OPENCV\make-qt\install\x64\mingw\bin\libopencv_*.dll
-lopencv_world401
-lopencv_world401d
LIBS += -lpthread libwsock32 libws2_32

#CONFIG += console



#可执行文件名称
TARGET="RUBO IPM"


#版本信息
VERSION = 1.0.0

#图标

#公司名称
QMAKE_TARGET_COMPANY = "RUBO"

#产品名称
QMAKE_TARGET_PRODUCT = "RUBO IPM"

#文件说明
QMAKE_TARGET_DESCRIPTION = "MADE BY RUBO"

#版权信息
QMAKE_TARGET_COPYRIGHT = "RUBO"

#中文（简体）
RC_LANG = 0x0004

RESOURCES += \
    rubo.qrc




RC_ICONS = RUBO1-tou.ico




