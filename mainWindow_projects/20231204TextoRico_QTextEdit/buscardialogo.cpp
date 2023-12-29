#include "buscardialogo.h"
#include "ui_buscardialogo.h"

BuscarDialogo::BuscarDialogo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BuscarDialogo)
{
    ui->setupUi(this);
    connect(ui->btnAdelante, &QPushButton::clicked, this, &BuscarDialogo::buscarDevolver);
    connect(ui->btnDetras, &QPushButton::clicked, this, &BuscarDialogo::buscarDevolver);
    connect(ui->btnReemplazar, &QPushButton::clicked, this, &BuscarDialogo::reemplazarDevolver);
    connect(ui->btnReemplazarTodo, &QPushButton::clicked, this, &BuscarDialogo::reemplazarDevolver);

}

BuscarDialogo::~BuscarDialogo()
{
    delete ui;
}


void BuscarDialogo::on_btnRechazar_clicked()
{
    reject();
}


void BuscarDialogo::on_btnAdelante_clicked()
{
    guardar();
}

void BuscarDialogo::on_btnDetras_clicked()
{
    guardar();
    dato.setEsBuscarDetras(true);
}




void BuscarDialogo::guardar()
{
    dato.setBuscarTexto(ui->lineaBuscarTexto->text());
    dato.setReemplazarTexto(ui->lineaReemplazarTexto->text());
    dato.setEsDistinguido(ui->cajaDistingue->isChecked());
    dato.setEsCoincidido(ui->cajaCoincide->isChecked());
    dato.setEsTodoElegido(false);
    dato.setEsBuscarDetras(false);

}



void BuscarDialogo::on_btnReemplazar_clicked()
{
    guardar();
}


void BuscarDialogo::on_btnReemplazarTodo_clicked()
{
    guardar();
    dato.setEsTodoElegido(true);
}




void BuscarDialogo::on_cajaDistingue_stateChanged(int arg1)
{
    dato.setEsDistinguido(arg1);
}


void BuscarDialogo::on_cajaCoincide_stateChanged(int arg1)
{
    dato.setEsCoincidido(arg1);
}

void BuscarDialogo::buscarDevolver()
{
    emit buscarDatoEviado(dato);
}

void BuscarDialogo::reemplazarDevolver()
{
    emit reemplazarDataEviado(dato);
}

