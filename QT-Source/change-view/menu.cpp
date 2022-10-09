#include "ui_menu.h"
#include "menu.h"
#include "QMessageBox"
MyWindow::MyWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MyWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));


    ui->setupUi(this);
//    setFixedSize(  screenX/4,  screenY/4);

   }
MyWindow::~MyWindow() {
    delete ui;
}

void MyWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));

}

