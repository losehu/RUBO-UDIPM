#include "screen.h"
int screenX, screenY;
pic_show pic;

void show_about()
{
    QMessageBox MBox;
    MBox.setWindowTitle("About RUBO UDIPM");
    MBox.setText("RUBO UDIPM 1.8.0");
    MBox.setInformativeText(
            "Based on Qt 6.3.1 (MSVC 2019, x86_64)\n\nBuilt on Aug 21 2023 23:46:33\n\nFrom revision 1.8.0\n\nChecked by RUBO\n\nTHIS PROGRAM IS ONLY PROVIDED FOR LEARNING AND\nCOMMUNICATION, AND HAS NOTHING TO DOWITH ANY\nSCHOOL OR ORGANIZATION. ANY FORM OF COMMERCIAL\nUSE IS PROHIBITED.");
    MBox.setIconPixmap(QPixmap(":RUBO1-small.png"));
    QPushButton *agreeBut = MBox.addButton("Close", QMessageBox::AcceptRole);
    MBox.exec();
}
QImage Mat2QImage(const cv::Mat &mat)
{

        // 8-bits unsigned, NO. OF CHANNELS = 1
        if(mat.type() == CV_8UC1)
        {
            QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
            image.setColorCount(256);
            for(int i = 0; i < 256; i++)
            {
                image.setColor(i, qRgb(i, i, i));
            }
            uchar *pSrc = mat.data;
            for(int row = 0; row < mat.rows; row ++)
            {
                uchar *pDest = image.scanLine(row);
                memcpy(pDest, pSrc, mat.cols);
                pSrc += mat.step;
            }
            return image;
        }
        // 8-bits unsigned, NO. OF CHANNELS = 3
        else if(mat.type() == CV_8UC3)
        {
            // Copy input Mat
            cv::cvtColor(mat,mat,cv::COLOR_BGR2RGB);
            const uchar *pSrc = (const uchar*)mat.data;
            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
            //image = image.rgbSwapped();
            return image.copy();
        }
        else if(mat.type() == CV_8UC4)
        {
            // Copy input Mat
            const uchar *pSrc = (const uchar*)mat.data;
            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
            return image.copy();
        }
        else
        {
//            qDebug() << "ERROR: Mat could not be converted to QImage.";
            return QImage();
        }
}
