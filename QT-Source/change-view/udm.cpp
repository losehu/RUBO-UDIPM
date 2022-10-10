#include "udm.h"
#include "ui_udm.h"

#include "QMessageBox"
UdmWindow::UdmWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::UdmWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));
    ui->setupUi(this);

   }
UdmWindow::~UdmWindow() {
    delete ui;
}



