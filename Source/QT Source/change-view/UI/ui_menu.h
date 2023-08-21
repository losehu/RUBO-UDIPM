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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QAction *action_about;
    QAction *action_exit;
    QWidget *centralwidget;
    QRadioButton *radioButton_ipm;
    QPushButton *pushButton;
    QRadioButton *radioButton_udm;
    QMenuBar *menubar;
    QMenu *menu_doc;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName("MenuWindow");
        MenuWindow->resize(300, 200);
        action_about = new QAction(MenuWindow);
        action_about->setObjectName("action_about");
        action_exit = new QAction(MenuWindow);
        action_exit->setObjectName("action_exit");
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName("centralwidget");
        radioButton_ipm = new QRadioButton(centralwidget);
        radioButton_ipm->setObjectName("radioButton_ipm");
        radioButton_ipm->setGeometry(QRect(100, 30, 130, 20));
        QFont font;
        font.setKerning(true);
        radioButton_ipm->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 130, 93, 28));
        radioButton_udm = new QRadioButton(centralwidget);
        radioButton_udm->setObjectName("radioButton_udm");
        radioButton_udm->setGeometry(QRect(100, 80, 130, 20));
        MenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 26));
        menu_doc = new QMenu(menubar);
        menu_doc->setObjectName("menu_doc");
        MenuWindow->setMenuBar(menubar);

        menubar->addAction(menu_doc->menuAction());
        menu_doc->addAction(action_about);
        menu_doc->addAction(action_exit);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QCoreApplication::translate("MenuWindow", "RUBO MENU", nullptr));
        action_about->setText(QCoreApplication::translate("MenuWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(shortcut)
        action_about->setShortcut(QCoreApplication::translate("MenuWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_exit->setText(QCoreApplication::translate("MenuWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        action_exit->setShortcut(QCoreApplication::translate("MenuWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        radioButton_ipm->setText(QCoreApplication::translate("MenuWindow", "\351\200\206  \351\200\217  \350\247\206", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuWindow", "\347\241\256\345\256\232", nullptr));
        radioButton_udm->setText(QCoreApplication::translate("MenuWindow", "\345\216\273  \347\225\270  \345\217\230", nullptr));
        menu_doc->setTitle(QCoreApplication::translate("MenuWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
