
#include "recogeropciones.h"
#include "ui_recogeropciones.h"


RecogerOpciones::RecogerOpciones(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RecogerOpciones)
{
    ui->setupUi(this);
}

RecogerOpciones::~RecogerOpciones()
{
    delete ui;
}

QString RecogerOpciones::recogerOpciones(QGroupBox *grp)
{
    QString valor;
    foreach(QObject* obj, grp->children()){
        QCheckBox* marcarCaja = qobject_cast<QCheckBox*>(obj); //recuperar los marcar_cajas en el grupo.
        if(!marcarCaja) continue; //si el corriente hijo de "grp" no es un objeto de "QCheckBox*", omitelo.

        if(marcarCaja->isChecked()) valor.append(marcarCaja->text() + "\r\n"); //de lo contrario, si el marcarCaja es marcada, añadir el texto al secuencia.

    }
    return valor;
}



void RecogerOpciones::on_btnAcceptar_clicked()
{
    QString mensaje;
    mensaje.append("Nombre: " + ui->lineaEditorNombre->text() + "\r\n" );
    mensaje.append("E_Correo: " + ui->lineaEditorCorreo->text() + "\r\n" );

    QString comida = recogerOpciones(ui->grpComida);
    QString deporte = recogerOpciones(ui->grpDeporte);

    mensaje.append(comida);
    mensaje.append(deporte);

    QMessageBox::information(this, "informacion", mensaje);

    accept();
}


void RecogerOpciones::on_btnRechazar_clicked()
{
    reject();
}

