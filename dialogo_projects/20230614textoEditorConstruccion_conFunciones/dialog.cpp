
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->btnCaja->addButton("Copiar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Cortar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Empastar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Deshacer", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Rehacer", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Almacenar", QDialogButtonBox::ButtonRole::ActionRole);
    ui->btnCaja->addButton("Abrir", QDialogButtonBox::ButtonRole::ActionRole);

//Diseñar las operaciones de la vantana(en la parte superior derecha):
    setAttribute(Qt::WA_LayoutOnEntireRect);

//permitir cambiar el tamaño：
    Qt::WindowFlags banderas;
    //La clase "Qt::WindowFlags" se utiliza para especificar las propiedades de una ventana
    banderas |= Qt::WindowMinMaxButtonsHint;
    banderas |= Qt::WindowContextHelpButtonHint;
    /*la 3 línea superiores son iguales a :
                "Qt::WindowFlags banderas = Qt::Window | Qt::WindowMinMaxButtonHint | Qt::WindowContextHelpButtonHint;"
    */
setWindowFlags(banderas);

}

Dialog::~Dialog()
{
    delete ui;
}


