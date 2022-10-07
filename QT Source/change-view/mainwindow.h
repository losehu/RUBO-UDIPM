#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "opencv2/opencv.hpp"
#include "qlabel.h"
#include "qdebug.h"
#include "ty.h"
#include "qtimer.h"
#include"qfiledialog.h"
#include <QImage>
#include <QKeyEvent>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QScreen>
#include <QGuiApplication>
//#include <QDesktopWidget>
#include <QScreen>
#include <QTimer>
#include <QTime>
#include <QDebug>
#include <QLoggingCategory>
#include<QIntValidator>
#include <QClipboard>
#include <QApplication>
#include <QMimeData>
#include <QTextEdit>
/***********************************RUBO HEADFILE*********************************/
#include "change-view.h"
using namespace std;
using namespace cv;
namespace Ui {
class MainWindow;

}
class myLabel;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    myLabel* mylabel;

private slots:
    void on_button_openpic_clicked();
    void QString_to_string(QString a,string *b);
    void init_windows(int start_width,int start_high);
    void update_windows();
    void init_model1_windows(int start_x,int start_y);
    void init_model2_windows(int start_x,int start_y);
    void init_model3_windows(int start_x,int start_y);
   void init_model4_windows(int model4_start_x,int model4_start_y);
   void init_model5_windows(int model5_start_x,int model5_start_y);
   void open_pic_update_windows();
   void open_mainwindows_updata_windows();
   void active_windows();
   bool judge_int(QString a);

   void on_button_clear_clicked();
protected:
private slots:
    void timerUpdate();


    void on_action_2_triggered();

    void on_button_change_clicked();


    void on_about_triggered();

    void on_open_triggered();

private:
    int id1;


};
struct pic_show{
    int width;
    int high;
    int show_width;
    int show_high;
    float zoom;
    int click_cnt;
    bool PIC_OPEN;
    bool change;
};
extern int screenX,screenY;

extern pic_show pic;
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
# pragma execution_character_set("utf-8")
#endif
#endif // MAINWINDOW_H
