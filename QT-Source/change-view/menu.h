#ifndef MENU_H
#define MENU_H
#include <QMainWindow>
#include "screen.h"

namespace Ui {
class MenuWindow;

}
class MenuWindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();
public:
    Ui::MenuWindow *ui;


private slots:
    void on_pushButton_clicked();
};

#endif // MENU_H
