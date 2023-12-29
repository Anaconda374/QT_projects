#include "archivosistemapersonalizado.h"
#include "ui_archivosistemapersonalizado.h"

ArchivoSistemaPersonalizado::ArchivoSistemaPersonalizado(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ArchivoSistemaPersonalizado)
{
    ui->setupUi(this);

    iniciar();
}

ArchivoSistemaPersonalizado::~ArchivoSistemaPersonalizado()
{
    delete ui;
}

void ArchivoSistemaPersonalizado::iniciar()
{

    QDir dir = QDir::home();
    QFileInfoList lista = dir.entryInfoList();
    QStringList titulos; //Unas lista para almacenar los titulos para 2 primera columnas.
    titulos.append("Nombre");
    titulos.append("Valor");
    arbolModelo.setHorizontalHeaderLabels(titulos);
    ui->treeView->setModel(&arbolModelo);

    foreach (QFileInfo info, lista) {
        if(info.isFile()){
            anadirArchivo(arbolModelo.invisibleRootItem(), info);
        }
        if(info.isDir()){
            anadirDir(arbolModelo.invisibleRootItem(), info);
        }

    }

}



void ArchivoSistemaPersonalizado::anadirArchivo(QStandardItem *raiz, QFileInfo archivoInfo)
{
    QStandardItem* item = new QStandardItem(archivoInfo.fileName());

    raiz->appendRow(item);//añadir "item" a la raiz.

    item->setChild(0,0,new QStandardItem("Tamaño"));
        item->setChild(0,1,new QStandardItem(QString("%0 KB").arg(archivoInfo.size())));

    item->setChild(1,0,new QStandardItem("Creado en"));
    item->setChild(1,1,new QStandardItem(archivoInfo.birthTime().toString()));

    item->setChild(2,0,new QStandardItem("Modificado en"));
    item->setChild(2,1,new QStandardItem(archivoInfo.lastModified().toString()));

}

void ArchivoSistemaPersonalizado::anadirDir(QStandardItem *raiz, QFileInfo dirInfo)
{
    QDir dirNuevo(dirInfo.absoluteFilePath());

    // Crear un nuevo item con el nombre del directorio
    QStandardItem* item = new QStandardItem(dirInfo.fileName());

    // Añadir el item a la raíz
    raiz->appendRow(item);

    // recorrerDir(raiz, dirNuevo);

    // Obtener la lista de archivos y subdirectorios dentro del directorio
    // Usando otro constructor de QDir para excluir las entradas especiales . y ..
    QFileInfoList lista = dirNuevo.entryInfoList(QDir::Filter::AllEntries|QDir::Filter::NoDotAndDotDot);

    // Recorrer la lista y llamar a las funciones correspondientes según el tipo de elemento
    foreach (QFileInfo info, lista) {
        if(info.isFile()){
            anadirArchivo(item, info);
        }
        if(info.isDir()){
            anadirDir(item, info);
        }
    }
}


