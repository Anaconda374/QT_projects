#include "dialogdemo2.h"
#include "ui_dialogdemo2.h"

DialogDemo2::DialogDemo2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDemo2)
{
    ui->setupUi(this);
}

DialogDemo2::~DialogDemo2()
{
    delete ui;
}

void DialogDemo2::on_btnAcceptar_clicked()
{
    accept();
}

