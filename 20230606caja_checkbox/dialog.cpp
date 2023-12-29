
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



void Dialog::on_btnImprimirTodo_clicked()
{
    //Imprimir todos hijos dentro el contenedor 'Menu'.
    QString todosPlatos = "Hoy tenemos: ";

    //Primeramente, extraer todos los objetos en 'menu'.
    QObjectList objs = ui->menu->children();
    //Segundo, verificar si cada objeto es heredado de 'QCheckBox', en ese caso, se anade a la cadena 'todoPlatos'.
    foreach(QObject* obj, objs){
        if(obj->inherits("QCheckBox")){
            QCheckBox* box = qobject_cast<QCheckBox*>(obj);//necesitamos convertir el QObject* 'obj' a QCheckBox* 'box' en primer lugar para extraer su 'texto'.
            todosPlatos += "\n";
            todosPlatos += box->text();

        }
    }
    QMessageBox::information(this, "platos", todosPlatos);

}


void Dialog::on_btnCometer_clicked()
{
    //Imprimir los platos elegidos:
    QString lista = "Lista de orden: ";

    QObjectList objs = ui->menu->children();
    foreach(QObject* obj, objs){
        if(obj->inherits("QCheckBox")){
            QCheckBox* caja = qobject_cast<QCheckBox*>(obj);

            //Si la caja es marcada, anada la a la cadena 'lista'.
            if(caja && caja->isChecked())
            {
                lista += "\r\n"+ caja->text();

            }

        }
    }
    QMessageBox::information(this, "orden", lista);


}

