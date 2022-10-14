
#include <QApplication>
#include "screen.h"
#include "ipm.h"
#include "menu.h"
#include "udm.h"
#include "udipm.h"
#include "qthread.h"
#include "distorted.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRect screenRect = QGuiApplication::primaryScreen()->geometry();


    screenX = screenRect.width();
    screenY = screenRect.height();
    MenuWindow menuw; //menu
    menuw.show();
    IpmWindow ipmw; //Inverse Perspective Mapping
    UdmWindow udmw; //undistort Mapping
//    udmw.show();
   UdipmWindow udipmw; //undistort Mapping & Inverse Perspective Mapping
    QObject::connect(&menuw,SIGNAL(ipmshow()),&ipmw,SLOT(receiveipm())); //menu to ipm
    QObject::connect(&menuw,SIGNAL(udmshow()),&udmw,SLOT(receiveudm()));
    QObject::connect(&menuw,SIGNAL(udipmshow()),&udipmw,SLOT(receiveudipm()));

       QObject::connect(&ipmw,SIGNAL(menushow()),&menuw,SLOT(receivemenu()));
       QObject::connect(&udmw,SIGNAL(menushow()),&menuw,SLOT(receivemenu()));
       QObject::connect(&udipmw,SIGNAL(menushow()),&menuw,SLOT(receivemenu()));





    return a.exec();
}
