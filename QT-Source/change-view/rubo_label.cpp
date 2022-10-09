#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
mouse mouse_flag ;
void mouse_init()
{
    mouse_flag.click=0;
    mouse_flag.enter=0;
    mouse_flag.x=0;
    mouse_flag.y=0;
    mouse_flag.move=0;
    pic.click_cnt=0;
    
    
}
myLabel::myLabel(QWidget *parent) :QLabel(parent)
  
{
    setMouseTracking(true);
    
}

void myLabel::mousePressEvent(QMouseEvent *ev)
{
    if(!pic.PIC_OPEN)return;
    mouse_flag.move=0;
    
    if(ev->button()==Qt::LeftButton)
    {
        
        mouse_flag.click=1;
    }
    if(ev->button()==Qt::RightButton)
    {
        if(    pic.click_cnt<=4)  pic.click_cnt++;
        
        
        mouse_flag.click=2;
        
    }
    
}
//鼠标进入事件
void myLabel::enterEvent(QEnterEvent *event)
{
    mouse_flag.enter=1;
    
}
//鼠标离开事件
    void myLabel::leaveEvent(QEnterEvent *event)
    {

    mouse_flag.enter=0;
}

void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
    if(!pic.PIC_OPEN)return;
    if(mouse_flag.click==2)return;
    mouse_flag.x=ev->x()/pic.zoom;
    mouse_flag.y=ev->y()/pic.zoom;
    mouse_flag.move=1;

    
}

