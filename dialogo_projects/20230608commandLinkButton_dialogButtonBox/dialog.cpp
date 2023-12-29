
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

void Dialog::modoElegido(QObject *emisor)
{
    //primero convertir QObject* en QCommandLinkButton.
    QCommandLinkButton* btn = qobject_cast<QCommandLinkButton*>(emisor);
    ui->textEdit->setText(btn->text());

}

void Dialog::on_buttonBox_accepted()
{
    QMessageBox::information(this, "ok", "Cometer y Cerrar!");
    accept();
}


void Dialog::on_buttonBox_rejected()
{
    QMessageBox::critical(this, "cancel", "Canselar y Cerrar!");
    accept();
}


void Dialog::on_buttonBox_helpRequested()
{
    //EL metodo "QMessageBox::question" avisa dos opciones al usuario para que se puede elegir.
    QMessageBox::question(this, "Help", "Ayuda informacion.");

}




void Dialog::on_cmdBtnRegistro_clicked()
{
    //'sender()' es una funcion incorporada en 'QObject', indica "un puntero al object" que esta emitiendo el senal
    modoElegido(sender()); //llama la funcion 'modoElegido' ye usamos corriente boton object que tiene un tipo de'QObject*' , como el parametro.
}


void Dialog::on_cmdBtnBuscar_clicked()
{
    modoElegido(sender());
}

