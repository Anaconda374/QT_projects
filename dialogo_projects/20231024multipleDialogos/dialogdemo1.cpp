
#include "dialogdemo1.h"
#include "ui_dialogdemo1.h"


DialogDemo1::DialogDemo1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogDemo1)
{
    ui->setupUi(this);
}

DialogDemo1::~DialogDemo1()
{
    delete ui;
}



void DialogDemo1::on_btnConPadre_clicked()
{
    //Abre un diálogo que tiene el padre:
    DialogDemo2* dialogoNuevo = new DialogDemo2(this);
    dialogoNuevo->show();
    //"->show()" normalmente se usa para mostrar múltiple ventanas y no importa si el usuario las interactua.
}

void DialogDemo1::on_btnConPadre_modalDialogo_clicked()
{
    //Abre un diálogo que tiene el padre y se muestra como un "modal diálogo": Para forzar el usuario a interactuar con el diálogo(más delantero), hasta lo que se cierra.
    DialogDemo2* dialogoNuevo = new DialogDemo2(this);
    dialogoNuevo->exec();
}



void DialogDemo1::on_btnSinPadre_clicked()
{
    //Abre un diálogo que sin padre:
    DialogDemo2* dialogoNuevo = new DialogDemo2(nullptr);
    dialogoNuevo->show();
}



