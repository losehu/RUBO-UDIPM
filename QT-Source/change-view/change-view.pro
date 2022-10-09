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
    mywindow.cpp \
    rubo_label.cpp

HEADERS += \
        mainwindow.h \
    change-view.h \
    mywindow.h \
    rubo_label.h \
    ty.h

FORMS += \
        mainwindow.ui \
        mywindow.ui
UI_DIR=./UI
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#INCLUDEPATH += /opt/homebrew/Cellar/opencv/4.6.0/include/opencv4/opencv2/
#INCLUDEPATH +=/opt/homebrew/Cellar/opencv/4.6.0/include/
#INCLUDEPATH += /opt/homebrew/Cellar/opencv/4.6.0/include/opencv4/
#LIBS += /opt/homebrew/Cellar/opencv/4.6.0/lib/libopencv_*



INCLUDEPATH +=C:\OPENCV\QT-BUILD\install\include
LIBS += C:\OPENCV\QT-BUILD\install\x64\mingw\lib\libopencv_*.a



#可执行文件名称
TARGET="RUBO IPM"


#版本信息
VERSION = 1.3.0

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




