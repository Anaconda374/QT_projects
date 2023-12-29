
#include "fecha_tiempo.h"
#include "ui_fecha_tiempo.h"


fecha_tiempo::fecha_tiempo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fecha_tiempo)
{
    ui->setupUi(this);
    ui->comboEditor->setDateTime(QDateTime::currentDateTime());
}

fecha_tiempo::~fecha_tiempo()
{
    delete ui;
}


//cuando la fecha se cambia de el fecha_editor, sincroniza a la fecha_parte de combo editor.
void fecha_tiempo::on_fechaEditor_userDateChanged(const QDate &date)
{
    ui->comboEditor->setDate(date);

}


//cuando el tiempo se cambia de el tiempo_editor, sincroniza a la tiempo_parte de combo editor.

void fecha_tiempo::on_tiempoEditor_userTimeChanged(const QTime &time)
{
    ui->comboEditor->setTime(time);
}




void fecha_tiempo::on_registrarBtn_clicked()
{
    QMessageBox::information(this, "registrado", "Usted registró a " + ui->comboEditor->dateTime().toString());
    accept();

}


void fecha_tiempo::on_rechazarBtn_clicked()
{
    reject();
}




