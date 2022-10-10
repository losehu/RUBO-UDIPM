/********************************************************************************
** Form generated from reading UI file 'MenuWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MENU_H
#define MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QRadioButton *radioButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QString::fromUtf8("MenuWindow"));
        MenuWindow->resize(800, 400);
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(170, 30, 99, 20));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 130, 99, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 10, 100, 32));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(50, 90, 26, 22));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(250, 100, 99, 20));
        MenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuWindow->setStatusBar(statusbar);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QCoreApplication::translate("MenuWindow", "IpmWindow", nullptr));
        radioButton->setText(QCoreApplication::translate("MenuWindow", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MenuWindow", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuWindow", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("MenuWindow", "...", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MenuWindow", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MENU_H
