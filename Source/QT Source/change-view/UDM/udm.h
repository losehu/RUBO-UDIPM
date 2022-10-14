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
    int get_distorted_mat(string pic_name[], string pic_name_ok[], int pic_num, int conor_width, int conor_high,
                          double parameter[]) ;
    void open_mainwindows_updata_windows() ;
        void init_windows(int start_width, int start_high) ;
        void init_model1_windows(int start_x,int start_y);
        void init_model2_windows(int start_x,int start_y);
        void init_model3_windows(int start_x,int start_y);
       void init_model4_windows(int model4_start_x,int model4_start_y);
       void init_model5_windows(int model5_start_x,int model5_start_y);
    bool judge_int(QString a);
bool judge_int_no_warning(QString a);
    bool judge_int_all(QString a) ;

     void receiveudm();
     void on_exit_triggered();
     void on_back_triggered();
     void on_radioButton_clicked();
     void on_radioButton_pic_clicked();
     void on_pushButton_opendir_clicked();
     void timerUpdate();

     void on_pushButton_openpic_clicked(bool auto_start);

     void on_pushButton_udm_clicked();


     void on_save_triggered();

     void on_about_triggered();


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
    int pic_width,pic_high;
    int move_x,move_y;
    string path;
    bool find_file_path;
    bool find_pic_path;
    bool udm;
    string pic0_name;
} ;
extern udm_p udm_pic;
extern bool  alpha;

#endif // UDM_H


