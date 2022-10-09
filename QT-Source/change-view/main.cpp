#include "ipm.h"
#include "menu.h"
#include <QApplication>
#include "window.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QRect screenRect = QGuiApplication::primaryScreen()->geometry();

    //获取设备屏幕大小
    screenX = screenRect.width();
    screenY = screenRect.height();
//    MainWindow w;
//    w.show();
    MyWindow myw;
    myw.show();

    return a.exec();
}
