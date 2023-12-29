#include "directoriomostrador.h"
#include "ui_directoriomostrador.h"

directorioMostrador::directorioMostrador(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::directorioMostrador)
{
    ui->setupUi(this);

    iniciar();
}

directorioMostrador::~directorioMostrador()
{
    delete ui;
}



void directorioMostrador::iniciar()
{
//Configurar "dirModelo" para "treeView"
    dirModelo.setRootPath(QDir::currentPath());

    dirModelo.setFilter(QDir::Filter::Drives|QDir::Filter::AllDirs|QDir::Filter::NoDotAndDotDot);
/*
Llama al método setRootPath del objeto dirModelo, pasándole como argumento el directorio actual del programa. Esto establece el directorio raíz del modelo de datos.
    "QDir::Filter::Drives" es un filtro que indica que se deben listar las unidades de disco disponibles en el sistema. Por ejemplo, en Windows serían C:, D:, etc. Este filtro se suele usar cuando se quiere mostrar una vista del sistema de archivos completo.

    "QDir::Filter::AllDirs" es un filtro que indica que se deben listar todos los directorios, es decir, no se debe aplicar el filtro al nombre de los directorios. Por ejemplo, si el filtro es *.txt, se mostrarán todos los directorios y los archivos que terminen en .txt1. Este filtro se suele usar cuando se quiere mostrar una vista jerárquica de los directorios.

    "QDir::Filter::NoDotAndDotDot" es un filtro que indica que no se deben listar las entradas especiales . y .., que representan el directorio actual y el directorio padre, respectivamente1. Este filtro se suele usar cuando se quiere mostrar solo el contenido del directorio actual.
*/

    ui->treeView->setModel(&dirModelo);


//Configurar "archivoModel" para "listView":
    archivoModelo.setRootPath(dirModelo.rootPath());
    archivoModelo.setFilter(QDir::Filter::Files); //hacer que "archivoModelo" solo muestre archivos.

    ui->listView->setModel(&archivoModelo);
}


//Cuando un artilugio en treeView está elegido, muestra su hijos en listView.
void directorioMostrador::on_treeView_activated(const QModelIndex &index)
{
    QString paso = dirModelo.filePath(index);
    qDebug() << paso;
    archivoModelo.setFilter(QDir::Filter::Files);


    ui->listView->setRootIndex(archivoModelo.setRootPath(paso));
    //el método "setRootPath" de QFileSystemModel devuele un valor de la clase "QModelIndex".

}


