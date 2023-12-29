
#include "demoapp.h"
#include "ui_demoapp.h"


demoApp::demoApp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::demoApp)
{
    ui->setupUi(this);
    //Usar la función definida en la libreria(fuera de la aplicación) para demostrar.
    Mi_libreria demo;
    ui->lineaEditor->setText(demo.mensaje());

    //Usar el recurso(imagen) guardada en la libreria(fuera de la aplicación).
    QPixmap img(":/simbolos/simbolos_graficos/file.png");
    ui->rotuloIcono->setPixmap(img);

}

demoApp::~demoApp()
{
    delete ui;
}



void demoApp::on_btnEmpujar_clicked()
{
    accept();
}

