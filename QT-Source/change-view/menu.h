#ifndef MENU_H
#define MENU_H
#include <QMainWindow>
#include "window.h"

namespace Ui {
class MyWindow;

}
class MyWindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent = nullptr);
    ~MyWindow();
public:
    Ui::MyWindow *ui;


private slots:
    void on_pushButton_clicked();
};

#endif // MENU_H
