
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnCometer_clicked()
{
    QString bebida = "none";

    //findChildren("tipoNombreEspecificado", buscarManera) coge 2 parametros, y vuelve "un lista de objectos"
    QList<QRadioButton*> todosHijos =
        ui->grpBebida->findChildren<QRadioButton*>(QString(), Qt::FindDirectChildrenOnly); // 'QString()' significa que no tipo es especificado, y buscar hijos de todo tipo en el contenedor.

    foreach(QRadioButton* rbtn, todosHijos){
        if(rbtn->isChecked()){
            bebida = rbtn->text();
            break;
        }
     }

    if(bebida!="none"){
        QMessageBox::information(this, "bebida", "La bebida tuya es: "+ bebida);
    }
    else{
        QMessageBox::information(this, "advertencia", "Serio, no quieres una bebida?");
    }

}

