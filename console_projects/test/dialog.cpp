
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent): QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //esta funcion se difine en la clase 'QDialog'.
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_clicked()
{

}

