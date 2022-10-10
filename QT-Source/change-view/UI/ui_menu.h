/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QRadioButton *radioButton_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName("MenuWindow");
        MenuWindow->resize(333, 222);
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName("centralwidget");
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(100, 10, 99, 20));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(100, 80, 99, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 130, 93, 28));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(100, 40, 99, 20));
        MenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 333, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuWindow);
        statusbar->setObjectName("statusbar");
        MenuWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QCoreApplication::translate("MenuWindow", "RUBO MENU", nullptr));
        radioButton->setText(QCoreApplication::translate("MenuWindow", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MenuWindow", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuWindow", "PushButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MenuWindow", "RadioButton", nullptr));
        menu->setTitle(QCoreApplication::translate("MenuWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
