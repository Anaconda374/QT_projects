#include "stringlistmodelo.h"
#include "ui_stringlistmodelo.h"

StringListModelo::StringListModelo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StringListModelo)
{
    ui->setupUi(this);

    iniciar();
}

StringListModelo::~StringListModelo()
{
    delete ui;
}



void StringListModelo::on_btnAnadir_clicked()
{
    QString entrada = QInputDialog::getText(this, "Añadir item", "Entrar una cadena a añdir: ");
    if(entrada.isEmpty()) return;

    //recuperar el indice del artículo elegido:
    QModelIndex indice = ui->listView->currentIndex();
    //el objeto "indice" de la clase "QModelIndex" es una pareja de coordenadas basado de 0 -- "(fila, columna)" .

    //usar el modelo a añdir una fila depués de la corriente:
    if(modelo.insertRow(indice.row() + 1)){

        QModelIndex indiceNuevo = modelo.index(indice.row() + 1, 0);
        //como el dato solo usa una columna, la coordenada de columna es "0".

        ui->listView->setCurrentIndex(indiceNuevo);
        modelo.setData(indiceNuevo, entrada);
        return;
    }

}



void StringListModelo::on_btnBorrar_clicked()
{
    //recuperar el indice del artículo elegido:
    QModelIndex indice = ui->listView->currentIndex();

    //usar el modelo a borrar el artículo elegido con su indice:
    modelo.removeRow(indice.row());


}

void StringListModelo::iniciar()
{
    //hacer el dato:
    lista.append("gato");
    lista.append("perro");
    lista.append("ave");
    lista.append("pez");

    //crear un modelo que es inicializado por una lista de cadenas:
    modelo.setStringList(lista);

    //establecer la vista:
    ui->listView->setModel(&modelo);


}

