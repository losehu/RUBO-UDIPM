#ifndef RUBO_LABEL_H
#define RUBO_LABEL_H
#include <QLabel>
#include "mainwindow.h"

class MainWindow;

class myLabel : public QLabel
{
    Q_OBJECT
public:

     myLabel(QWidget *parent = nullptr);

    //鼠标进入事件
     void enterEvent(QEnterEvent *event);

    //鼠标离开事件
     void leaveEvent(QEnterEvent *event);

    void mousePressEvent(QMouseEvent *ev);

    void mouseMoveEvent(QMouseEvent *ev);

signals:
};
void mouse_init();


struct  mouse
{
    bool enter;
    int x,y;
    int click; //0 1l 2r
    bool move;
};
extern mouse mouse_flag ;

#endif // RUBO_LABEL_H
