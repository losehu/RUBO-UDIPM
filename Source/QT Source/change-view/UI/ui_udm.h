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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UdmWindow
{
public:
    QAction *back;
    QAction *exit;
    QAction *about;
    QAction *save;
    QWidget *centralwidget;
    QLabel *label_pic1;
    QLabel *label_tips;
    QPushButton *pushButton_opendir;
    QPushButton *pushButton_openpic;
    QTextEdit *text_width;
    QTextEdit *text_high;
    QTextEdit *text_x;
    QTextEdit *text_y;
    QRadioButton *radioButton_pic;
    QLabel *label_width;
    QLabel *label_high;
    QLabel *label_x;
    QLabel *label_y;
    QTextEdit *text_corner_width;
    QTextEdit *text_corner_high;
    QLabel *label_corner_width;
    QLabel *label_corner_high;
    QPushButton *pushButton_udm;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *UdmWindow)
    {
        if (UdmWindow->objectName().isEmpty())
            UdmWindow->setObjectName("UdmWindow");
        UdmWindow->resize(1200, 600);
        back = new QAction(UdmWindow);
        back->setObjectName("back");
        exit = new QAction(UdmWindow);
        exit->setObjectName("exit");
        about = new QAction(UdmWindow);
        about->setObjectName("about");
        save = new QAction(UdmWindow);
        save->setObjectName("save");
        centralwidget = new QWidget(UdmWindow);
        centralwidget->setObjectName("centralwidget");
        label_pic1 = new QLabel(centralwidget);
        label_pic1->setObjectName("label_pic1");
        label_pic1->setGeometry(QRect(0, 0, 940, 600));
        label_tips = new QLabel(centralwidget);
        label_tips->setObjectName("label_tips");
        label_tips->setGeometry(QRect(0, 555, 1200, 16));
        pushButton_opendir = new QPushButton(centralwidget);
        pushButton_opendir->setObjectName("pushButton_opendir");
        pushButton_opendir->setGeometry(QRect(1040, 400, 93, 29));
        pushButton_openpic = new QPushButton(centralwidget);
        pushButton_openpic->setObjectName("pushButton_openpic");
        pushButton_openpic->setGeometry(QRect(1040, 450, 93, 29));
        text_width = new QTextEdit(centralwidget);
        text_width->setObjectName("text_width");
        text_width->setGeometry(QRect(1090, 180, 60, 30));
        text_high = new QTextEdit(centralwidget);
        text_high->setObjectName("text_high");
        text_high->setGeometry(QRect(1090, 230, 60, 30));
        text_x = new QTextEdit(centralwidget);
        text_x->setObjectName("text_x");
        text_x->setGeometry(QRect(1090, 280, 60, 30));
        text_y = new QTextEdit(centralwidget);
        text_y->setObjectName("text_y");
        text_y->setGeometry(QRect(1090, 330, 60, 30));
        radioButton_pic = new QRadioButton(centralwidget);
        radioButton_pic->setObjectName("radioButton_pic");
        radioButton_pic->setGeometry(QRect(1030, 20, 118, 24));
        radioButton_pic->setChecked(false);
        label_width = new QLabel(centralwidget);
        label_width->setObjectName("label_width");
        label_width->setGeometry(QRect(1000, 190, 91, 16));
        label_high = new QLabel(centralwidget);
        label_high->setObjectName("label_high");
        label_high->setGeometry(QRect(1000, 240, 91, 16));
        label_x = new QLabel(centralwidget);
        label_x->setObjectName("label_x");
        label_x->setGeometry(QRect(1000, 290, 69, 20));
        label_y = new QLabel(centralwidget);
        label_y->setObjectName("label_y");
        label_y->setGeometry(QRect(1000, 340, 69, 20));
        text_corner_width = new QTextEdit(centralwidget);
        text_corner_width->setObjectName("text_corner_width");
        text_corner_width->setGeometry(QRect(1090, 130, 60, 30));
        text_corner_high = new QTextEdit(centralwidget);
        text_corner_high->setObjectName("text_corner_high");
        text_corner_high->setGeometry(QRect(1090, 80, 60, 30));
        label_corner_width = new QLabel(centralwidget);
        label_corner_width->setObjectName("label_corner_width");
        label_corner_width->setGeometry(QRect(1000, 90, 91, 16));
        label_corner_high = new QLabel(centralwidget);
        label_corner_high->setObjectName("label_corner_high");
        label_corner_high->setGeometry(QRect(1000, 140, 91, 16));
        pushButton_udm = new QPushButton(centralwidget);
        pushButton_udm->setObjectName("pushButton_udm");
        pushButton_udm->setGeometry(QRect(1040, 500, 93, 29));
        UdmWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UdmWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        UdmWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(save);
        menu->addAction(about);
        menu->addAction(back);
        menu->addAction(exit);

        retranslateUi(UdmWindow);

        QMetaObject::connectSlotsByName(UdmWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UdmWindow)
    {
        UdmWindow->setWindowTitle(QCoreApplication::translate("UdmWindow", "RUBO UDM", nullptr));
        back->setText(QCoreApplication::translate("UdmWindow", "\350\277\224\345\233\236", nullptr));
#if QT_CONFIG(shortcut)
        back->setShortcut(QCoreApplication::translate("UdmWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("UdmWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("UdmWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        about->setText(QCoreApplication::translate("UdmWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(shortcut)
        about->setShortcut(QCoreApplication::translate("UdmWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        save->setText(QCoreApplication::translate("UdmWindow", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
#if QT_CONFIG(shortcut)
        save->setShortcut(QCoreApplication::translate("UdmWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        label_pic1->setText(QString());
        label_tips->setText(QString());
        pushButton_opendir->setText(QCoreApplication::translate("UdmWindow", "\346\240\207\345\256\232\345\233\276\350\267\257\345\276\204", nullptr));
        pushButton_openpic->setText(QCoreApplication::translate("UdmWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        radioButton_pic->setText(QCoreApplication::translate("UdmWindow", "\350\207\252\345\212\250\345\205\250\345\233\276", nullptr));
        label_width->setText(QCoreApplication::translate("UdmWindow", "\347\273\223\346\236\234\345\233\276\345\256\275\345\272\246\357\274\232", nullptr));
        label_high->setText(QCoreApplication::translate("UdmWindow", "\347\273\223\346\236\234\345\233\276\351\253\230\345\272\246\357\274\232", nullptr));
        label_x->setText(QCoreApplication::translate("UdmWindow", "\346\260\264\345\271\263\345\201\217\347\247\273\357\274\232", nullptr));
        label_y->setText(QCoreApplication::translate("UdmWindow", "\347\253\226\347\233\264\345\201\217\347\247\273:", nullptr));
        label_corner_width->setText(QCoreApplication::translate("UdmWindow", "\346\250\252\345\220\221\350\247\222\347\202\271\346\225\260\357\274\232", nullptr));
        label_corner_high->setText(QCoreApplication::translate("UdmWindow", "\347\272\265\345\220\221\350\247\222\347\202\271\346\225\260\357\274\232", nullptr));
        pushButton_udm->setText(QCoreApplication::translate("UdmWindow", "\345\216\273\347\225\270\345\217\230", nullptr));
        menu->setTitle(QCoreApplication::translate("UdmWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdmWindow: public Ui_UdmWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDM_H
