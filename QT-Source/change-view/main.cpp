#include "ipm.h"
#include "menu.h"
#include <QApplication>
#include "screen.h"
#include "udm.h"
#include "udipm.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QRect screenRect = QGuiApplication::primaryScreen()->geometry();

    //获取设备屏幕大小
    screenX = screenRect.width();
    screenY = screenRect.height();
    IpmWindow ipmw; //Inverse Perspective Mapping
    ipmw.show();
    UdmWindow udmw; //undistort Mapping
    udmw.show();
    MenuWindow menuw; //menu
    menuw.show();
    UdipmWindow udipmw; //undistort Mapping & Inverse Perspective Mapping
    udipmw.show();

    return a.exec();
}
