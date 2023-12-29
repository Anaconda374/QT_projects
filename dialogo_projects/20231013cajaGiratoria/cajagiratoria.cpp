
#include "cajagiratoria.h"
#include "ui_cajagiratoria.h"

/*
La clace "QIODevice" tiene varios modos de apertura, que se pueden combinar con el operador “|”. Los más comunes son:

    QIODevice::ReadOnly: abre el archivo para leer datos de él.
    QIODevice::WriteOnly: abre el archivo para escribir datos en él.
    QIODevice::ReadWrite: abre el archivo para leer y escribir datos de él.
    QIODevice::Append: abre el archivo y coloca el puntero al final, para añadir datos al final del archivo.
    QIODevice::Truncate: abre el archivo y lo vacía, borrando todo su contenido.
    QIODevice::Text: abre el archivo en modo texto, lo que implica una conversión de los saltos de línea según el sistema operativo.
 */


CajaGiratoria::CajaGiratoria(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CajaGiratoria)
{
    ui->setupUi(this);
    ui->btnCaja->addButton("Almacenar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Rechazar", QDialogButtonBox::ButtonRole::ActionRole);


    cargar();

}
CajaGiratoria::~CajaGiratoria()
{
    delete ui;
}




void CajaGiratoria::almacenar()
{
    QFile escribirArchivo("archivo.bat");
/*
Este codigo hace lo siguiente:
    1.Declara una variable llamada archivo de tipo QFile.
    2.Le asigna el nombre del archivo que se quiere crear o abrir, en este caso “archibo.bat”.
    3.Si el archivo no existe, lo crea. Si existe, lo abre para leer o escribir.
*/

    if(!escribirArchivo.open(QIODevice::WriteOnly)){
        //si el archivo no se abre correctamente, salta un error mensaje y se termina la aplicacion.
        QMessageBox::critical(this, "Error", escribirArchivo.errorString());
        return;
    }
    else{
    //si no, usar un objeto de "QDataStream" a escribir dato en el archivo.bat.
        QDataStream arroyo(&escribirArchivo);
/*
 “QDataStream arroyo(&archivo)” significa que se crea un objeto de tipo QDataStream llamado "arroyo", que se asocia al archivo previamente abierto. QDataStream es una clase que permite leer y escribir datos binarios de forma portable, es decir, sin depender del sistema operativo, la arquitectura o el compilador1.
 */

        arroyo << ui->editorNombre->text();
        arroyo << ui->cajaGiraDeEdad->value();
        arroyo << ui->cajaGiraDeGrado->value();

        //Despues de escribir, recueda a cerrar el archivo.
        escribirArchivo.close();
        QMessageBox::information(this, "almacenado", "Los datos se almacenan.");
    }
}


void CajaGiratoria::cargar()
{
    ui->editorNombre->setText("");
    ui->cajaGiraDeEdad->setValue(0);
    ui->cajaGiraDeGrado->setValue(0);

    QFile leerArchivo("archivo.bat");

//si se ejecuta la aplicacion en primera vez, el archivo "archivo.bat" no exist, entonce no se actua esta funcion "cargar".
    if(!leerArchivo.exists()){
        return;
    }

    if(!leerArchivo.open(QIODevice::ReadOnly)){
        //si el archivo no se abre correctamente, salta un error mensaje y se termina la aplicacion.
        QMessageBox::critical(this, "Error", leerArchivo.errorString());
        return;
    }
    else{
        QDataStream arroyo(&leerArchivo);

        QString nombre;
        int edad;
        double grado;

        arroyo >> nombre;
        arroyo >> edad;
        arroyo >> grado;

        leerArchivo.close();

        ui->editorNombre->setText(nombre);
        ui->cajaGiraDeEdad->setValue(edad);
        ui->cajaGiraDeGrado->setValue(grado);
    }

}



void CajaGiratoria::on_btnCaja_clicked(QAbstractButton *button)
{
    qDebug()<< button->text();//mostrar el texto del boton que se empujado.

    if(button->text().contains("Almacenar")){
        almacenar();
        return;
    }

    if(button->text().contains("Rechazar")){
        reject();
    }


}
