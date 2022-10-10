/********************************************************************************
** Form generated from reading UI file 'dpm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPM_H
#define UI_DPM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DpmWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DpmWindow)
    {
        if (DpmWindow->objectName().isEmpty())
            DpmWindow->setObjectName("DpmWindow");
        DpmWindow->resize(800, 600);
        centralwidget = new QWidget(DpmWindow);
        centralwidget->setObjectName("centralwidget");
        DpmWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DpmWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        DpmWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DpmWindow);
        statusbar->setObjectName("statusbar");
        DpmWindow->setStatusBar(statusbar);

        retranslateUi(DpmWindow);

        QMetaObject::connectSlotsByName(DpmWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DpmWindow)
    {
        DpmWindow->setWindowTitle(QCoreApplication::translate("DpmWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DpmWindow: public Ui_DpmWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPM_H
