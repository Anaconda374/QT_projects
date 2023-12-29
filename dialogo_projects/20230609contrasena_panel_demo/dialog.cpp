
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->btnUno, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnDos, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnTres, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnCuatro, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnCinco, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnSeis, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnSiete, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnOcho, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnNueve, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnCero, &QPushButton::clicked, this, &Dialog::append);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::append()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender()); //extrear el objecto que emite el senal a esta ranura.
    if(!btn) return;

    temp.append(btn->text());
    ui->textoEditor->setText(temp);

    //Cuando 'codigo' es vacio, indica que se esta en "el almacenar modo". Si no, esta en "el verificar modo".
    if(codigo.isEmpty()){
        ui->btnAlmacenar->setEnabled(true);
        ui->btnVerificar->setEnabled(false);
    }
    else{
        ui->btnAlmacenar->setEnabled(false);
        ui->btnVerificar->setEnabled(true);
    }
}



void Dialog::on_btnAlmacenar_clicked()
{
    if(temp.size()>0){
        codigo = temp;
    }
    temp.clear();
    ui->btnAlmacenar->setEnabled(false);
    ui->btnVerificar->setEnabled(true);
    ui->textoEditor->setText("El codigo es almacenado, escribe otra vez para verificacion.");
}


void Dialog::on_btnVerificar_clicked()
{
    if(temp == codigo){
        QMessageBox::information(this, "buena_verificacion", "La verificacion tuvo exito, felicitaciones!");
        codigo.clear();
        temp.clear();
        ui->btnAlmacenar->setEnabled(true);
        ui->btnVerificar->setEnabled(false);
        ui->textoEditor->setText("");

    }else{
        QMessageBox::information(this, "mala_verificacion", "Lo siento, la verificacion fallo, re_escribe el codigo, por favor.");
        temp.clear();
        ui->textoEditor->setText("La verificacion fallo, re_escribe el codigo, por favor.");
    }

}

