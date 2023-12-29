
#include "textoeditor.h"
#include "ui_textoeditor.h"


TextoEditor::TextoEditor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextoEditor)
{
    ui->setupUi(this);


    /*
     “setCentralWidget” de la clase QMainwindow sirve para establecer el widget central de la ventana principal. El widget central es el widget que "ocupa el espacio restante" después de añadir las barras de menú, herramientas, estado y acoplamiento. El widget central puede ser cualquier tipo de widget, como un botón, una etiqueta, una tabla o un diseño.
     */

    this->setCentralWidget(ui->planoTextoEditor);
}

TextoEditor::~TextoEditor()
{
    delete ui;
}


//La ranura "triggered" es aproximadamente igual a la ranura "clicked()" de los artilugios

void TextoEditor::on_accionNuevo_triggered()
{
    ui->planoTextoEditor->clear();
    ui->statusbar->showMessage("Nuevo Texto");
}

void TextoEditor::on_accionAbrir_triggered()
{
    QString direccion = QFileDialog::getOpenFileName(this, "Abrir un archivo");
    QFile archivo(direccion);
    if(!archivo.open(QIODevice::ReadOnly)){//si lo abrió éxitosamente, devolver ´true´.
        QMessageBox::critical(this, "abrir error", archivo.errorString());
        return;
    }

    QTextStream secuencia(&archivo);
    ui->planoTextoEditor->setPlainText(secuencia.readAll());
    archivo.close();

    ui->statusbar->showMessage(direccion);

    archivoNombre = direccion;

}


void TextoEditor::on_accionAlmacenar_triggered()
{
    QString direccion = QFileDialog::getSaveFileName(this, "Almacenar un archivo");
    QFile archivo(direccion);
    if(!archivo.open(QIODevice::WriteOnly)){//si lo abrió éxitosamente, devolver ´true´.
        QMessageBox::critical(this, "abrir error", archivo.errorString());
        return;
    }

    QTextStream secuencia(&archivo);
    secuencia << ui->planoTextoEditor->toPlainText();
    archivo.close();

    ui->statusbar->showMessage(direccion);

    archivoNombre = direccion;

}


void TextoEditor::on_accionCopiar_triggered()
{
    ui->planoTextoEditor->copy();
}


void TextoEditor::on_accionCortar_triggered()
{
    ui->planoTextoEditor->cut();
}


void TextoEditor::on_accionPegar_triggered()
{
    ui->planoTextoEditor->paste();
}




