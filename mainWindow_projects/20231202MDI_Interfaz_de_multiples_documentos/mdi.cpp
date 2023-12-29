
#include "mdi.h"
#include "ui_mdi.h"


MDI::MDI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MDI)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
}

MDI::~MDI()
{
    delete ui;
}


QMdiSubWindow* MDI::nuevoDocumento()
{
    QMdiSubWindow* ventana = new QMdiSubWindow(this);
    QPlainTextEdit* editor = new QPlainTextEdit(ventana);
    ventana->setWidget(editor);

    ventana->setAttribute(Qt::WA_DeleteOnClose);
    //Protection contra perdida de memoria. Si el usuario la cierra esta ventana, se borra automáticamente el puntero a esta ventana.
    ui->mdiArea->addSubWindow(ventana);
    ventana->show(); // método “show()” hace que el widget sea visible y actualiza su geometría y su contenido. También activa el evento QShowEvent para el widget y sus hijos.

    return ventana;

}


void MDI::on_actionNuevo_triggered()
{
    QMdiSubWindow* editor = nuevoDocumento();
    editor->setWindowTitle("Nuevo Archivo");
}


void MDI::on_actionAbrir_triggered()
{
    //Abrir un archivo via "QFileDialog" y devuele el paso de "QString".
    QString paso = QFileDialog::getOpenFileName(this, "Abrir Archivo");
    if(paso.isEmpty()) return;

    //usar "QFile" a leer el paso, y abrirlo como "QIODevice::ReadOnly".
    QFile archivo(paso);
    if(!archivo.open(QIODevice::ReadOnly)){
        QMessageBox::critical(this, "Error", archivo.errorString());
        return;
    }

    //usar "QTextStream" a recuperar el texto en el archivo.
    QTextStream esecuencia(&archivo);
    QMdiSubWindow* ventana = nuevoDocumento();
    ventana->setWindowTitle(paso);

    QPlainTextEdit* editor = qobject_cast<QPlainTextEdit*>(ventana->widget());
    editor->setPlainText(esecuencia.readAll());

    archivo.close();

}


void MDI::on_actionGuardar_triggered()
{
    //recuperar la ventana corriente:
    QMdiSubWindow* ventana = ui->mdiArea->currentSubWindow();
    if(!ventana) return;

    QString paso =  ventana->windowTitle();

    //Usar "QFile" a escribir el texto en el archivo:
    QFile archivo(paso);
    if(!archivo.exists()){
        on_actionGuardar_como_triggered();
        return;
    }

    if(!archivo.open(QIODevice::WriteOnly)){
        QMessageBox::critical(this, "Error", archivo.errorString());
        return;
    }

    QTextStream esecuencia(&archivo);
    QPlainTextEdit *editor = qobject_cast<QPlainTextEdit*>(ventana->widget());
    esecuencia << editor->toPlainText();
    archivo.close();
    ui->statusbar->showMessage("Guardado");

}


void MDI::on_actionGuardar_como_triggered()
{
    QMdiSubWindow* ventana = ui->mdiArea->currentSubWindow();
    if(!ventana) return;

    QString paso =  QFileDialog::getSaveFileName(this, "Guardar Archivo");
    if(paso.isEmpty()) return; //Si el usuario no entra un paso para guardar el texto.

    QFile archivo(paso);
    if(!archivo.open(QIODevice::WriteOnly)){
        QMessageBox::critical(this, "error", archivo.errorString());
        return;
    }

    QTextStream esecuencia(&archivo);
    QPlainTextEdit *editor = qobject_cast<QPlainTextEdit*>(ventana->widget());
    esecuencia << editor->toPlainText();
    archivo.close();
    ventana->setWindowTitle(paso);
    ui->statusbar->showMessage("Guardado");


}


void MDI::on_actionCopiar_triggered()
{
    //Llama el método "copy" de la clase "QPlainTextEdit" directamente:
    QMdiSubWindow* ventana = ui->mdiArea->currentSubWindow();
    if(!ventana) return;

    QPlainTextEdit* editor = qobject_cast<QPlainTextEdit*>(ventana->widget());
    if(!editor) return;

    editor->copy();
}


void MDI::on_actionCortar_triggered()
{
    //Llama el método "cut" de la clase "QPlainTextEdit" directamente:
    QMdiSubWindow* ventana = ui->mdiArea->currentSubWindow();
    if(!ventana) return;

    QPlainTextEdit* editor = qobject_cast<QPlainTextEdit*>(ventana->widget());
    if(!editor) return;

    editor->cut();
}


void MDI::on_actionPegar_triggered()
{
    //Llama el método "paste" de la clase "QPlainTextEdit" directamente:
    QMdiSubWindow* ventana = ui->mdiArea->currentSubWindow();
    if(!ventana) return;

    QPlainTextEdit* editor = qobject_cast<QPlainTextEdit*>(ventana->widget());
    if(!editor) return;

    editor->paste();
}


//En Qt, hay muchos métodos de la clase "QMdiSubWindow" para manipular las ventanas en "mdiArea", además, los métodos "activarNextSubWindow", "activarPreviousSubWindow", "closeActiveSubWindow", etc.

void MDI::on_actionCascada_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}



void MDI::on_actionBaldosa_triggered()
{
    ui->mdiArea->tileSubWindows();
}



