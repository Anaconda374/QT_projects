
#include "demodialogo.h"
#include "ui_demodialogo.h"


DemoDialogo::DemoDialogo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DemoDialogo)
{
    ui->setupUi(this);
}

DemoDialogo::~DemoDialogo()
{
    delete ui;
}


