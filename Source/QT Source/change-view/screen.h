#ifndef SCREEN_H
#define SCREEN_H
#include "ty.h"
extern int screenX,screenY;


void show_about();
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
QImage Mat2QImage(const cv::Mat &mat);

extern pic_show pic;
#endif // SCREEN_H
