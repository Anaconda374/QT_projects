
#include "cambiareltamano.h"
#include "ui_cambiareltamano.h"


CambiarElTamano::CambiarElTamano(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CambiarElTamano)
{
    ui->setupUi(this);

    //Hacer el artilugio "scrollArea" en el centro.
    this->setCentralWidget(ui->scrollArea);

/*
El siguiente código asigna a la acción 'Abrir' un icono estándar que corresponde al estilo de la aplicación(según el sistema operativo) y al tipo de elemento de la interfaz.

    "QApplication::style()" es una función estática de la clase QApplication, que devuelve el estilo de la aplicación, es decir, el conjunto de "reglas visuales" que se aplican a los elementos de la interfaz.

    "standardIcon" es un método de la clase QStyle, que devuelve un icono estándar para un tipo de elemento de la interfaz, según el estilo actual.

    "QStyle::SP_DialogOpenButton" es un valor enumerado de la clase QStyle, que representa el icono de un botón para abrir un diálogo.
 */
    ui->actionAbrir->setIcon(QApplication::style()->standardIcon(QStyle::SP_DialogOpenButton));
    ui->actionZoom_Acercar->setIcon(QApplication::style()->standardIcon(QStyle::SP_ArrowUp));
    ui->actionZoom_Alejar->setIcon(QApplication::style()->standardIcon(QStyle::SP_ArrowDown));

    //Poner la etiqueta del imagen(que muestra un dibujo) en el artilugio "scrollArea".
    etiquetaImagen = new QLabel();
    ui->scrollArea->setWidget(etiquetaImagen);

}

CambiarElTamano::~CambiarElTamano()
{
    delete ui;
}



void CambiarElTamano::on_actionAbrir_triggered(){

    m_paso = QFileDialog::getOpenFileName(this, "Abrir un dibujo", QString(),
                                          "Todo Archivo (*.*);;JPG Archivo (*.jpg);;PNG Archivo (*.png)");

    if(m_paso.isEmpty()) return;

    if(!m_img.load(m_paso)){
        QMessageBox::critical(this, "Error de Abrir", "No puede abrir este archivo, asegúrate de que sea un dibujo");
        return;
    }
    etiquetaImagen->setPixmap(m_img);


}


void CambiarElTamano::on_actionZoom_Acercar_triggered()
{
    int ancho = etiquetaImagen->width();
    int altura = etiquetaImagen->height();

    ancho += 20;
    altura += 20;

    etiquetaImagen->resize(ancho, altura);
    etiquetaImagen->setPixmap(m_img.scaled(ancho, altura));
}


void CambiarElTamano::on_actionZoom_Alejar_triggered()
{
    int ancho = etiquetaImagen->width();
    int altura = etiquetaImagen->height();

    ancho -= 20;
    altura -= 20;

    //Poner el mínimo tamaño.
    if(ancho<20) ancho = 20;
    if(altura<20) altura = 20;

    etiquetaImagen->resize(ancho, altura);
    etiquetaImagen->setPixmap(m_img.scaled(ancho, altura));
}






