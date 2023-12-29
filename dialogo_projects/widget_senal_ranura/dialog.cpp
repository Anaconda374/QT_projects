
#include "dialog.h"
#include "ui_dialog.h"

/*
Podemos conectar una accion de 'ui', por ejemplo, teclear un boton, a otra funcion o ranura usando varios metodos:
    1.Edición interna en "ui" form;
    2. usar 'QObject::connect(...)';
    3. mediante 'editor': llamar la funcion o ranura dentro la difinicion de la accion.
 */

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //connect:
    connect(ui->btnSaltar, &QPushButton::clicked, this, &Dialog::saltarFecha);
    //En realidad, 'Qt_designer' hace la misma mision cuando hacemos "interior conexicion", podemos ver en *.ui xml archivo.
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::imprimirFecha()
{
    qInfo()<<"imprimir boton tecleado"<< QDateTime::currentDateTime();
}

void Dialog::saltarFecha()
{
    QDateTime fechaTiempo = QDateTime::currentDateTime();
    QMessageBox::information(this, "SaltarInfo", fechaTiempo.toString());
}


void Dialog::on_btnImprimir_clicked()
{
    //llamar la ranura:
    imprimirFecha();
}

