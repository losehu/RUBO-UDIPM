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

};


#endif // UDM_H


