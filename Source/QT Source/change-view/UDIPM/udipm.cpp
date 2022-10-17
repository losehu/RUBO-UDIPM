#include "ui_udipm.h"
#include "udipm.h"
#include "QMessageBox"
#include "QFileDialog"
using namespace std;
#include "file.h"
void UdipmWindow::receiveudipm()
{
    this->show();
}
UdipmWindow::UdipmWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::UdipmWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));


    ui->setupUi(this);
//    setFixedSize(  screenX/4,  screenY/4);

   }
UdipmWindow::~UdipmWindow() {
    delete ui;
}




void UdipmWindow::on_back_triggered()
{
    this->hide();//隐藏test窗口

    menushow();
}


void UdipmWindow::on_exit_triggered()
{
    UdipmWindow::close();
}


void UdipmWindow::on_action_triggered()
{
    show_about();
}


void UdipmWindow::on_button_clear_2_clicked()
{

}


void UdipmWindow::on_button_opendir_clicked()
{
    QString filePath = QFileDialog::getExistingDirectory(this, "选择图片文件夹路径...", "./");
     string dir=filePath.toLocal8Bit().toStdString();



vector<string> allFileList = getFilesList(dir);
      if(! path_check_ok)return;
      int pic_num = allFileList.size();
      if(pic_num<10){
              QMessageBox::critical(this, "错误", "图片数目太少");

          return;
      }
      string pic_name[pic_num];
      pic_num = get_picname(dir, pic_name);
if(pic_num==-1)return;



}

