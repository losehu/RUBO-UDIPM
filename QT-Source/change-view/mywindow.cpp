#include "ui_mywindow.h"
#include "mywindow.h"
#include "QMessageBox"
MyWindow::MyWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MyWindow) {



    ui->setupUi(this);

   }
MyWindow::~MyWindow() {
    delete ui;
}

void MyWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));

}

