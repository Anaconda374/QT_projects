
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnAceptar_clicked()
{
    /*
    El primer parametro 'parent' es el puntero a 'this' Dialog objeto.
    El segundo parametro 'title' es un QString 'noticia'.
    El tercer ~ es que queremos mostrar, accesa los artilugios subordinados mediante el puntero 'ui' a this objeto.
    */
    QMessageBox::information(this, "la noticia", ui->lineEdit->text() +", bienvenido");
    ui->lineEdit->clear();
}



