#include "subdialogo.h"
#include "ui_subdialogo.h"

SubDialogo::SubDialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubDialogo)
{
    ui->setupUi(this);
}

SubDialogo::~SubDialogo()
{
    delete ui;
}

void SubDialogo::on_btnAcceptar_clicked()
{
    m_elegido = ui->comboBox->currentText();
    accept();
}


void SubDialogo::on_btnRechazar_clicked()
{
    reject();
}

QString SubDialogo::elegido() const
{
    return m_elegido;
}

void SubDialogo::iniciarComboCaja(QStringList cadenaLista)
{

    ui->comboBox->addItems(cadenaLista);

}

