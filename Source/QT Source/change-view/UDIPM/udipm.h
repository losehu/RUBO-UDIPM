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
private slots:
     void receiveudipm();
     void on_back_triggered();

     void on_exit_triggered();

     void on_action_triggered();

     void on_button_clear_2_clicked();

     void on_button_opendir_clicked();

signals:
    void menushow();
};
using namespace cv;
using namespace std;

#endif // UDIPM_H



