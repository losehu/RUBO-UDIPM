#ifndef UDM_H
#define UDM_H
#include <QMainWindow>
#include "screen.h"

using namespace cv;
using namespace std;
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

    bool judge_int(QString a);

     void receiveudm();
     void on_exit_triggered();
     void on_back_triggered();
     void on_radioButton_clicked();
     void on_radioButton_pic_clicked();
     void on_action_triggered();
     void on_pushButton_opendir_clicked();
     void timerUpdate();

     void on_pushButton_openpic_clicked();

signals:
    void menushow();
private:
    int id2;
public slots:
    void doWork();


};

extern bool  alpha;
extern string pic0_name;

#endif // UDM_H


