#include "seleccion.h"
#include "ui_seleccion.h"

Seleccion::Seleccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Seleccion)
{
    ui->setupUi(this);
    iniciar();
}

Seleccion::~Seleccion()
{
    delete ui;
}

QString Seleccion::elegido()
{
    return texto_elegido;
}

void Seleccion::ponerElegido(QString valor)
{
    texto_elegido = "";
    for(int i = 0; i < ui->listaArtilugio->count(); ++i){

        QListWidgetItem* item = ui->listaArtilugio->item(i);
        if(item->text() == valor){
            item->setSelected(true);
            texto_elegido = valor;
            icono = icono =  QPixmap(item->icon().pixmap(32,32));
            return;
        }

    }

}

//De vez en usar la ranura "currentItemChangde" de "listaArtilugio", se puede utilizar "accept()" a transmitir la informacion de "currentItem" entre vantanas:
void Seleccion::on_btnAcceptar_clicked()
{
    if(ui->listaArtilugio->currentItem()){
        //si hay un item elegido en la lista artilugia, almacenar sus texto y icono.
        texto_elegido = ui->listaArtilugio->currentItem()->text();
        icono =  QPixmap(ui->listaArtilugio->currentItem()->icon().pixmap(32,32));
    }

    accept();
}


void Seleccion::on_btnRechazar_clicked()
{

    reject();
}

void Seleccion::iniciar()
{
    QDir raiz = QDir(":/simbolos/simbolos_graficos");

    escanear(raiz);

}

void Seleccion::escanear(QDir dir)
{
    QFileInfoList lista = dir.entryInfoList();//devuelve todas los informaciones de sus subdirectorios(solo un nivel más abajo).

    //Usar un bucle "foreach" para explorar todos los subdirectorios recursivamente.
    foreach(QFileInfo info, lista){

        qInfo() << info.absoluteFilePath();//imprimir las informaciones de los archivos que se escanean.

        if(info.isDir()){//si el objeto "info" es todavia un directorio, sigue explorarlo.
            QDir dirCorriente(info.absoluteFilePath());
            escanear(dirCorriente);
        }
        else{ //si no, agregarlo en la listaArtilugia.
            QListWidgetItem *item = new QListWidgetItem();
            item->setText(info.absoluteFilePath());
            item->setIcon(QIcon(info.absoluteFilePath()));
            ui->listaArtilugio->addItem(item);

        }
    }
}


