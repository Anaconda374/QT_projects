
#include "inputformulariovalidacion.h"
#include "ui_inputformulariovalidacion.h"


inputFormularioValidacion::inputFormularioValidacion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::inputFormularioValidacion)
{
    ui->setupUi(this);

    //https://www.walletfox.com/course.qlineeditemailvalidation.php
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b", QRegularExpression::CaseInsensitiveOption);

    QRegularExpressionValidator* rxValidator = new QRegularExpressionValidator(rx, this);

    ui->lineaEditorCorreo->setValidator(rxValidator);


    //conectar "lineaEditorCorreo" con la ranura "validaEntrada" para comprobar la entrada del correo constantemente.
    connect(ui->lineaEditorCorreo, &QLineEdit::textChanged, this, &inputFormularioValidacion::validarEntrada);

}

inputFormularioValidacion::~inputFormularioValidacion()
{
    delete ui;
}



//Comprobar si la entrado es segun la forma predefinido, si no, salta una error mansaje.
void inputFormularioValidacion::on_buttonBox_accepted()
{
    if(ui->lineaEditorCorreo->hasAcceptableInput())
    {
        QMessageBox::information(this, "Correo", ui->lineaEditorCorreo->text());
        accept();

    }else{
        QMessageBox::critical(this, "Correo", "No valido");
    }


}


void inputFormularioValidacion::on_buttonBox_rejected()
{
    reject();
}

void inputFormularioValidacion::validarEntrada()
{
    //Si la entrada segun la forma predefinida, cambiar el color de letras en negro.
    if(ui->lineaEditorCorreo->hasAcceptableInput()){
        ui->lineaEditorCorreo->setStyleSheet("QLineEdit {color: black;}");

    }else{
    //si no, hacer el color de letras en rojo.
        ui->lineaEditorCorreo->setStyleSheet("QLineEdit {color: red;}");

    }


}

