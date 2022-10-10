#include "ui_udipm.h"
#include "udipm.h"
#include "QMessageBox"
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



