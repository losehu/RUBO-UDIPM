#ifndef MENU_H
#define MENU_H
#include <QMainWindow>
#include "screen.h"

using namespace std;
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

    void receivemenu();

    void on_pushButton_clicked();
    void on_action_about_triggered();
    void on_action_exit_triggered();
signals:
    void ipmshow();
    void udmshow();
    void udipmshow();

};

#endif // MENU_H
