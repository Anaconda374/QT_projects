
#ifndef CAMBIARELTAMANO_H
#define CAMBIARELTAMANO_H

#include <QMainWindow>


//Crear una vantana que carga un dibujo, que puede actuar acciones "zoom_acercar" y "zoom_alejar" con haciendo clics.
#include <QString>
#include <QApplication>
#include <QStyle>
#include <QLabel>
#include <QFileDialog>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class CambiarElTamano; }
QT_END_NAMESPACE

class CambiarElTamano : public QMainWindow

{
    Q_OBJECT

public:
    CambiarElTamano(QWidget *parent = nullptr);
    ~CambiarElTamano();

private slots:
    void on_actionAbrir_triggered();

    void on_actionZoom_Acercar_triggered();

    void on_actionZoom_Alejar_triggered();


private:
    Ui::CambiarElTamano *ui;

    QLabel* etiquetaImagen;

    QString m_paso;

    QPixmap m_img;
};

#endif // CAMBIARELTAMANO_H
