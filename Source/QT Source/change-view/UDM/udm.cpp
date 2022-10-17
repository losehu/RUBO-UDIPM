#include "udm.h"
#include "ui_udm.h"
#include "menu.h"
#include "QMessageBox"
#include "screen.h"
#include "QFileDialog"
#include"ty.h"
#include "file.h"
#include "all.h"
#include "distorted.h"
#include "thread"
#include "QTimer"
#include "QFuture"
#include "distorted.h"
#include "qstring"
#include"QImage"
#include<QRegularExpression>
 bool  alpha=1;
 udm_p udm_pic;
Mat out1;
void UdmWindow::receiveudm()
{
    this->show();
}
UdmWindow::UdmWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::UdmWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));
    ui->setupUi(this);

    int init_width = 114, init_high = 100;
    float n1 = (float)screenX / 5 * 3 / init_width;
    float n2 =(float) screenY / 5 * 3 / init_high;

    pic.zoom = min(n1, n2);
    if(pic.zoom>1)pic.zoom=(int)pic.zoom;
    pic.show_width = pic.zoom * init_width;
    pic.show_high = pic.zoom * init_high;


    id2 = startTimer(1000);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer->start(1000);
    srand(QTime(0, 0, 0).secsTo(QTime::currentTime()));



   ui->radioButton_pic->setChecked(1);
        ui->text_high->setEnabled(0);
        ui->text_width->setEnabled(0);
        ui->text_x->setEnabled(0);
        ui->text_y->setEnabled(0);
        alpha=1;

        udm_pic.find_file_path=0;
         udm_pic.find_pic_path=0;
         udm_pic.udm=0;

         ui->save->setEnabled(0);
         open_mainwindows_updata_windows();
         ui->pushButton_openpic->setEnabled(0);
ui->label_tips->setText("请选择标定图路径");
ui->pushButton_udm->setEnabled(0);
ui->text_width->setEnabled(0);
ui->text_high->setEnabled(0);

ui->text_x->setEnabled(0);

ui->text_y->setEnabled(0);

}
UdmWindow::~UdmWindow() {
    delete ui;
}
using namespace std;




void UdmWindow::on_exit_triggered()
{
    UdmWindow::close();
}








void UdmWindow::on_back_triggered()
{
    this->hide();

    menushow();

}


void UdmWindow::on_radioButton_clicked()
{

}


void UdmWindow::on_radioButton_pic_clicked()
{
    if(ui->radioButton_pic->isChecked()){
        ui->text_high->setEnabled(0);
        ui->text_width->setEnabled(0);
        ui->text_x->setEnabled(0);
        ui->text_y->setEnabled(0);
        alpha=1;



        if(udm_pic.find_file_path&&
                   udm_pic.find_pic_path)
        {
            on_pushButton_udm_clicked();

        }
}else
    {
        alpha=0;

        if(udm_pic.find_file_path&&
                   udm_pic.find_pic_path&&udm_pic.udm)
        {




                ui->text_high->setEnabled(1);
        ui->text_width->setEnabled(1);
        ui->text_x->setEnabled(1);
        ui->text_y->setEnabled(1);
        }
        if(udm_pic.find_file_path&&
                udm_pic.find_pic_path){


            udm_pic.move_x=0;
            udm_pic.move_y=0;

            ui->text_high->setText(QString::number(udm_pic.pic_high));
            ui->text_width->setText(QString::number(udm_pic.pic_width));
            ui->text_x->setText(QString::number(udm_pic.move_x));
            ui->text_y->setText(QString::number(udm_pic.move_y));


        on_pushButton_udm_clicked();

        }

        if(udm_pic.find_file_path&&
                   udm_pic.find_pic_path)
        {
          QString  num_tmp = ui->text_width->toPlainText();
            if (!judge_int_no_warning(num_tmp))return;
              num_tmp = ui->text_high->toPlainText();
              if (!judge_int_no_warning(num_tmp))return;
                num_tmp = ui->text_x->toPlainText();
                if (!judge_int_no_warning(num_tmp))return;
                  num_tmp = ui->text_y->toPlainText();
                  if (!judge_int_no_warning(num_tmp))return;

            on_pushButton_udm_clicked();

        }




    }
}


void UdmWindow::on_about_triggered()
{
    show_about();

}


void UdmWindow::doWork()
{
    vector<string> allFileList = getFilesList(dir);
    int pic_num = allFileList.size();
    string pic_name[pic_num];
    pic_num = get_picname(dir, pic_name);

    string pic_name_ok[pic_num];
    double distorted_parameter[11];
    pic_num = get_distorted_mat(pic_name, pic_name_ok, pic_num, conor_width, conor_high, distorted_parameter);
}
int tim1e=0;
void UdmWindow::timerUpdate() {
         tim1e++;
       // ui->label_tips->setText(QString::number(tim1e,10));
}


void UdmWindow::on_pushButton_opendir_clicked()
{

    QString  num_tmp = ui->text_corner_width->toPlainText();
      if (!judge_int(num_tmp))return;
      conor_width = (int) (num_tmp.toInt());


        num_tmp = ui->text_corner_high->toPlainText();
        if (!judge_int(num_tmp))return;
        conor_high = (int) (num_tmp.toInt());




    QString filePath = QFileDialog::getExistingDirectory(this, "选择图片文件夹路径...", "./");
      dir=filePath.toLocal8Bit().toStdString();



vector<string> allFileList = getFilesList(dir);
      if(! path_check_ok)return;
      int pic_num = allFileList.size();
      if(pic_num<10){
              QMessageBox::critical(this, "错误", "图片数目太少");

          return;}
      string pic_name[pic_num];
      pic_num = get_picname(dir, pic_name);
if(pic_num==-1)return;






      string pic_name_ok[pic_num];
      pic_num = get_distorted_mat(pic_name, pic_name_ok, pic_num, conor_width, conor_high, distorted_parameter);

//      out_to_clip(cameraMatrix,distCoeffs);

      ui->label_tips->setText("内参生成完成，请选择图片去畸变");




//C:\Users\RUPC\Desktop\Dedistortion\img7
       udm_pic.find_file_path=1;
ui->pushButton_openpic->setEnabled(1);



ui->text_width->setEnabled(0);
ui->text_high->setEnabled(0);

ui->text_x->setEnabled(0);

ui->text_y->setEnabled(0);
}
bool UdmWindow::judge_int(QString a) {
    if (!a.contains(QRegularExpression("^\\d+$"))) {
        QMessageBox::critical(this, "错误", "参数输入错误！");
        return 0;
    }
    return 1;
}
bool UdmWindow::judge_int_no_warning(QString a) {
    if (!a.contains(QRegularExpression("^\\d+$"))) {
        return 0;
    }
    return 1;
}
bool isDegital(string str) {
    for (int i = 0;i < str.size();i++) {
        if (str.at(i) == '-' && str.size() > 1)
            continue;
        if (str.at(i) > '9' || str.at(i) < '0')
            return false;
    }
    return true;
}
bool UdmWindow::judge_int_all(QString a) {
    string aa=(const char*)a.toLocal8Bit();
    if (!isDegital(aa)) {
        QMessageBox::critical(this, "错误", "参数输入错误！");
        return 0;
    }
    return 1;
}
void UdmWindow::on_pushButton_openpic_clicked(bool auto_start)
{
if(auto_start==0){
    QString filename_pic = QFileDialog::getOpenFileName(this, tr("打开图片"), "", tr("Images (*.png *.bmp *.jpg)"));
    if (filename_pic.isEmpty()) return;
    QImage img;
    if (!(img.load(filename_pic)))
    {
        QMessageBox::information(this, tr("错误"), tr("图片路径错误"));
        return;
    }
udm_pic.path=filename_pic.toLocal8Bit().toStdString();
}else
{
    udm_pic.path=udm_pic.pic0_name;
}

 udm_pic.find_pic_path=1;

 ui->save->setEnabled(1);



 int init_width = udm_pic.width, init_high =  udm_pic.high;
 float n1 = (float)screenX / 5 * 3 / init_width;
 float n2 =(float) screenY / 5 * 3 / init_high;

 pic.zoom = min(n1, n2);
 if(pic.zoom>1)pic.zoom=(int)pic.zoom;
 pic.show_width = pic.zoom * init_width;
 pic.show_high = pic.zoom * init_high;
 init_windows(pic.show_width, pic.show_high); //1200--940 600-600
 ui->label_pic1->setGeometry(ui->label_pic1->x(), ui->label_pic1->y(), pic.show_width, pic.show_high);
 if(alpha==0)
 {
     udm_pic.move_x=0;
     udm_pic.move_y=0;

     ui->text_high->setText(QString::number(udm_pic.pic_high));
     ui->text_width->setText(QString::number(udm_pic.pic_width));
     ui->text_x->setText(QString::number(udm_pic.move_x));
     ui->text_y->setText(QString::number(udm_pic.move_y));
ui->text_x->setEnabled(1);
ui->text_y->setEnabled(1);
ui->text_width->setEnabled(1);
ui->text_high->setEnabled(1);

 }
 on_pushButton_udm_clicked();
ui->label_tips->setText("去畸变成功! 左上角 文件-保存 可保存结果图");
ui->pushButton_udm->setEnabled(1);


if(alpha){

ui->text_width->setEnabled(0);
ui->text_high->setEnabled(0);

ui->text_x->setEnabled(0);

ui->text_y->setEnabled(0);
}

}



void UdmWindow::on_pushButton_udm_clicked()
{    QString num_tmp;

    if(!alpha){
          num_tmp = ui->text_width->toPlainText();
          if (!judge_int(num_tmp))return;
          udm_pic.width= (int) (num_tmp.toInt());


            num_tmp = ui->text_high->toPlainText();
            if (!judge_int(num_tmp))return;
            udm_pic.high= (int) (num_tmp.toInt());

              num_tmp = ui->text_x->toPlainText();
              if (!judge_int_all(num_tmp))return;
              udm_pic.move_x= (int) (num_tmp.toInt());

                num_tmp = ui->text_y->toPlainText();

                if (!judge_int_all(num_tmp))return;
                udm_pic.move_y= (int) (num_tmp.toInt());

    }




    /*********************??******************************/
        int ImgWidth = (int) distorted_parameter[0];
        int ImgHeight = (int) distorted_parameter[1];
        double fx = distorted_parameter[2]
        , fy = distorted_parameter[3]
        , ux = distorted_parameter[4]
        , uy = distorted_parameter[5]
        , k1 = distorted_parameter[6]
        , k2 = distorted_parameter[7]
        , k3 = distorted_parameter[8]
        , p1 = distorted_parameter[9]
        , p2 = distorted_parameter[10];

for(int i=0;i<10;i++)
    cout<<distorted_parameter[i]<<","<<endl;
        string InputPath = udm_pic.pic0_name;
        cv::Mat img_tmp = cv::imread(InputPath);
        cvtColor(img_tmp, img_tmp, COLOR_RGB2GRAY);

cout<<InputPath<<endl;

        int ImgWidth_out;
        int ImgHeight_out;
        if (alpha) {
            ImgWidth_out = udm_pic.max_x - udm_pic.min_x;
            ImgHeight_out = udm_pic.max_y - udm_pic.min_y;

        } else {
            ImgWidth_out = udm_pic.width ;
            ImgHeight_out = udm_pic.high ;
        }
        unsigned char back_color = 255;

        out1 = Mat(ImgHeight_out, ImgWidth_out, CV_8UC3);


        int max_width = udm_pic.max_x;
        int max_high = udm_pic.max_y;
        int move_x, move_y;
        if (alpha) {
            move_x = (ImgWidth_out - max_width);
            move_y = (ImgHeight_out - max_high);
        } else {
            move_x = udm_pic.move_x;
            move_y = udm_pic.move_y;
        }
          udm_pic.move_x =move_x;
       udm_pic.move_y=   move_y ;
        cout << "move:" << move_x << "\t" << move_y << endl;

        cout << "size:" << ImgHeight_out << "\t" << ImgWidth_out << endl;
         cout << "size:" << ImgHeight<< "\t" << ImgWidth << endl;

          img_tmp = cv::imread(udm_pic.path);


        for (int i = -move_y; i < ImgHeight_out; i++) {
            for (int j = -move_x; j < ImgWidth_out; j++) {
                double xCorrected = (j - ux) / fx;
                double yCorrected = (i - uy) / fy;

                double xDistortion, yDistortion;

                double r2 = xCorrected * xCorrected + yCorrected * yCorrected;

                double deltaRa = 1. + k1 * r2 + k2 * r2 * r2 + k3 * r2 * r2 * r2;
                double deltaRb = 1 / (1.);
                double deltaTx = 2. * p1 * xCorrected * yCorrected + p2 * (r2 + 2. * xCorrected * xCorrected);
                double deltaTy = p1 * (r2 + 2. * yCorrected * yCorrected) + 2. * p2 * xCorrected * yCorrected;

                xDistortion = xCorrected * deltaRa * deltaRb + deltaTx;
                yDistortion = yCorrected * deltaRa * deltaRb + deltaTy;

                xDistortion = xDistortion * fx + ux;
                yDistortion = yDistortion * fy + uy;
                if (i + move_y >= 0 && i + move_y < ImgHeight_out && j + move_x >= 0 && j + move_x <= ImgWidth_out) {
                    if (yDistortion >= 0 && yDistortion < ImgHeight && xDistortion >= 0 && xDistortion < ImgWidth) {
            out1.at<Vec3b>(i + move_y, j + move_x) [0]=img_tmp.at<Vec3b>((int) yDistortion, (int) xDistortion)[0];
            out1.at<Vec3b>(i + move_y, j + move_x) [1]=img_tmp.at<Vec3b>((int) yDistortion, (int) xDistortion)[1];
            out1.at<Vec3b>(i + move_y, j + move_x) [2]=img_tmp.at<Vec3b>((int) yDistortion, (int) xDistortion)[2];




                    } else{
                    out1.at<Vec3b>(i + move_y, j + move_x) [0]=back_color;
                            out1.at<Vec3b>(i + move_y, j + move_x) [1]=back_color;
                            out1.at<Vec3b>(i + move_y, j + move_x) [2]=back_color;

                    }
                }
            }
        }



            cv::imshow("img", img_tmp);

             int init_width = ImgWidth_out, init_high = ImgHeight_out;
             float n1 = (float)screenX / 5 * 3 / init_width;
             float n2 =(float) screenY / 5 * 3 / init_high;

             pic.zoom = min(n1, n2);
             if(pic.zoom>1)pic.zoom=(int)pic.zoom;
             pic.show_width = pic.zoom * init_width;
             pic.show_high = pic.zoom * init_high;
             init_windows(pic.show_width, pic.show_high); //1200--940 600-600
             ui->label_pic1->setGeometry(ui->label_pic1->x(), ui->label_pic1->y(), pic.show_width, pic.show_high);


            ui->label_pic1->setPixmap(QPixmap::fromImage(Mat2QImage(out1).scaled(ui->label_pic1->size())));

             if(alpha){
ui->text_high->setText(QString::number(ImgHeight_out));
ui->text_width->setText(QString::number(ImgWidth_out));
ui->text_x->setText(QString::number(move_x));
ui->text_y->setText(QString::number(move_y));


             }


udm_pic.udm=1;
 out_to_clip();

}




void UdmWindow::on_save_triggered()
{
    QString filename_pic = QFileDialog::getSaveFileName(this,
            tr("保存图片"),
            "",
            tr("Images (*.bmp)"));

        if (!filename_pic.isNull())
        {
              Mat2QImage(out1).save(filename_pic,"BMP");
        }

}

/********************ui**************************/

void UdmWindow::open_mainwindows_updata_windows() {

    int init_width = 100, init_high = 114;
    float n1 = (float)screenX / 5 * 3 / init_width;
    float n2 =(float) screenY / 5 * 3 / init_high;

    pic.zoom = min(n1, n2);
    if(pic.zoom>1)pic.zoom=(int)pic.zoom;
    pic.show_width = pic.zoom * init_width;
    pic.show_high = pic.zoom * init_high;
    init_windows(pic.show_width, pic.show_high); //1200--940 600-600

}
void UdmWindow::init_windows(int start_width, int start_high) {
    /****************main_window*******************/
    setFixedSize(this->width(), this->height());
    /****************modle1***************/
    int model1_start_x = start_width +90, model1_start_y = 20;
    init_model1_windows(model1_start_x, model1_start_y);


    int model2_start_x = start_width + 60, model2_start_y = 90;
    init_model2_windows(model2_start_x, model2_start_y);

    int model3_start_x = start_width + 100, model3_start_y = 400;
    init_model3_windows(model3_start_x, model3_start_y);
    int model4_start_x = 0, model4_start_y = 0;
    init_model4_windows(model4_start_x, model4_start_y);
//    1200 600
//     940 450
    setFixedSize(start_width + 260, max(start_high + 135, 555));
    int model5_start_x = 0;
    init_model5_windows(model5_start_x, max(start_high + 135, 555)-45);

}




void UdmWindow::init_model1_windows(int start_x, int start_y) {
    //1030 20
    ui->radioButton_pic->setGeometry(start_x, start_y, ui->radioButton_pic->width(), ui->radioButton_pic->height());




}
void UdmWindow::init_model2_windows(int start_x, int start_y) {
    //1000 90
    //1000 90
    //1090 80
    ui->label_corner_width->setGeometry(start_x, start_y, ui->label_corner_width->width(), ui->label_corner_width->height());
    ui->label_corner_high->setGeometry(start_x, start_y+50, ui->label_corner_high->width(), ui->label_corner_high->height());
    ui->label_width->setGeometry(start_x, start_y+50*2, ui->label_width->width(), ui->label_width->height());
    ui->label_high->setGeometry(start_x, start_y + 50*3, ui->label_high->width(), ui->label_high->height());
    ui->label_x->setGeometry(start_x, start_y+50*4, ui->label_x->width(), ui->label_x->height());
    ui->label_y->setGeometry(start_x, start_y + 50*5, ui->label_y->width(), ui->label_y->height());



    ui->text_corner_width->setGeometry(start_x + 90, start_y - 10, ui->text_corner_width->width(), ui->text_corner_width->height());

    ui->text_corner_high->setGeometry(start_x + 90, start_y - 10+50, ui->text_corner_high->width(), ui->text_corner_high->height());
    ui->text_width->setGeometry(start_x + 90, start_y - 10+50*2, ui->text_width->width(), ui->text_width->height());
    ui->text_high->setGeometry(start_x + 90, start_y - 10+50*3, ui->text_high->width(), ui->text_high->height());
    ui->text_x->setGeometry(start_x + 90, start_y - 10+50*4, ui->text_x->width(), ui->text_x->height());
    ui->text_y->setGeometry(start_x + 90, start_y - 10+50*5, ui->text_y->width(), ui->text_y->height());






}
void UdmWindow::init_model3_windows(int start_x, int start_y) {
ui->pushButton_opendir->setGeometry(start_x,start_y,ui->pushButton_opendir->width(), ui->pushButton_opendir->height());

ui->pushButton_openpic->setGeometry(start_x,start_y+50,ui->pushButton_openpic->width(), ui->pushButton_openpic->height());
ui->pushButton_udm->setGeometry(start_x,start_y+50*2,ui->pushButton_udm->width(), ui->pushButton_udm->height());
}
void UdmWindow::init_model4_windows(int start_x, int start_y) {
    ui->label_pic1->setGeometry(start_x, start_y, ui->label_pic1->width(), ui->label_pic1->height());
}
void UdmWindow::init_model5_windows(int start_x, int start_y) {
    ui->label_tips->setGeometry(start_x, start_y, ui->label_tips->width(), ui->label_tips->height());
}


