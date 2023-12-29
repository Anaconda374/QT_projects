#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}

Musica Editor::getE_cancion() const
{
    return e_cancion;
}

void Editor::setE_cancion(const Musica &new_cancion)
{
    e_cancion = new_cancion;

    ui->editorArtista->setText(e_cancion.getArtista());
    ui->editorAlbum->setText(e_cancion.getAlbum());
    ui->editorFecha->setDate(e_cancion.getEstreno());
    ui->editorNotas->setPlainText(e_cancion.getNotas());


}

void Editor::on_btnAcceptar_clicked()
{
    e_cancion.setArtista(ui->editorArtista->text());
    e_cancion.setAlbum(ui->editorAlbum->text());
    e_cancion.setEstreno(ui->editorFecha->date());
    e_cancion.setNotas(ui->editorNotas->toPlainText());

    accept();
}


void Editor::on_btnRechazar_clicked()
{

    reject();
}

