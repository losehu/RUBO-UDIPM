#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "change-view.h"
using namespace std;
using namespace cv;
#define num_type unsigned char
int width;
int high;
int width_end;
int high_end;
float point[4][2];
int point_center_y;//0~high_end
int see_len;
bool flag = false;
Mat src;
int test_flag = 1;   //0进行透视变换  1获取矩阵
int val1;
int cnt = 0;
int x31,
        x41,
        x11, y11
, x21, y21,
        x12, y12,
        x22, y22;
int point_center_x;
QString Mat2QString(const Mat &src1) {
    if (src1.empty()) return QString();
    stringstream stream;
    stream << src1;
    return QString::fromStdString(stream.str());
}
void read_pic(string path) {
    src = imread(path);
    width = src.cols;
    high = src.rows;
    cvtColor(src, src, COLOR_RGB2GRAY, 0);
}
void init_para() {
    pic.PIC_OPEN = 1;
    pic.click_cnt = 0;
    pic.change = 0;
}
void change_view() {
    point_center_x = width_end / 2;
    vector <Point2f> src_coners(4);
    int y31, y41;
    x31 = point[0][0],
    x41 = point[1][0],
    x11 = point[2][0], y11 = point[2][1], y21 = point[3][1];
    x21 = point[3][0], y31 = point[0][1], y41 = point[1][1];
    x12 = point_center_x - see_len / 2, y12 = point_center_y - see_len / 2,
    x22 = point_center_x + see_len / 2, y22 = point_center_y + see_len / 2;
    /*
     *         (x11,y11)******************(x21,y11)            (x12,y12)**************(x22,y12)
     *                *                   *                             *            *
     *              *       原图（梯形）      *         -------->         * 结果（正方形）*
     *             *                          *                         *            *
     *   (x31,y21)******************************(x41,y21)      (x12,y22)**************(x22,y22)
     *   test_flag=1时：(坐标手点，从X31开始，逆时针点四次)                  （坐标自己在代码上修改）   ---->    将打印出的矩阵放入代码
     *   test_flag=0时：                              右键图片查看效果
     *
     *
     */

    src_coners[0] = Point2f(x31, y31);
    src_coners[1] = Point2f(x41, y41);
    src_coners[2] = Point2f(x11, y11);
    src_coners[3] = Point2f(x21, y21);
    vector <Point2f> dst_coners(4);
    dst_coners[0] = Point2f(x12, y22);
    dst_coners[1] = Point2f(x22, y22);
    dst_coners[2] = Point2f(x12, y12);
    dst_coners[3] = Point2f(x22, y12);
    Mat warpMatrix;
    warpMatrix = getPerspectiveTransform(src_coners, dst_coners);
    double change_Mat[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            change_Mat[i][j] = warpMatrix.at<double>(i, j);
    num_type src_tmp1[high][width];
    double change_un_Mat[3][3];
    for (int i = 0; i < high; i++)
        for (int j = 0; j < width; j++)
            src_tmp1[i][j] = src.at<uchar>(i, j);
    Mat un_warpMatrix;     //逆矩阵

    invert(warpMatrix, un_warpMatrix, DECOMP_LU);
    cout << "逆矩阵" << endl << un_warpMatrix << endl;
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(Mat2QString(un_warpMatrix));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            change_un_Mat[i][j] = un_warpMatrix.at<double>(i, j);
    unsigned char *b[high_end][width_end];
    /******************指针地址映射*******************/
    unsigned char back_color = 255;
    for (int i = 0; i < width_end; i++) {
        for (int j = 0; j < high_end; j++) {
            int local_x = (int) ((change_un_Mat[0][0] * i + change_un_Mat[0][1] * j + change_un_Mat[0][2]) /
                                 (change_un_Mat[2][0] * i + change_un_Mat[2][1] * j + change_un_Mat[2][2]));
            int local_y = (int) ((change_un_Mat[1][0] * i + change_un_Mat[1][1] * j + change_un_Mat[1][2]) /
                                 (change_un_Mat[2][0] * i + change_un_Mat[2][1] * j + change_un_Mat[2][2]));
            if (local_x >= 0 && local_y >= 0 && local_y < high && local_x < width) {
                b[j][i] = &src_tmp1[local_y][local_x];
            } else b[j][i] = &back_color;
        }
    }

    /**********数组获取指针值&显示图片***********************/
    Mat src1;
    src1 = (Mat::ones(high_end, width_end, CV_8U));
    unsigned char bb[high_end][width_end];//图
    memset(bb, 0, sizeof(bb));
    for (int i = 1; i < high_end - 1; i++)
        for (int j = 1; j < width_end - 1; j++)
            bb[i][j] = *b[i][j];
    for (int i = 0; i < high_end; i++)
        for (int j = 0; j < width_end; j++)
            src1.at<uchar>(i, j) = bb[i][j];
    namedWindow("result", 0);
    int n1 = screenX / 5 * 3 / width_end;
    int n2 = screenY / 5 * 3 / high_end;
    resizeWindow("result", width_end * min(n1, n2), high_end * min(n1, n2));
    imshow("result", src1);
}
