 #include "estandaritemmodelo.h"
#include "ui_estandaritemmodelo.h"

EstandarItemModelo::EstandarItemModelo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EstandarItemModelo)
{
    ui->setupUi(this);

    iniciar();
}

EstandarItemModelo::~EstandarItemModelo()
{
    delete ui;
}


void EstandarItemModelo::iniciar()
{
    QStringList titulo;

    titulo << "Mis ítems";

    modelo.setHorizontalHeaderLabels(titulo);
    //Este método establece las etiquetas de la cabecera horizontal del modelo, usando la lista titulo como argumento. Esto significa que la primera columna del modelo tendrá la etiqueta "Mis ítems".

    //recuperar el raíz invisible(que es también un QStandItem) del modelo:
    QStandardItem* raiz = modelo.invisibleRootItem();

    //Usar los "for" bucles anidados a insertar los padre_items y higo_items en "treeView":
    for(int p = 1; p <= 10; p++){
        QStandardItem* padreItem = new QStandardItem(QString("padre %0").arg(p));
        //El texto del elemento se establece como "padre %0", donde "%0" se reemplaza por el valor de la variable "p" usando el método "arg()" de la clase QString.

        raiz->appendRow(padreItem);

        for(int h = 1; h <= 5; h++){
            QStandardItem* hijoItem = new QStandardItem(QString("hijo %0").arg(h));

            padreItem->appendRow(hijoItem);

        }

    }

    ui->treeView->setModel(&modelo);

}
