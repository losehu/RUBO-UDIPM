/********************************************************************************
** Form generated from reading UI file 'udm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDM_H
#define UI_UDM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UdmWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_pic1;
    QLabel *label_tips;
    QPushButton *pushButton_opendir;
    QPushButton *pushButton_openpic;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UdmWindow)
    {
        if (UdmWindow->objectName().isEmpty())
            UdmWindow->setObjectName("UdmWindow");
        UdmWindow->resize(1091, 600);
        centralwidget = new QWidget(UdmWindow);
        centralwidget->setObjectName("centralwidget");
        label_pic1 = new QLabel(centralwidget);
        label_pic1->setObjectName("label_pic1");
        label_pic1->setGeometry(QRect(30, 10, 641, 481));
        label_tips = new QLabel(centralwidget);
        label_tips->setObjectName("label_tips");
        label_tips->setGeometry(QRect(10, 520, 811, 20));
        pushButton_opendir = new QPushButton(centralwidget);
        pushButton_opendir->setObjectName("pushButton_opendir");
        pushButton_opendir->setGeometry(QRect(900, 390, 93, 29));
        pushButton_openpic = new QPushButton(centralwidget);
        pushButton_openpic->setObjectName("pushButton_openpic");
        pushButton_openpic->setGeometry(QRect(900, 430, 93, 29));
        UdmWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UdmWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1091, 26));
        UdmWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UdmWindow);
        statusbar->setObjectName("statusbar");
        UdmWindow->setStatusBar(statusbar);

        retranslateUi(UdmWindow);

        QMetaObject::connectSlotsByName(UdmWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UdmWindow)
    {
        UdmWindow->setWindowTitle(QCoreApplication::translate("UdmWindow", "RUBO UDM", nullptr));
        label_pic1->setText(QString());
        label_tips->setText(QString());
        pushButton_opendir->setText(QCoreApplication::translate("UdmWindow", "\346\211\223\345\274\200\350\267\257\345\276\204", nullptr));
        pushButton_openpic->setText(QCoreApplication::translate("UdmWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdmWindow: public Ui_UdmWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDM_H
