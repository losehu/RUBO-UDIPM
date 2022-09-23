#ifndef CHANGEVIEW_H
#define CHANGEVIEW_H
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

extern Mat src;

void read_pic(string path);
void init_para();
void change_view();
extern int width ;
extern int high ;
extern int width_end ;
extern int high_end ;
extern float point[4][2];
extern int point_center_y ;//0~high_end
extern int see_len ;
#endif // CHANGEVIEW_H
