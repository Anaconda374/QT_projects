
#include "recurso_explorador.h"
#include "ui_recurso_explorador.h"


recurso_explorador::recurso_explorador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recurso_explorador)
{
    ui->setupUi(this);
    cargar();
}

recurso_explorador::~recurso_explorador()
{
    delete ui;
}



void recurso_explorador::on_listaArtilugios_itemSelectionChanged()
{
    QListWidgetItem *item = ui->listaArtilugios->currentItem();
    ui->rotuloPaso->setText(item->text());
    //El método “setPixmap” de la clase “QLabel” en Qt 6 se utiliza para mostrar una imagen en una etiqueta. El método toma un objeto QPixmap como argumento y lo asigna a la etiqueta.
    QPixmap pixmap(item->icon().pixmap(32,32));
    ui->rotuloIcono->setPixmap(pixmap);

}


void recurso_explorador::on_btnBueno_clicked()
{

}

//Define un funcion "cargar" para esca
void recurso_explorador::cargar()
{
    //escanear todos los archivos y subdirectotios del directorio curriente.
    QDir dir(":/");
    escanear(dir);

    //"QFileInfo" es una clase proporciona información sobre archivos y directorios sin abrirlos., como el nombre, el tamaño, el tipo, los permisos, etc.
    //La clase “QFileInfoList”, que es una lista de objetos "QFileInfo". La clase QFileInfoList se puede obtener mediante el método “entryInfoList” de la clase QDir, que devuelve una lista de objetos QFileInfo para todos los archivos y subdirectorios del directorio actual.

}

//Define una funcion para escanear el directorio que se da.
void recurso_explorador::escanear(QDir directorio)
{
    QFileInfoList lista = directorio.entryInfoList();//devuelve todas los informaciones de sus subdirectorios(solo un nivel más abajo).

    //Usar un bucle "foreach" para explorar todos los subdirectorios recursivamente.
    foreach(QFileInfo info, lista){
        qInfo() << info.absoluteFilePath();
        if(info.isDir()){//si el objeto "info" es todavia un directorio, sigue explorarlo.
            QDir dirCorriente(info.absoluteFilePath());
            escanear(dirCorriente);
        }
        else{ //si no, agregarlo en la listaArtilugia.
            QListWidgetItem *item = new QListWidgetItem();
            item->setText(info.absoluteFilePath());
            item->setIcon(QIcon(info.absoluteFilePath()));
            ui->listaArtilugios->addItem(item);

        }
    }
}

