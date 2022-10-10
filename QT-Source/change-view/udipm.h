#ifndef UDIPM_H
#define UDIPM_H
#include <QMainWindow>
#include "screen.h"


namespace Ui {
class UdipmWindow;

}
class UdipmWindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit UdipmWindow(QWidget *parent = nullptr);
    ~UdipmWindow();
public:
    Ui::UdipmWindow *ui;

};


#endif // UDIPM_H



