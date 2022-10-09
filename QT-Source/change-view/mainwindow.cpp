#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rubo_label.h"
using namespace std;
using namespace cv;
int screenX, screenY;
pic_show pic;
MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow) {



    this->setWindowIcon(QIcon(":RUBO1-tou.png"));

    ui->setupUi(this);

    mouse_init();
    /*************定时器*********************/
    id1 = startTimer(1000);
    QTimer *timer = new QTimer(this); /* 创建一个新的定时器 */
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer->start(1); /* 设置溢出时间为1秒，并启动定时器 */
    srand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    open_mainwindows_updata_windows();

   }
bool MainWindow::judge_int(QString a) {
    if (!a.contains(QRegularExpression("^\\d+$"))) {
        QMessageBox::critical(this, "错误", "参数输入错误！");
        return 0;
    }
    return 1;
}
MainWindow::~MainWindow() {
    delete ui;
}
void MainWindow::open_pic_update_windows() {
    init_windows(pic.show_width, pic.show_high);
    ui->label_tips->setText("用鼠标右键点击，从方形左下-右下-左上-右上选取四个点:");
    ui->label_pic1->setGeometry(ui->label_pic1->x(), ui->label_pic1->y(), pic.show_width, pic.show_high);
}
void MainWindow::open_mainwindows_updata_windows() {
    QRect screenRect = QGuiApplication::primaryScreen()->geometry();

    //获取设备屏幕大小
    screenX = screenRect.width();
    screenY = screenRect.height();
    int init_width = 114, init_high = 100;
    float n1 = (float)screenX / 5 * 3 / init_width;
    float n2 =(float) screenY / 5 * 3 / init_high;

    pic.zoom = min(n1, n2);
    if(pic.zoom>1)pic.zoom=(int)pic.zoom;
    pic.show_width = pic.zoom * init_width;
    pic.show_high = pic.zoom * init_high;
    init_windows(pic.show_width, pic.show_high); //1200--940 600-600
    ui->button_change->setEnabled(0);
    ui->label_tips->setText("请打开图片");
    pic.PIC_OPEN = 0;
    pic.change = 0;
}
void MainWindow::QString_to_string(QString a, string *b) {
    *b = a.toStdString();
}
void MainWindow::init_model1_windows(int start_x, int start_y) {
    ui->label_width->setGeometry(start_x, start_y, ui->label_width->width(), ui->label_width->height());
    ui->label_high->setGeometry(start_x, start_y + 50, ui->label_high->width(), ui->label_high->height());
    ui->label_ysite->setGeometry(start_x - 50, start_y + 50 * 2, ui->label_ysite->width(), ui->label_ysite->height());
    ui->label_len->setGeometry(start_x, start_y + 50 * 3, ui->label_len->width(), ui->label_len->height());
    ui->text_width->setGeometry(start_x + 100, start_y - 10, ui->text_width->width(), ui->text_width->height());
    ui->text_high->setGeometry(start_x + 100, start_y + 50 - 10, ui->text_high->width(), ui->text_high->height());
    ui->text_ysite->setGeometry(start_x + 100, start_y + 50 * 2 - 10, ui->text_ysite->width(),
                                ui->text_ysite->height());
    ui->text_len->setGeometry(start_x + 100, start_y + 50 * 3 - 10, ui->text_len->width(), ui->text_len->height());
}
void MainWindow::init_model2_windows(int start_x, int start_y) {
    ui->label_x1->setGeometry(start_x, start_y, ui->label_x1->width(), ui->label_x1->height());
    ui->label_x2->setGeometry(start_x, start_y + 50, ui->label_x2->width(), ui->label_x2->height());
    ui->label_x3->setGeometry(start_x, start_y + 50 * 2, ui->label_x3->width(), ui->label_x3->height());
    ui->label_x4->setGeometry(start_x, start_y + 50 * 3, ui->label_x4->width(), ui->label_x4->height());
    ui->label_y1->setGeometry(start_x + 100, start_y, ui->label_y1->width(), ui->label_y1->height());
    ui->label_y2->setGeometry(start_x + 100, start_y + 50, ui->label_y2->width(), ui->label_y2->height());
    ui->label_y3->setGeometry(start_x + 100, start_y + 50 * 2, ui->label_y3->width(), ui->label_y3->height());
    ui->label_y4->setGeometry(start_x + 100, start_y + 50 * 3, ui->label_y4->width(), ui->label_y4->height());
    ui->text_x1->setGeometry(start_x + 30, start_y - 10, ui->text_x1->width(), ui->text_x1->height());
    ui->text_x2->setGeometry(start_x + 30, start_y + 50 - 10, ui->text_x2->width(), ui->text_x2->height());
    ui->text_x3->setGeometry(start_x + 30, start_y + 50 * 2 - 10, ui->text_x3->width(), ui->text_x3->height());
    ui->text_x4->setGeometry(start_x + 30, start_y + 50 * 3 - 10, ui->text_x4->width(), ui->text_x4->height());
    ui->text_y1->setGeometry(start_x + 100 + 30, start_y - 10, ui->text_y1->width(), ui->text_y1->height());
    ui->text_y2->setGeometry(start_x + 100 + 30, start_y + 50 - 10, ui->text_y2->width(), ui->text_y2->height());
    ui->text_y3->setGeometry(start_x + 100 + 30, start_y + 50 * 2 - 10, ui->text_y3->width(), ui->text_y3->height());
    ui->text_y4->setGeometry(start_x + 100 + 30, start_y + 50 * 3 - 10, ui->text_y4->width(), ui->text_y4->height());
}
void MainWindow::init_model3_windows(int start_x, int start_y) {
    ui->button_clear->setGeometry(start_x + 60, start_y, ui->button_clear->width(), ui->button_clear->height());
    ui->button_openpic->setGeometry(start_x + 60, start_y + 40, ui->button_openpic->width(),
                                    ui->button_openpic->height());
    ui->button_change->setGeometry(start_x + 60, start_y + 80, ui->button_change->width(), ui->button_change->height());
}
void MainWindow::init_model4_windows(int start_x, int start_y) {
    ui->label_pic1->setGeometry(start_x, start_y, ui->label_pic1->width(), ui->label_pic1->height());
}
void MainWindow::init_model5_windows(int start_x, int start_y) {
    ui->label_tips->setGeometry(start_x, start_y, ui->label_tips->width(), ui->label_tips->height());
}
void MainWindow::init_windows(int start_width, int start_high) {
    /****************main_window*******************/
    setFixedSize(this->width(), this->height());
    /****************modle1***************/
    int model1_start_x = start_width + 60, model1_start_y = 30;
    init_model1_windows(model1_start_x, model1_start_y);
    int model2_start_x = start_width + 60, model2_start_y = 230;
    init_model2_windows(model2_start_x, model2_start_y);
    int model3_start_x = start_width + 60 - 10, model3_start_y = 420;
    init_model3_windows(model3_start_x, model3_start_y);
    int model4_start_x = 0, model4_start_y = 0;
    init_model4_windows(model4_start_x, model4_start_y);
    setFixedSize(start_width + 260, max(start_high + 50, 650));
    int model5_start_x = 0, model5_start_y = start_high + 5;
    init_model5_windows(model5_start_x, max(start_high + 50, 650)-45);
}
void MainWindow::update_windows() {
}
void MainWindow::active_windows() {
    Qt::WindowStates winStatus = Qt::WindowNoState;
    if (windowState() & Qt::WindowMaximized) {
        winStatus = Qt::WindowMaximized;
    }
    setWindowState(Qt::WindowMinimized);
    setWindowState(Qt::WindowActive | winStatus);
    setGeometry(geometry());
    activateWindow();
    raise();
}
void MainWindow::on_button_openpic_clicked() {
    QString filename = QFileDialog::getOpenFileName(this, tr("选择图像"), "", tr("Images (*.png *.bmp *.jpg)"));
    if (filename.isEmpty()) return;
    QImage img;
    if (!(img.load(filename))) //加载图像
    {
        QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));
        return;
    }
    string path;
       string name=filename.toLocal8Bit().toStdString();//设置为可以读取中文路径
    read_pic(name);
    update_windows();
    float n1 = (float)screenX / 5 * 3 / img.width();
    float n2 = (float)screenY / 5 * 3 / img.height();



    pic.zoom = min(n1, n2);
    if(pic.zoom>1)pic.zoom=(int)pic.zoom;

    pic.width = img.width();
    pic.high = img.height();
    pic.show_width = pic.zoom * pic.width;
    pic.show_high = pic.zoom * pic.high;
    open_pic_update_windows();
    init_para();
    on_button_clear_clicked();
    ui->label_pic1->setPixmap(QPixmap::fromImage(img.scaled(ui->label_pic1->size())));
    ui->button_change->setEnabled(1);
    active_windows();
}
void MainWindow::on_button_clear_clicked() {
    ui->text_x1->clear();
    ui->text_y1->clear();
    ui->text_x2->clear();
    ui->text_y2->clear();
    ui->text_x3->clear();
    ui->text_y3->clear();
    ui->text_x4->clear();
    ui->text_y4->clear();
    pic.click_cnt = 0;
    pic.change = 0;
}
void MainWindow::timerUpdate() { /* 定时器溢出处理 */
    if (!pic.PIC_OPEN)return;

    if (pic.change) {
        QString str = "透视变换成功,已复制至剪切板";
        ui->label_tips->setText(str);
        return;
    }
    if (mouse_flag.enter) {

        if (mouse_flag.click == 2) {
            if (pic.click_cnt == 1) {
                QString str = "选中第一个点x:" + QString::number(mouse_flag.x, 10) + "   " + "y:" +
                              QString::number(mouse_flag.y, 10);
                ui->label_tips->setText(str);
                ui->text_x1->append(QString::number(mouse_flag.x, 10));
                ui->text_y1->append(QString::number(mouse_flag.y, 10));
            }
            if (pic.click_cnt == 2) {
                QString str = "选中第二个点x:" + QString::number(mouse_flag.x, 10) + "   " + "y:" +
                              QString::number(mouse_flag.y, 10);
                ui->label_tips->setText(str);
                ui->text_x2->append(QString::number(mouse_flag.x, 10));
                ui->text_y2->append(QString::number(mouse_flag.y, 10));
            }
            if (pic.click_cnt == 3) {
                QString str = "选中第三个点x:" + QString::number(mouse_flag.x, 10) + "   " + "y:" +
                              QString::number(mouse_flag.y, 10);
                ui->label_tips->setText(str);
                ui->text_x3->append(QString::number(mouse_flag.x, 10));
                ui->text_y3->append(QString::number(mouse_flag.y, 10));
            }
            if (pic.click_cnt == 4) {
                QString str = "选中第四个点x:" + QString::number(mouse_flag.x, 10) + "   " + "y:" +
                              QString::number(mouse_flag.y, 10);
                ui->label_tips->setText(str);
                ui->text_x4->append(QString::number(mouse_flag.x, 10));
                ui->text_y4->append(QString::number(mouse_flag.y, 10));
            }
            mouse_flag.click = 0;
            mouse_flag.move = 0;
            return;
        }
        if (mouse_flag.move && pic.change == 0) {
            mouse_flag.move = 0;
            QString str = "x:" + QString::number(mouse_flag.x, 10) + "   " + "y:" + QString::number(mouse_flag.y, 10);
            ui->label_tips->setText(str);
        }
    } else {
        ui->label_tips->setText("用鼠标右键点击,从方形左下-右下-左上-右上选取四个点");
    }
}
void MainWindow::on_button_change_clicked() {
    QString num_tmp;
    /**********************结果图基本信息***********************/
    num_tmp = ui->text_width->toPlainText();
    if (!judge_int(num_tmp))return;
    width_end = num_tmp.toInt();
    num_tmp = ui->text_high->toPlainText();
    if (!judge_int(num_tmp))return;
    high_end = num_tmp.toInt();
    num_tmp = ui->text_ysite->toPlainText();
    if (!judge_int(num_tmp))return;
    point_center_y = num_tmp.toInt();
    num_tmp = ui->text_len->toPlainText();
    if (!judge_int(num_tmp))return;
    see_len = num_tmp.toInt();

    /***********************透视坐标***************************/
    num_tmp = ui->text_x1->toPlainText();
    if (!judge_int(num_tmp))return;
    point[0][0] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_y1->toPlainText();
    if (!judge_int(num_tmp))return;
    point[0][1] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_x2->toPlainText();
    if (!judge_int(num_tmp))return;
    point[1][0] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_y2->toPlainText();
    if (!judge_int(num_tmp))return;
    point[1][1] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_x3->toPlainText();
    if (!judge_int(num_tmp))return;
    point[2][0] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_y3->toPlainText();
    if (!judge_int(num_tmp))return;
    point[2][1] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_x4->toPlainText();
    if (!judge_int(num_tmp))return;
    point[3][0] = (float) (num_tmp.toFloat());
    num_tmp = ui->text_y4->toPlainText();
    if (!judge_int(num_tmp))return;
    point[3][1] = (float) (num_tmp.toFloat());
    change_view();
    pic.change = 1;
}
void MainWindow::on_action_2_triggered() {
    qApp->quit();
}
void MainWindow::on_about_triggered() {
    QMessageBox MBox;
    MBox.setWindowTitle("About RUBO IPM");
    MBox.setText("RUBO IPM 1.4.0");
    MBox.setInformativeText(
            "Based on Qt 6.3.1 (Clang 13.0螢幕截圖 2022-10-08 下午8.17.39 (Apple), arm64)\n\nBuilt on Oct 7 2022 19:15:33\n\nFrom revision 1.4.0\n\nChecked by RUBO\n\nTHIS PROGRAM IS ONLY PROVIDED FOR LEARNING AND\nCOMMUNICATION, AND HAS NOTHING TO DOWITH ANY\nSCHOOL OR ORGANIZATION. ANY FORM OF COMMERCIAL\nUSE IS PROHIBITED.");
    MBox.setIconPixmap(QPixmap(":RUBO1-small.png"));
    QPushButton *agreeBut = MBox.addButton("Close", QMessageBox::AcceptRole);
    MBox.exec();
}
void MainWindow::on_open_triggered() {
    on_button_openpic_clicked();
}

void MainWindow::on_pushButton_clicked()
{

    myw.show();

}




