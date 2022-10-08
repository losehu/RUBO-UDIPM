#ifndef MYWINDOW_H
#define MYWINDOW_H
#include <QMainWindow>
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

#endif // MYWINDOW_H
