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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UdipmWindow
{
public:
    QAction *back;
    QAction *exit;
    QAction *action;
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *text_y1;
    QLabel *label_width;
    QTextEdit *text_x3;
    QTextEdit *text_x4;
    QLabel *label_x4;
    QTextEdit *text_y2;
    QLabel *label_len;
    QLabel *label_y3;
    QTextEdit *text_high;
    QTextEdit *text_ysite;
    QTextEdit *text_width;
    QLabel *label_y4;
    QTextEdit *text_x2;
    QLabel *label_x3;
    QLabel *label_x1;
    QLabel *label_x2;
    QLabel *label_y1;
    QLabel *label_y2;
    QPushButton *button_ipm;
    QTextEdit *text_x1;
    QLabel *label_high;
    QPushButton *button_clear;
    QTextEdit *text_y4;
    QPushButton *button_openpic;
    QTextEdit *text_len;
    QLabel *label_ysite;
    QTextEdit *text_y3;
    QPushButton *button_opendir;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UdipmWindow)
    {
        if (UdipmWindow->objectName().isEmpty())
            UdipmWindow->setObjectName("UdipmWindow");
        UdipmWindow->resize(1200, 650);
        back = new QAction(UdipmWindow);
        back->setObjectName("back");
        exit = new QAction(UdipmWindow);
        exit->setObjectName("exit");
        action = new QAction(UdipmWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(UdipmWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 940, 600));
        text_y1 = new QTextEdit(centralwidget);
        text_y1->setObjectName("text_y1");
        text_y1->setGeometry(QRect(1130, 220, 60, 30));
        label_width = new QLabel(centralwidget);
        label_width->setObjectName("label_width");
        label_width->setGeometry(QRect(1000, 30, 91, 16));
        text_x3 = new QTextEdit(centralwidget);
        text_x3->setObjectName("text_x3");
        text_x3->setGeometry(QRect(1030, 320, 60, 30));
        text_x4 = new QTextEdit(centralwidget);
        text_x4->setObjectName("text_x4");
        text_x4->setGeometry(QRect(1030, 370, 60, 30));
        label_x4 = new QLabel(centralwidget);
        label_x4->setObjectName("label_x4");
        label_x4->setGeometry(QRect(1000, 380, 21, 16));
        text_y2 = new QTextEdit(centralwidget);
        text_y2->setObjectName("text_y2");
        text_y2->setGeometry(QRect(1130, 270, 60, 30));
        label_len = new QLabel(centralwidget);
        label_len->setObjectName("label_len");
        label_len->setGeometry(QRect(1000, 180, 141, 16));
        QFont font;
        font.setBold(false);
        label_len->setFont(font);
        label_y3 = new QLabel(centralwidget);
        label_y3->setObjectName("label_y3");
        label_y3->setGeometry(QRect(1100, 330, 21, 16));
        text_high = new QTextEdit(centralwidget);
        text_high->setObjectName("text_high");
        text_high->setGeometry(QRect(1100, 70, 60, 30));
        text_ysite = new QTextEdit(centralwidget);
        text_ysite->setObjectName("text_ysite");
        text_ysite->setGeometry(QRect(1100, 120, 60, 30));
        text_width = new QTextEdit(centralwidget);
        text_width->setObjectName("text_width");
        text_width->setGeometry(QRect(1100, 20, 60, 30));
        label_y4 = new QLabel(centralwidget);
        label_y4->setObjectName("label_y4");
        label_y4->setGeometry(QRect(1100, 380, 20, 20));
        text_x2 = new QTextEdit(centralwidget);
        text_x2->setObjectName("text_x2");
        text_x2->setGeometry(QRect(1030, 270, 60, 30));
        label_x3 = new QLabel(centralwidget);
        label_x3->setObjectName("label_x3");
        label_x3->setGeometry(QRect(1000, 330, 21, 16));
        label_x1 = new QLabel(centralwidget);
        label_x1->setObjectName("label_x1");
        label_x1->setGeometry(QRect(1000, 230, 21, 16));
        label_x2 = new QLabel(centralwidget);
        label_x2->setObjectName("label_x2");
        label_x2->setGeometry(QRect(1000, 280, 21, 16));
        label_y1 = new QLabel(centralwidget);
        label_y1->setObjectName("label_y1");
        label_y1->setGeometry(QRect(1100, 230, 21, 16));
        label_y2 = new QLabel(centralwidget);
        label_y2->setObjectName("label_y2");
        label_y2->setGeometry(QRect(1100, 280, 21, 16));
        button_ipm = new QPushButton(centralwidget);
        button_ipm->setObjectName("button_ipm");
        button_ipm->setGeometry(QRect(1050, 540, 93, 28));
        text_x1 = new QTextEdit(centralwidget);
        text_x1->setObjectName("text_x1");
        text_x1->setGeometry(QRect(1030, 220, 60, 30));
        label_high = new QLabel(centralwidget);
        label_high->setObjectName("label_high");
        label_high->setGeometry(QRect(1000, 80, 91, 16));
        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName("button_clear");
        button_clear->setGeometry(QRect(1050, 460, 93, 28));
        text_y4 = new QTextEdit(centralwidget);
        text_y4->setObjectName("text_y4");
        text_y4->setGeometry(QRect(1130, 370, 60, 30));
        button_openpic = new QPushButton(centralwidget);
        button_openpic->setObjectName("button_openpic");
        button_openpic->setGeometry(QRect(1050, 500, 93, 28));
        text_len = new QTextEdit(centralwidget);
        text_len->setObjectName("text_len");
        text_len->setGeometry(QRect(1100, 170, 60, 30));
        label_ysite = new QLabel(centralwidget);
        label_ysite->setObjectName("label_ysite");
        label_ysite->setGeometry(QRect(950, 130, 141, 16));
        text_y3 = new QTextEdit(centralwidget);
        text_y3->setObjectName("text_y3");
        text_y3->setGeometry(QRect(1130, 320, 60, 30));
        button_opendir = new QPushButton(centralwidget);
        button_opendir->setObjectName("button_opendir");
        button_opendir->setGeometry(QRect(1050, 420, 93, 28));
        UdipmWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UdipmWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        UdipmWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UdipmWindow);
        statusbar->setObjectName("statusbar");
        UdipmWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(back);
        menu->addAction(exit);

        retranslateUi(UdipmWindow);

        QMetaObject::connectSlotsByName(UdipmWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UdipmWindow)
    {
        UdipmWindow->setWindowTitle(QCoreApplication::translate("UdipmWindow", "RUBO UDIPM", nullptr));
        back->setText(QCoreApplication::translate("UdipmWindow", "\350\277\224\345\233\236", nullptr));
#if QT_CONFIG(shortcut)
        back->setShortcut(QCoreApplication::translate("UdipmWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("UdipmWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("UdipmWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action->setText(QCoreApplication::translate("UdipmWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("UdipmWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QString());
        label_width->setText(QCoreApplication::translate("UdipmWindow", "\347\273\223\346\236\234\345\233\276\345\256\275\345\272\246\357\274\232", nullptr));
        label_x4->setText(QCoreApplication::translate("UdipmWindow", "X4:", nullptr));
        label_len->setText(QCoreApplication::translate("UdipmWindow", "\346\226\271\345\275\242\345\203\217\347\264\240\350\276\271\351\225\277\357\274\232", nullptr));
        label_y3->setText(QCoreApplication::translate("UdipmWindow", "Y3:", nullptr));
        label_y4->setText(QCoreApplication::translate("UdipmWindow", "Y4:", nullptr));
        label_x3->setText(QCoreApplication::translate("UdipmWindow", "X3:", nullptr));
        label_x1->setText(QCoreApplication::translate("UdipmWindow", "X1:", nullptr));
        label_x2->setText(QCoreApplication::translate("UdipmWindow", "X2:", nullptr));
        label_y1->setText(QCoreApplication::translate("UdipmWindow", "Y1:", nullptr));
        label_y2->setText(QCoreApplication::translate("UdipmWindow", "Y2:", nullptr));
        button_ipm->setText(QCoreApplication::translate("UdipmWindow", "\351\200\217\350\247\206\345\217\230\346\215\242", nullptr));
        label_high->setText(QCoreApplication::translate("UdipmWindow", "\347\273\223\346\236\234\345\233\276\351\253\230\345\272\246\357\274\232", nullptr));
        button_clear->setText(QCoreApplication::translate("UdipmWindow", "\346\270\205\351\231\244", nullptr));
        button_openpic->setText(QCoreApplication::translate("UdipmWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        label_ysite->setText(QCoreApplication::translate("UdipmWindow", "\346\226\271\345\275\242\344\270\255\345\277\203\350\267\235\351\241\266\351\203\250\345\203\217\347\264\240\357\274\232", nullptr));
        button_opendir->setText(QCoreApplication::translate("UdipmWindow", "\346\240\207\345\256\232\345\233\276\350\267\257\345\276\204", nullptr));
        menu->setTitle(QCoreApplication::translate("UdipmWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdipmWindow: public Ui_UdipmWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDIPM_H
