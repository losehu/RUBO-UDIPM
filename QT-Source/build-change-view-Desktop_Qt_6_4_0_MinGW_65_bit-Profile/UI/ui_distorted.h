/********************************************************************************
** Form generated from reading UI file 'distorted.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTORTED_H
#define UI_DISTORTED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DisWindow)
    {
        if (DisWindow->objectName().isEmpty())
            DisWindow->setObjectName("DisWindow");
        DisWindow->resize(800, 600);
        centralwidget = new QWidget(DisWindow);
        centralwidget->setObjectName("centralwidget");
        DisWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DisWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        DisWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DisWindow);
        statusbar->setObjectName("statusbar");
        DisWindow->setStatusBar(statusbar);

        retranslateUi(DisWindow);

        QMetaObject::connectSlotsByName(DisWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DisWindow)
    {
        DisWindow->setWindowTitle(QCoreApplication::translate("DisWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisWindow: public Ui_DisWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTORTED_H
