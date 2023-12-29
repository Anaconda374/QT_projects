#include "arbolylistavistas.h"
#include "ui_arbolylistavistas.h"

ArbolYListaVistas::ArbolYListaVistas(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ArbolYListaVistas)
{
    ui->setupUi(this);

    iniciar();
}

ArbolYListaVistas::~ArbolYListaVistas()
{
    delete ui;
}

void ArbolYListaVistas::on_treeView_activated(const QModelIndex &index)
{
    //cuando un item en "treeModel" está abrido, configurarlo como el paso fundamental del "listView".
    ui->listView->setRootIndex(index);

}


void ArbolYListaVistas::on_listView_activated(const QModelIndex &index)
{

    ui->listView->setRootIndex(index);
    ui->treeView->setCurrentIndex(index);

    //El método "expand" recibe un índice de modelo que representa el elemento que se quiere expandir, y muestra sus hijos si los tiene.
    ui->treeView->expand(index);

}

void ArbolYListaVistas::iniciar()
{
    modelo.setRootPath(QDir::rootPath());
    ui->treeView->setModel(&modelo);
    ui->listView->setModel(&modelo);

}

