
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


//'currentIndexChanged' funciona como "cuando una opcion es elegida manualmente o automaticamente, o en otra palabras, el indice es cambiado, hacer algo.
void Dialog::on_comboCaja_currentIndexChanged(int index) //'index' es basado de 0;
{
    //Cuando una opcion se elige, mostrar debajo de la combo caja el texto de corriente opcion :
    ui->marbeteOpnElegida->setText(QString::number(index + 1) + " " + ui->comboCaja->currentText());
}


//Si el boton almacenar es tecleado, almacenar el corriente indice usando un 'QSettings' objecto para que la aplicacion se puede cargar el indice automaticamente en proxima vez:
void Dialog::on_btnAlmacenar_clicked()
{
    QSettings config("miAplicacion", "config"); //es necesario especificar los nombres de compania(el primero parametro) y config(el segundo parametro) para que otra funcion se puede cargar esta configuracion almacenada.


     //'QSettings' objeto es una mapa estructura, contiene los clave-valor pares.
    config.setValue("indice", ui->comboCaja->currentIndex()); //el clave es "indice", y el valor es 'correntIndex()'.

    QMessageBox::information(this, "almacenada", "configuracion es almacenada.");
}



void Dialog::iniciar()
{
    ui->comboCaja->clear();

    for(int i = 1; i<= 10; ++i){
        ui->comboCaja->addItem("Opcion "+ QString::number(i));
    }
}

void Dialog::cargar()
{

    QSettings config("miAplicacion", "config");
    QVariant indice = config.value("indice");//recuperar el valor atado a "indice", si "indice" no se encuentra, devolver el defecto valor '1'.

    bool exito;
    int ind = indice.toInt(&exito);

    ui->comboCaja->setCurrentIndex(ind);
}

