#include "ui_menu.h"
#include "menu.h"
#include "QMessageBox"
MenuWindow::MenuWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MenuWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));


    ui->setupUi(this);
//    setFixedSize(  screenX/4,  screenY/4);

   }
MenuWindow::~MenuWindow() {
    delete ui;
}

void MenuWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));

}

