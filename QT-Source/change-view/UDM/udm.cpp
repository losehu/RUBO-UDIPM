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
//    setFixedSize(pic.show_width + 260, max(pic.show_high + 50, 650));


    id2 = startTimer(1000);
    QTimer *timer = new QTimer(this); /* 创建一个新的定时器 */
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer->start(1000); /* 设置溢出时间为1秒，并启动定时器 */
    srand(QTime(0, 0, 0).secsTo(QTime::currentTime()));



   ui->radioButton_pic->setChecked(1);
        ui->text_high->setEnabled(0);
        ui->text_width->setEnabled(0);
        ui->text_x->setEnabled(0);
        ui->text_y->setEnabled(0);
        alpha=1;

        udm_pic.find_file_path=0;
         udm_pic.find_pic_path=0;

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
    this->hide();//隐藏test窗口

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
        ui->text_high->setEnabled(1);
        ui->text_width->setEnabled(1);
        ui->text_x->setEnabled(1);
        ui->text_y->setEnabled(1);
        alpha=0;
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


void UdmWindow::on_action_triggered()
{
    show_about();

}


void UdmWindow::doWork()
{
    vector<string> allFileList = getFilesList(dir);
    int pic_num = allFileList.size();
    string pic_name[pic_num]; //储存所有图片路径
    pic_num = get_picname(dir, pic_name);

/********获取去畸变参数************/
    string pic_name_ok[pic_num];
    double distorted_parameter[11];
    pic_num = get_distorted_mat(pic_name, pic_name_ok, pic_num, conor_width, conor_high, distorted_parameter);
}
int tim1e=0;
void UdmWindow::timerUpdate() { /* 定时器溢出处理 */
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




    QString filePath = QFileDialog::getExistingDirectory(this, "请选择文件保存路径...", "./");
      dir=filePath.toLocal8Bit().toStdString();//设置为可以读取中文路径



     //读取每一幅图像，从中提取出角点，然后对角点进行亚像素精确化
 /*******读取文件夹下所有图片************/
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
       ui->label_tips->setText("已生成内参矩阵，请选择图片去畸变");




//C:\Users\RUPC\Desktop\Dedistortion\img7
       udm_pic.find_file_path=1;


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
        if (str.at(i) == '-' && str.size() > 1)  // 有可能出现负数
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
void UdmWindow::on_pushButton_openpic_clicked()
{

    QString filename_pic = QFileDialog::getOpenFileName(this, tr("选择图像"), "", tr("Images (*.png *.bmp *.jpg)"));
    if (filename_pic.isEmpty()) return;
    QImage img;
    if (!(img.load(filename_pic))) //加载图像
    {
        QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));
        return;
    }
udm_pic.path=filename_pic.toLocal8Bit().toStdString();

 udm_pic.find_pic_path=1;



}

QImage UdmWindow::Mat2QImage(const cv::Mat &mat)
{

        // 8-bits unsigned, NO. OF CHANNELS = 1
        if(mat.type() == CV_8UC1)
        {
            QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
            image.setColorCount(256);
            for(int i = 0; i < 256; i++)
            {
                image.setColor(i, qRgb(i, i, i));
            }
            uchar *pSrc = mat.data;
            for(int row = 0; row < mat.rows; row ++)
            {
                uchar *pDest = image.scanLine(row);
                memcpy(pDest, pSrc, mat.cols);
                pSrc += mat.step;
            }
            return image;
        }
        // 8-bits unsigned, NO. OF CHANNELS = 3
        else if(mat.type() == CV_8UC3)
        {
            // Copy input Mat
            cv::cvtColor(mat,mat,cv::COLOR_BGR2RGB);
            const uchar *pSrc = (const uchar*)mat.data;
            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
            //image = image.rgbSwapped();
            return image.copy();
        }
        else if(mat.type() == CV_8UC4)
        {
            // Copy input Mat
            const uchar *pSrc = (const uchar*)mat.data;
            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
            return image.copy();
        }
        else
        {
            qDebug() << "ERROR: Mat could not be converted to QImage.";
            return QImage();
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




    /*********************还原******************************/
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


        string InputPath = pic0_name;
        cv::Mat img_tmp = cv::imread(InputPath);
        cvtColor(img_tmp, img_tmp, COLOR_RGB2GRAY);



        int ImgWidth_out;
        int ImgHeight_out;
        if (alpha) {
            ImgWidth_out = udm_pic.max_x - udm_pic.min_x;
            ImgHeight_out = udm_pic.max_y - udm_pic.min_y;

        } else {
            ImgWidth_out = udm_pic.width ;
            ImgHeight_out = udm_pic.high ;
        }
        /**********定义映射矩阵**************/
        unsigned char back_color = 255;
        unsigned char *distorted_img[ImgHeight_out][ImgWidth_out];
        unsigned char now_img[ImgHeight][ImgWidth];
        for (int i = 0; i < ImgHeight; i++)
            for (int j = 0; j < ImgWidth; j++)
                now_img[i][j] = img_tmp.at<uchar>(i, j);

        Mat out1 = Mat(ImgHeight_out, ImgWidth_out, CV_8UC1);


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
        cout << "move:" << move_x << "\t" << move_y << endl;

        cout << "size:" << ImgHeight_out << "\t" << ImgWidth_out << endl;
         for(int i=0;i<ImgHeight_out;i++)

             for (int j = 0; j < ImgWidth_out; j++)
                 distorted_img[i ][j ]=&back_color;



        for (int i = -move_y; i < ImgHeight_out; i++) {
            for (int j = -move_x; j < ImgWidth_out; j++) {
                double xCorrected = (j - ux) / fx;
                double yCorrected = (i - uy) / fy;

                double xDistortion, yDistortion;

                //我们已知的是经过畸变矫正或理想点的坐标；
                double r2 = xCorrected * xCorrected + yCorrected * yCorrected;

                double deltaRa = 1. + k1 * r2 + k2 * r2 * r2 + k3 * r2 * r2 * r2;
                double deltaRb = 1 / (1.);
                double deltaTx = 2. * p1 * xCorrected * yCorrected + p2 * (r2 + 2. * xCorrected * xCorrected);
                double deltaTy = p1 * (r2 + 2. * yCorrected * yCorrected) + 2. * p2 * xCorrected * yCorrected;

                //下面为畸变模型；
                xDistortion = xCorrected * deltaRa * deltaRb + deltaTx;
                yDistortion = yCorrected * deltaRa * deltaRb + deltaTy;

                //最后再次通过相机模型将归一化的坐标转换到像素坐标系下；
                xDistortion = xDistortion * fx + ux;
                yDistortion = yDistortion * fy + uy;
                if (i + move_y >= 0 && i + move_y < ImgHeight_out && j + move_x >= 0 && j + move_x <= ImgWidth_out) {
                    if (yDistortion >= 0 && yDistortion < ImgHeight && xDistortion >= 0 && xDistortion < ImgWidth) {
                        distorted_img[i + move_y][j + move_x] = &now_img[(int) yDistortion][(int) xDistortion];
                    } else distorted_img[i + move_y][j + move_x] = &back_color;
                }
            }
        }

                img_tmp = cv::imread(udm_pic.path);

            cvtColor(img_tmp, img_tmp, COLOR_RGB2GRAY);

            for (int i = 0; i < ImgHeight; i++)
                for (int j = 0; j <ImgWidth; j++)
                    now_img[i][j] =    img_tmp.at<uchar>(i, j) ;

            for (int i = 0; i < ImgHeight_out; i++)
                for (int j = 0; j < ImgWidth_out; j++)
                    out1.at<uchar>(i, j) = 255;

            for (int i = 0; i < ImgHeight_out; i++)
                for (int j = 0; j < ImgWidth_out; j++)
                    out1.at<uchar>(i, j) = *distorted_img[i][j];

            cv::imshow("img", img_tmp);



            ui->label_pic1->setPixmap(QPixmap::fromImage(Mat2QImage(out1).scaled(ui->label_pic1->size())));


}

