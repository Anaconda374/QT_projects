
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

void Dialog::iniciar()
{
    ui->comboCaja->setEnabled(true);

    //Manualmente agregar 4 botones llamados "Limpiar", "eliminar", "Almacenar", y "Abolir" que ejecutan acciones personalizadas:
    ui->btnCaja->addButton("Limpiar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Eliminar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Almacenar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Abolir", QDialogButtonBox::ButtonRole::ActionRole);

}

void Dialog::cargar()
{
    QSettings config("lista_artilugio", "configuration");

    //"beginReadArray" se utiliza parar Comenzar a leer un array llamado "comboCaja", y devuelve la tamamo del array "comboCaja".
    int comboTamano = config.beginReadArray("comboCaja");
    for(int i = 0; i<comboTamano; ++i){
        config.setArrayIndex(i);
        ui->comboCaja->addItem(config.value("opcion", "").toString());
    }
    config.endArray();

    int listaTamano = config.beginReadArray("artilugioLista");//Sacar la tamamo de la configuracion matriz "artilugioLista".
    for(int j = 0; j<listaTamano; ++j){
        config.setArrayIndex(j);
        ui->listaArtilugio->addItem(config.value("texto", "").toString());
    }
    config.endArray();

}

void Dialog::almacenar(){
    QSettings config("lista_artilugio", "configuration");
    config.clear();

    //Almacenar todos los elementos en combo caja usando una matriz'array' llamada "comboCaja".
    //El método "beginWriteArray" se utiliza para empezar a escribir un array en un objeto QSettings. A través de "beginWriteArray", puedes especificar un nombre para el array y la cantidad de elementos que contendrá. A continuación, puedes usar otros métodos como "setArrayIndex" y "setValue" para establecer los valores de los elementos del array.
    config.beginWriteArray("comboCaja");

    for(int i = 0; i< ui->comboCaja->count(); ++i){
        config.setArrayIndex(i);
        //QSettings::setValue(const QString &clave, const QVariant &valor);
        config.setValue("opcion", ui->comboCaja->itemText(i));//un array de mapas para almacenar los valores.
    }
    config.endArray();// Finaliza la escritura del array

    //Almacenar todos los elementos en la artilugio lista usando una matriz'array' llamada "artilugioLista" :
    config.beginWriteArray("artilugioLista");
    for(int j = 0; j< ui->listaArtilugio->count(); ++j){
        config.setArrayIndex(j);
        config.setValue("texto", ui->listaArtilugio->item(j)->text());
    }
    config.endArray();
}


//Cuando el boton 'Anadir' se tecleado, agregar "el corriente escrito en la combo caja" a las listas de "combo caja" y "artilugio lista".
void Dialog::on_btnAnadir_clicked()
{
    ui->listaArtilugio->addItem(ui->comboCaja->currentText());

    //Si el corriente texto no esta en la lista de "combo caja", la funcion 'findText' vuele '-1'.
    if(ui->comboCaja->findText(ui->comboCaja->currentText()) < 0){
        ui->comboCaja->addItem(ui->comboCaja->currentText());
    }
}


//Definir una accion distincta para cada boton:
void Dialog::on_btnCaja_clicked(QAbstractButton *button)
{
    qDebug()<< button->text();//mostrar el texto del boton que se empujado.

    if(button->text().contains("Limpiar")){
        ui->comboCaja->clear();
        ui->listaArtilugio->clear();
        return;
    }
    if(button->text().contains("Eliminar")){
        //Volver todos elementos elegidos en la artilugio lista:
        QList<QListWidgetItem*> elems = ui->listaArtilugio->selectedItems();
        foreach(QListWidgetItem* elem, elems){
            //Eliminar los elementos elegidos en la artilugio lista.
            ui->listaArtilugio->removeItemWidget(elem);

            //Tambien eliminar los elemento elegidos en la combo caja.
            int indice = ui->comboCaja->findText(elem->text());
            ui->comboCaja->removeItem(indice);
            delete elem; //recuerda deasignar la memoria.
        }
        return;
    }
    if(button->text().contains("Almacenar")){
        almacenar();
        this->accept();
        return;
    }
    if(button->text().contains("Abolir")){
        this->reject();
        return;
    }

}

