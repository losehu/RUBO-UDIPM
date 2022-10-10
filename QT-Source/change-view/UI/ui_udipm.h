/********************************************************************************
** Form generated from reading UI file 'udipm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDIPM_H
#define UI_UDIPM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UdipmWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UdipmWindow)
    {
        if (UdipmWindow->objectName().isEmpty())
            UdipmWindow->setObjectName("UdipmWindow");
        UdipmWindow->resize(800, 600);
        centralwidget = new QWidget(UdipmWindow);
        centralwidget->setObjectName("centralwidget");
        UdipmWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UdipmWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        UdipmWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UdipmWindow);
        statusbar->setObjectName("statusbar");
        UdipmWindow->setStatusBar(statusbar);

        retranslateUi(UdipmWindow);

        QMetaObject::connectSlotsByName(UdipmWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UdipmWindow)
    {
        UdipmWindow->setWindowTitle(QCoreApplication::translate("UdipmWindow", "RUBO UDIPM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdipmWindow: public Ui_UdipmWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDIPM_H
