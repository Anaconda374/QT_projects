#include "tablamodelovisto.h"
#include "ui_tablamodelovisto.h"

TablaModeloVisto::TablaModeloVisto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TablaModeloVisto)
{
    ui->setupUi(this);

    iniciar();
}

TablaModeloVisto::~TablaModeloVisto()
{
    delete ui;
}

void TablaModeloVisto::celdaCambiada(QStandardItem *item)
{

    qInfo()<< "Indice： " << item->index().row()<< ", " << item->index().column()<< " = "<< item->text();
}


void TablaModeloVisto::iniciar()
{
//Crear una 4x4 tabla modelo que está vacia iniciamente:
    tablaModelo.insertRows(0, 4); //empieza de la posición 0, y toda 4 filas.
    tablaModelo.insertColumns(0, 4); //empieza de la posición 0, y toda 4 columnas.

    //Usar 2 "for" bucles anidados a inicializar todas las celdas en la tabla:
    for(int f = 0; f < 4; ++f){
        for (int c = 0; c < 4; ++c) {
            QStandardItem* item = new QStandardItem( QString("Fila %0, Columna %1").arg(f).arg(c));
            //"%0" se indica el primer argumento, "%1" se indica el segundo argumento.
            tablaModelo.setItem(f, c, item);
        }
    }

    ui->tableView->setModel(&tablaModelo);
    connect(&tablaModelo,&QStandardItemModel::itemChanged, this, &TablaModeloVisto::celdaCambiada);

}

//Extraer el dato del modelo tambien usando el bucle "for":
void TablaModeloVisto::on_aceptarBtn_clicked()
{
    QStringList lista;

    for(int f = 0; f < tablaModelo.rowCount(); ++f){
        for(int c = 0; c < tablaModelo.columnCount(); ++c){
            //Recuperar el item de la tabla:
            QStandardItem* item = tablaModelo.item(f, c);
            lista.append(item->text());
        }
        lista.append("\n");
    }

    QString meg = lista.join("r");
    QMessageBox::information(this, "dato", meg);


}

