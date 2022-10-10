#include "udm.h"
#include "ui_udm.h"
#include "menu.h"
#include "QMessageBox"
#include "screen.h"
void UdmWindow::receiveudm()
{
    this->show();
}
UdmWindow::UdmWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::UdmWindow) {

    this->setWindowIcon(QIcon(":RUBO1-tou.png"));
    ui->setupUi(this);
    int init_width = 114, init_high = 100;
    float n1 = (float)screenX / 5 * 3 / init_width;
    float n2 =(float) screenY / 5 * 3 / init_high;

    pic.zoom = min(n1, n2);
    if(pic.zoom>1)pic.zoom=(int)pic.zoom;
    pic.show_width = pic.zoom * init_width;
    pic.show_high = pic.zoom * init_high;
//    setFixedSize(pic.show_width + 260, max(pic.show_high + 50, 650));

}
UdmWindow::~UdmWindow() {
    delete ui;
}
using namespace std;




void UdmWindow::on_exit_triggered()
{
    UdmWindow::close();
}








void UdmWindow::on_back_triggered()
{
    this->hide();//隐藏test窗口

    menushow();

}


void UdmWindow::on_radioButton_clicked()
{

}


void UdmWindow::on_radioButton_pic_clicked()
{
    if(ui->radioButton_pic->isChecked()){
        ui->text_high->setEnabled(0);
        ui->text_width->setEnabled(0);
        ui->text_x->setEnabled(0);
        ui->text_y->setEnabled(0);

}else
    {
        ui->text_high->setEnabled(1);
        ui->text_width->setEnabled(1);
        ui->text_x->setEnabled(1);
        ui->text_y->setEnabled(1);
    }
}


void UdmWindow::on_action_triggered()
{
    show_about();

}

