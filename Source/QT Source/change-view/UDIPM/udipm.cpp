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




}

