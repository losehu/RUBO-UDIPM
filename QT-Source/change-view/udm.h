#ifndef UDM_H
#define UDM_H
#include <QMainWindow>
#include "screen.h"


namespace Ui {
class UdmWindow;
}


class UdmWindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit UdmWindow(QWidget *parent = nullptr);
    ~UdmWindow();
public:
    Ui::UdmWindow *ui;
private slots:
     void receiveudm();
     void on_exit_triggered();

     void on_back_triggered();



     void on_radioButton_clicked();

     void on_radioButton_pic_clicked();

     void on_action_triggered();

signals:
    void menushow();
};


#endif // UDM_H


