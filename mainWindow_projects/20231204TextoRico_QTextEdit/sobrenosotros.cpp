#include "sobrenosotros.h"
#include "ui_sobrenosotros.h"

SobreNosotros::SobreNosotros(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SobreNosotros)
{
    ui->setupUi(this);

    ui->textoNombre->setText(QApplication::applicationName());
    ui->textoVersion->setText(QApplication::applicationVersion() );
    ui->textoCompania->setText(QApplication::organizationName());
    ui->textoUrl->setText(QApplication::organizationDomain());
}

SobreNosotros::~SobreNosotros()
{
    delete ui;
}
