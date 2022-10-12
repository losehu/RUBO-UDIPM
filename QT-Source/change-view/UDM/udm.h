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
    QImage Mat2QImage(const cv::Mat &mat);
bool judge_int_no_warning(QString a);
    bool judge_int_all(QString a) ;

     void receiveudm();
     void on_exit_triggered();
     void on_back_triggered();
     void on_radioButton_clicked();
     void on_radioButton_pic_clicked();
     void on_action_triggered();
     void on_pushButton_opendir_clicked();
     void timerUpdate();

     void on_pushButton_openpic_clicked();

     void on_pushButton_udm_clicked();

signals:
    void menushow();
private:
    int id2;
public slots:
    void doWork();


};
 struct udm_p {
    int max_x,max_y,min_x,min_y;
    int width, high;
    int move_x,move_y;
    string path;
    bool find_file_path;
    bool find_pic_path;
} ;
extern udm_p udm_pic;
extern bool  alpha;

#endif // UDM_H


