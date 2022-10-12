#include "screen.h"
int screenX, screenY;
pic_show pic;

void show_about()
{
    QMessageBox MBox;
    MBox.setWindowTitle("About RUBO IPM");
    MBox.setText("RUBO IPM 1.4.0");
    MBox.setInformativeText(
            "Based on Qt 6.3.1 (Clang 13.0 2022-10-08 8.17.39 (Apple), arm64)\n\nBuilt on Oct 7 2022 19:15:33\n\nFrom revision 1.4.0\n\nChecked by RUBO\n\nTHIS PROGRAM IS ONLY PROVIDED FOR LEARNING AND\nCOMMUNICATION, AND HAS NOTHING TO DOWITH ANY\nSCHOOL OR ORGANIZATION. ANY FORM OF COMMERCIAL\nUSE IS PROHIBITED.");
    MBox.setIconPixmap(QPixmap(":RUBO1-small.png"));
    QPushButton *agreeBut = MBox.addButton("Close", QMessageBox::AcceptRole);
    MBox.exec();
}
