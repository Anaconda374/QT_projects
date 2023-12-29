
#include "principalvantana.h"
#include "ui_principalvantana.h"


PrincipalVantana::PrincipalVantana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PrincipalVantana)
{
    ui->setupUi(this);
}

PrincipalVantana::~PrincipalVantana()
{
    delete ui;
}



void PrincipalVantana::on_btnRechazar_clicked()
{
    reject();
}


void PrincipalVantana::on_btnAcceptar_clicked()
{
    QMessageBox::information(this, "accepto info", "Usted ha elegido un articulo de la ruta  " + ui->lineaEditor->text());
    accept();
}


void PrincipalVantana::on_btnElegir_clicked()
{
    Seleccion* subVantana = new Seleccion(this);

    //Establecer el valor predeterminado en la Seleccion vantana si en el linea editor hay una opción.
    subVantana->ponerElegido(ui->lineaEditor->text());

    //Ejecutar la sub_vantana como un dialogo modal.
    subVantana->exec();

    //Transmitir la opción elegida nuevamenta a la principal vantana:
    ui->lineaEditor->setText(subVantana->elegido());
    ui->etiqueta->setPixmap(subVantana->icono);
}

