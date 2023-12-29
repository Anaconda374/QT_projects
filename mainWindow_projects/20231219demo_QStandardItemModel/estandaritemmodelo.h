#ifndef ESTANDARITEMMODELO_H
#define ESTANDARITEMMODELO_H

#include <QMainWindow>
//Establecer una ventana que contiene padre_items y hijo_items arreglados en la vista de árbol.


#include <QStandardItemModel>//Una de las clases del Modelo/Vista y es parte del marco de trabajo de modelo/vista de Qt.
/*
    El modelo “QStandardItemModel” es una clase que provee un modelo genérico para almacenar datos personalizados. Es que un intento de hacer un tamaño que se puede servir para todo tipos de ítems de modelo estandarizado, para que podamos crear nuestro propio tipo de modelo.

    El modelo “QStandardItemModel” provee un enfoque clásico basado en ítems para trabajar con el modelo. Los ítems en un modelo “QStandardItemModel” son provistos por la clase "QStandardItem".
*/

#include <QStandardItem>
/*
    La clase “QStandardItem” provee un ítem para usar con el modelo "QStandardItemModel". Cada ítem puede almacenar datos arbitrarios en roles predefinidos o personalizados. Los ítems pueden tener un padre y cero o más hijos, lo que permite crear modelos jerárquicos.

    La relación entre “QStandardItem” y “QStandardItemModel” es que el modelo usa los ítems para almacenar y acceder a los datos. El modelo también se encarga de notificar a las vistas cuando los datos cambian. Los ítems pueden ser accedidos directamente mediante el modelo, usando los métodos "item", "setItem", "takeItem", etc. También se puede usar el método indexFromItem para obtener el índice del modelo correspondiente a un ítem.
*/



QT_BEGIN_NAMESPACE
namespace Ui {
class EstandarItemModelo;
}
QT_END_NAMESPACE

class EstandarItemModelo : public QMainWindow
{
    Q_OBJECT

public:
    EstandarItemModelo(QWidget *parent = nullptr);
    ~EstandarItemModelo();

private:
    Ui::EstandarItemModelo *ui;

    QStandardItemModel modelo;

    void iniciar();
};
#endif // ESTANDARITEMMODELO_H
