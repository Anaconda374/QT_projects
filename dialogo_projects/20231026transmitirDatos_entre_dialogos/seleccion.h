#ifndef SELECCION_H
#define SELECCION_H

#include <QDialog>

//incluir los archivos encabezados a escansar el recurso directorio y cargar los archivos que están dentro.
#include <QDir>
#include <QIcon>
#include <QFile>
#include <QFileInfo>
#include <QFileInfoList>
#include <QListWidgetItem> //para añadir items a la lista artilugia.


namespace Ui {
class Seleccion;
}

class Seleccion : public QDialog
{
    Q_OBJECT

public:
    explicit Seleccion(QWidget *parent = nullptr);
    ~Seleccion();

    //un función para devolver el nombre del item elegido en la lista artilugia.
    QString elegido();

    //un función para elegir un item predeterminado si ya la principal vantana tiene un opción.
    void ponerElegido(QString valor);

    //Definir un mienbro publico para almacenar el icono del item elegido, y la principal vantana puede accederlo.
    QPixmap icono;
private slots:
    void on_btnAcceptar_clicked();

    void on_btnRechazar_clicked();

private:
    Ui::Seleccion *ui;


    QString texto_elegido;

    void escanear(QDir dir);

     void iniciar();
};

#endif // SELECCION_H
