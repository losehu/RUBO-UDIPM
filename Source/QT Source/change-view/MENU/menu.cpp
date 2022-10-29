#include "ui_menu.h"
#include "menu.h"
#include "QMessageBox"
#include "ty.h"
#include "../UDM/udm.h"
#include "../UDIPM/udipm.h"
#include "../IPM/ipm.h"

void MenuWindow::receivemenu()
{
    this->show();
}
MenuWindow::MenuWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MenuWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));


    ui->setupUi(this);

    setFixedSize( 300,200);

   }
MenuWindow::~MenuWindow() {
    delete ui;
}

void MenuWindow::on_pushButton_clicked()
{

    if(ui->radioButton_ipm->isChecked()){

            this->hide();//隐藏test窗口
            emit ipmshow();
    } else if(ui->radioButton_udm->isChecked()){


            this->hide();//隐藏test窗口
            emit udmshow();
    }else
    {
        QMessageBox::information(this, tr("错误"), tr("请选择图像处理方案!"));
    }


}


void MenuWindow::on_action_about_triggered()
{
   show_about();
}


void MenuWindow::on_action_exit_triggered()
{
    MenuWindow::close();
}

