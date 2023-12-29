
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    iniciar();
    cargar();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_fuenteComboCaja_currentFontChanged(const QFont &f)
{
    if(ui->lineaEditor->font().toString() != f.toString()){
        ui->lineaEditor->setFont(f);
    }
}



void Dialog::iniciar()
{
    ui->fuenteComboCaja->setCurrentFont(ui->lineaEditor->font());
}

void Dialog::cargar()
{
    QSettings config("test", "tipo_de_letra");
    QString strTemp = config.value("fuente", "").toString();
    QFont fuente;
    if(!strTemp.isEmpty()){
        if(fuente.fromString(strTemp)){//Si la conversion de 'QString' a 'QFont' falla, volver 0.
            ui->fuenteComboCaja->setCurrentFont(fuente);
        }
    }
}

void Dialog::on_btnAlma_clicked()
{
    QSettings config("test", "tipo_de_letra");
    config.setValue("fuente", ui->fuenteComboCaja->currentFont().toString());
    QMessageBox::information(this, "almacenar", "El tipo de letra es almacenado.");
    accept();
}


void Dialog::on_btnCanc_clicked()
{
    reject();
}



