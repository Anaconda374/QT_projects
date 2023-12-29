
#ifndef WEBMARCADOR_H
#define WEBMARCADOR_H

#include <QMainWindow>

//Crear una carpeta que guarda unos marcadores de webs en 3 categorías.

#include <QDialog>
#include <QListWidget>
#include <QListWidgetItem>
#include <QUrl>
#include <QDebug>
#include <QDesktopServices>//para abrir un enlace de web en el Navegador.


QT_BEGIN_NAMESPACE
namespace Ui { class WebMarcador; }
QT_END_NAMESPACE

class WebMarcador : public QMainWindow

{
    Q_OBJECT

public:
    WebMarcador(QWidget *parent = nullptr);
    ~WebMarcador();

private slots:
    void itemDobleClic(QListWidgetItem* item);//una ranura para abrir el enlace con el navegador.

private:
    Ui::WebMarcador *ui;
    void iniciar();
    void anadirCategoria(QString nombre);
    void anadirEnlace(QListWidget* categoria, QString nombre, QString url);

    void anadirNoticias();
    void anadirSociales();
    void anadirBusquedas();

};

#endif // WEBMARCADOR_H
