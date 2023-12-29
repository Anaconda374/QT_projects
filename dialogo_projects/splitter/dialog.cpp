
#include "dialog.h"
#include "ui_dialog.h"


/*
EmpujarBoton propiedades:
    1.checkable: el boton se puede marcar manualmente por usuarios.
    2.checked:
    3.autorepeat:
    4.default:
 */

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


