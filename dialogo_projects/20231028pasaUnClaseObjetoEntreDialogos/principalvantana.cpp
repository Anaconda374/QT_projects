
#include "principalvantana.h"
#include "ui_principalvantana.h"


PrincipalVantana::PrincipalVantana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PrincipalVantana)
{
    ui->setupUi(this);

    setP_cancion();
    cargar();
}

PrincipalVantana::~PrincipalVantana()
{
    delete ui;
}




void PrincipalVantana::cargar()
{
    ui->planoEditor->clear();
    ui->planoEditor->setReadOnly(true);

    QString preTexto;
    preTexto.append("Artista: " + p_cancion.getArtista() + "\r\n");
    // "\r" es un carácter especial que se usa para indicar el final de una línea de texto y el comienzo de una nueva.
    preTexto.append("Album: " + p_cancion.getAlbum() + "\r\n");
    preTexto.append("Estreno: " + p_cancion.getEstreno().toString() + "\r\n");
    preTexto.append("Notas: " + p_cancion.getNotas() + "\r\n");

    ui->planoEditor->setPlainText(preTexto);

}



void PrincipalVantana::setP_cancion()
{
    p_cancion.setAlbum("chilena");
    p_cancion.setArtista("Tijox");
    p_cancion.setEstreno(QDate(2016, 10, 28));
    p_cancion.setNotas("Tiene muchas canciones geniales.");
}




void PrincipalVantana::on_btnAcceptar_clicked()
{
    accept();
}


void PrincipalVantana::on_btnRechzar_clicked()
{
    reject();
}


void PrincipalVantana::on_btnEditar_clicked()
{
    Editor* dlg = new Editor(this);
    dlg->setE_cancion(p_cancion);
    dlg->exec();

    p_cancion = dlg->getE_cancion();

    cargar();

    delete dlg;


}

