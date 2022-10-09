/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef IPM_H
#define IPM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <rubo_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open;
    QAction *about;
    QAction *action_2;
    QWidget *centralWidget;
    QPushButton *button_openpic;
    QPushButton *button_change;
    QTextEdit *text_high;
    QLabel *label_high;
    QLabel *label_ysite;
    QTextEdit *text_ysite;
    QTextEdit *text_width;
    QLabel *label_width;
    QLabel *label_len;
    QTextEdit *text_len;
    QLabel *label_x1;
    QLabel *label_y1;
    QTextEdit *text_x1;
    QTextEdit *text_y1;
    QTextEdit *text_y2;
    QTextEdit *text_x2;
    QTextEdit *text_x3;
    QTextEdit *text_x4;
    QTextEdit *text_y3;
    QTextEdit *text_y4;
    QLabel *label_x2;
    QLabel *label_x3;
    QLabel *label_x4;
    QLabel *label_y2;
    QLabel *label_y3;
    QLabel *label_y4;
    myLabel *label_pic1;
    QPushButton *button_clear;
    QLabel *label_tips;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu_doc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 650);
        MainWindow->setStyleSheet(QString::fromUtf8("QToolBar{border-color: rgb(0, 0, 0);border:1px solid;}"));
        MainWindow->setDocumentMode(true);
        open = new QAction(MainWindow);
        open->setObjectName(QString::fromUtf8("open"));
        about = new QAction(MainWindow);
        about->setObjectName(QString::fromUtf8("about"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        button_openpic = new QPushButton(centralWidget);
        button_openpic->setObjectName(QString::fromUtf8("button_openpic"));
        button_openpic->setGeometry(QRect(1050, 460, 93, 28));
        button_change = new QPushButton(centralWidget);
        button_change->setObjectName(QString::fromUtf8("button_change"));
        button_change->setGeometry(QRect(1050, 500, 93, 28));
        text_high = new QTextEdit(centralWidget);
        text_high->setObjectName(QString::fromUtf8("text_high"));
        text_high->setGeometry(QRect(1100, 70, 60, 30));
        label_high = new QLabel(centralWidget);
        label_high->setObjectName(QString::fromUtf8("label_high"));
        label_high->setGeometry(QRect(1000, 80, 91, 16));
        label_ysite = new QLabel(centralWidget);
        label_ysite->setObjectName(QString::fromUtf8("label_ysite"));
        label_ysite->setGeometry(QRect(950, 130, 141, 16));
        text_ysite = new QTextEdit(centralWidget);
        text_ysite->setObjectName(QString::fromUtf8("text_ysite"));
        text_ysite->setGeometry(QRect(1100, 120, 60, 30));
        text_width = new QTextEdit(centralWidget);
        text_width->setObjectName(QString::fromUtf8("text_width"));
        text_width->setGeometry(QRect(1100, 20, 60, 30));
        label_width = new QLabel(centralWidget);
        label_width->setObjectName(QString::fromUtf8("label_width"));
        label_width->setGeometry(QRect(1000, 30, 91, 16));
        label_len = new QLabel(centralWidget);
        label_len->setObjectName(QString::fromUtf8("label_len"));
        label_len->setGeometry(QRect(1000, 180, 141, 16));
        text_len = new QTextEdit(centralWidget);
        text_len->setObjectName(QString::fromUtf8("text_len"));
        text_len->setGeometry(QRect(1100, 170, 60, 30));
        label_x1 = new QLabel(centralWidget);
        label_x1->setObjectName(QString::fromUtf8("label_x1"));
        label_x1->setGeometry(QRect(1000, 230, 21, 16));
        label_y1 = new QLabel(centralWidget);
        label_y1->setObjectName(QString::fromUtf8("label_y1"));
        label_y1->setGeometry(QRect(1100, 230, 21, 16));
        text_x1 = new QTextEdit(centralWidget);
        text_x1->setObjectName(QString::fromUtf8("text_x1"));
        text_x1->setGeometry(QRect(1030, 220, 60, 30));
        text_y1 = new QTextEdit(centralWidget);
        text_y1->setObjectName(QString::fromUtf8("text_y1"));
        text_y1->setGeometry(QRect(1130, 220, 60, 30));
        text_y2 = new QTextEdit(centralWidget);
        text_y2->setObjectName(QString::fromUtf8("text_y2"));
        text_y2->setGeometry(QRect(1130, 270, 60, 30));
        text_x2 = new QTextEdit(centralWidget);
        text_x2->setObjectName(QString::fromUtf8("text_x2"));
        text_x2->setGeometry(QRect(1030, 270, 60, 30));
        text_x3 = new QTextEdit(centralWidget);
        text_x3->setObjectName(QString::fromUtf8("text_x3"));
        text_x3->setGeometry(QRect(1030, 320, 60, 30));
        text_x4 = new QTextEdit(centralWidget);
        text_x4->setObjectName(QString::fromUtf8("text_x4"));
        text_x4->setGeometry(QRect(1030, 370, 60, 30));
        text_y3 = new QTextEdit(centralWidget);
        text_y3->setObjectName(QString::fromUtf8("text_y3"));
        text_y3->setGeometry(QRect(1130, 320, 60, 30));
        text_y4 = new QTextEdit(centralWidget);
        text_y4->setObjectName(QString::fromUtf8("text_y4"));
        text_y4->setGeometry(QRect(1130, 370, 60, 30));
        label_x2 = new QLabel(centralWidget);
        label_x2->setObjectName(QString::fromUtf8("label_x2"));
        label_x2->setGeometry(QRect(1000, 280, 21, 16));
        label_x3 = new QLabel(centralWidget);
        label_x3->setObjectName(QString::fromUtf8("label_x3"));
        label_x3->setGeometry(QRect(1000, 330, 21, 16));
        label_x4 = new QLabel(centralWidget);
        label_x4->setObjectName(QString::fromUtf8("label_x4"));
        label_x4->setGeometry(QRect(1000, 380, 21, 16));
        label_y2 = new QLabel(centralWidget);
        label_y2->setObjectName(QString::fromUtf8("label_y2"));
        label_y2->setGeometry(QRect(1100, 280, 21, 16));
        label_y3 = new QLabel(centralWidget);
        label_y3->setObjectName(QString::fromUtf8("label_y3"));
        label_y3->setGeometry(QRect(1100, 330, 21, 16));
        label_y4 = new QLabel(centralWidget);
        label_y4->setObjectName(QString::fromUtf8("label_y4"));
        label_y4->setGeometry(QRect(1100, 380, 20, 20));
        label_pic1 = new myLabel(centralWidget);
        label_pic1->setObjectName(QString::fromUtf8("label_pic1"));
        label_pic1->setGeometry(QRect(0, 0, 940, 600));
        label_pic1->setTextFormat(Qt::PlainText);
        button_clear = new QPushButton(centralWidget);
        button_clear->setObjectName(QString::fromUtf8("button_clear"));
        button_clear->setGeometry(QRect(1050, 420, 93, 28));
        label_tips = new QLabel(centralWidget);
        label_tips->setObjectName(QString::fromUtf8("label_tips"));
        label_tips->setGeometry(QRect(0, 605, 1200, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 440, 100, 32));
        MainWindow->setCentralWidget(centralWidget);
        label_pic1->raise();
        button_openpic->raise();
        button_change->raise();
        text_high->raise();
        label_high->raise();
        label_ysite->raise();
        text_ysite->raise();
        text_width->raise();
        label_width->raise();
        label_len->raise();
        text_len->raise();
        label_x1->raise();
        label_y1->raise();
        text_x1->raise();
        text_y1->raise();
        text_y2->raise();
        text_x2->raise();
        text_x3->raise();
        text_x4->raise();
        text_y3->raise();
        text_y4->raise();
        label_x2->raise();
        label_x3->raise();
        label_x4->raise();
        label_y2->raise();
        label_y3->raise();
        label_y4->raise();
        button_clear->raise();
        label_tips->raise();
        pushButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 22));
        menu_doc = new QMenu(menuBar);
        menu_doc->setObjectName(QString::fromUtf8("menu_doc"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_doc->menuAction());
        menu_doc->addAction(open);
        menu_doc->addAction(about);
        menu_doc->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RUBO IPM", nullptr));
        open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        about->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        about->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        action_2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        button_openpic->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        button_change->setText(QCoreApplication::translate("MainWindow", "\351\200\217\350\247\206\345\217\230\346\215\242", nullptr));
        label_high->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\234\345\233\276\351\253\230\345\272\246\357\274\232", nullptr));
        label_ysite->setText(QCoreApplication::translate("MainWindow", "\346\226\271\345\275\242\344\270\255\345\277\203\350\267\235\351\241\266\351\203\250\345\203\217\347\264\240\357\274\232", nullptr));
        label_width->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\234\345\233\276\345\256\275\345\272\246\357\274\232", nullptr));
        label_len->setText(QCoreApplication::translate("MainWindow", "\346\226\271\345\275\242\345\203\217\347\264\240\350\276\271\351\225\277\357\274\232", nullptr));
        label_x1->setText(QCoreApplication::translate("MainWindow", "X1:", nullptr));
        label_y1->setText(QCoreApplication::translate("MainWindow", "Y1:", nullptr));
        label_x2->setText(QCoreApplication::translate("MainWindow", "X2:", nullptr));
        label_x3->setText(QCoreApplication::translate("MainWindow", "X3:", nullptr));
        label_x4->setText(QCoreApplication::translate("MainWindow", "X4:", nullptr));
        label_y2->setText(QCoreApplication::translate("MainWindow", "Y2:", nullptr));
        label_y3->setText(QCoreApplication::translate("MainWindow", "Y3:", nullptr));
        label_y4->setText(QCoreApplication::translate("MainWindow", "Y4:", nullptr));
        label_pic1->setText(QString());
        button_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label_tips->setText(QCoreApplication::translate("MainWindow", "\346\217\220\347\244\272\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menu_doc->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IPM_H
