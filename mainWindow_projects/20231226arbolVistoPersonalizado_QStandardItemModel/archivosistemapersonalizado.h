#ifndef ARCHIVOSISTEMAPERSONALIZADO_H
#define ARCHIVOSISTEMAPERSONALIZADO_H

#include <QMainWindow>

//Crear una ventana que demostrar los archivos dentro el directorio corriente, y los detalles como su tamaño, tiempo de nacimiento, etc.



//QStandardItemModel nos permite a construir el modelo en cualquiera forma que nos gusta.
#include <QStandardItemModel>
#include <QStandardItem>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>
#include <QStringList>
#include <QDateTime>


QT_BEGIN_NAMESPACE
namespace Ui {
class ArchivoSistemaPersonalizado;
}
QT_END_NAMESPACE

class ArchivoSistemaPersonalizado : public QMainWindow
{
    Q_OBJECT

public:
    ArchivoSistemaPersonalizado(QWidget *parent = nullptr);
    ~ArchivoSistemaPersonalizado();

private:
    Ui::ArchivoSistemaPersonalizado *ui;
    QStandardItemModel arbolModelo;

    void iniciar();


    //una función que añadir el archivo a la raiz.
    void anadirArchivo(QStandardItem* raiz, QFileInfo archivoInfo);
    void anadirDir(QStandardItem* raiz, QFileInfo dirInfo);



};
#endif // ARCHIVOSISTEMAPERSONALIZADO_H
