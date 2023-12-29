#include "textoricoeditor.h"
#include "ui_textoricoeditor.h"

TextoRicoEditor::TextoRicoEditor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextoRicoEditor)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
    setWindowTitle("Texto Rico Editor");

    //iniciar los miembros:
    texto_cambiado = false;
    m_paso = "";
    nuevoArchivo();

}

TextoRicoEditor::~TextoRicoEditor()
{
    delete ui;
}

void TextoRicoEditor::on_actionNuevo_triggered()
{
    esGuardado();
    nuevoArchivo();

}


void TextoRicoEditor::on_actionAbrir_triggered()
{
    esGuardado();
    abrirArchivo();

}


void TextoRicoEditor::on_actionGuardar_triggered()
{
    guardar(m_paso);
}


void TextoRicoEditor::on_actionGuardar_como_triggered()
{
    guardar_como();

}


void TextoRicoEditor::on_actionSalir_triggered()
{
    close();//la ranura de "QWidget".
}


//Las siguientes 8 ranuras simplemente usan los métodos de "QTextEdit"
void TextoRicoEditor::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void TextoRicoEditor::on_actionCortar_triggered()
{
    ui->textEdit->cut();
}


void TextoRicoEditor::on_actionPegar_triggered()
{
    ui->textEdit->paste();
}

void TextoRicoEditor::on_actionDeshacer_triggered()
{
    ui->textEdit->undo();
}


void TextoRicoEditor::on_actionRehacer_triggered()
{
    ui->textEdit->redo();
}


void TextoRicoEditor::BuscarRecibir(const TextoInfo& dato)
{
    setDato(dato);

    QTextDocument::FindFlags bandera;
    /*
    El código que has escrito usa la clase QTextDocument::FindFlags, que es un tipo de enumeración que especifica las opciones de búsqueda para el método find1. El código usa el operador OR bit a bit (|) para combinar diferentes banderas de búsqueda, según las condiciones que se cumplan. Las banderas de búsqueda son las siguientes:

    QTextDocument::FindFlag::FindWholeWords: Busca solo palabras completas que coincidan con el texto buscado.
    QTextDocument::FindFlag::FindCaseSensitively: Busca el texto respetando las mayúsculas y minúsculas
    QTextDocument::FindFlag::FindBackward: Busca el texto hacia atrás desde la posición actual del cursor.
     */
    if(dato.getEsCoincidido()) bandera = bandera | QTextDocument::FindFlag::FindWholeWords;
    if(dato.getEsDistinguido()) bandera = bandera | QTextDocument::FindFlag::FindCaseSensitively;
    if(dato.getEsBuscarDetras()) bandera = bandera | QTextDocument::FindFlag::FindBackward;

    //Luego usar el método "find" de "QTextEdit" a buscar en la manera adecuada:
    bool valor = ui->textEdit->find(dato.getBuscarTexto(), bandera);
    //El método "find" de QTextEdit, que busca una cadena de texto en el documento asociado al editor, usando las opciones de búsqueda especificadas. Este método "find" devuelve un valor booleano que indica si se encontró o no el texto buscado.

    if(!valor){
        QMessageBox::information(this, "No Buscado", "No se puede buscar el text: " + dato.getBuscarTexto());
    }

}

void TextoRicoEditor::ReemplazarRecibir(const TextoInfo &dato)
{
    setDato(dato);

    //condidenar la marena de buscado:
    QTextDocument::FindFlags bandera;
    if(dato.getEsCoincidido()) bandera = bandera | QTextDocument::FindFlag::FindWholeWords;
    if(dato.getEsDistinguido()) bandera = bandera | QTextDocument::FindFlag::FindCaseSensitively;
    // if(dlg->getEsBuscarDetras() ) bandera = bandera | QTextDocument::FindFlag::FindBackward;

    if(dato.getEsTodoElegido()){
        //Sustituir todas las mechas:
        QString textoObjetivo = ui->textEdit->toHtml();

        textoObjetivo.replace(dato.getBuscarTexto(), dato.getReemplazarTexto(),
                              dato.getEsDistinguido() ? Qt::CaseSensitive : Qt::CaseInsensitive);
        ui->textEdit->setHtml(textoObjetivo);

        texto_cambiado = true;

    }else{
        //Solo sustituir la que busca primeramente, usando "QTextCursor" a localizar el texto buscado.:
        bool valor = ui->textEdit->find(dato.getBuscarTexto(), bandera);
        if(!valor){
            QMessageBox::information(this, "No Buscado", "No se puede buscar el text: " + dato.getReemplazarTexto());
            return;
        }

        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.insertHtml(dato.getReemplazarTexto());

        texto_cambiado = true;


    }


}

void TextoRicoEditor::on_actionElegir_todo_triggered()
{
    ui->textEdit->selectAll();

}

void TextoRicoEditor::on_actionZoom_acercar_triggered()
{
    ui->textEdit->zoomIn(2);//el parametro define la escala del aumento cada vez este botón se empuja.
}

void TextoRicoEditor::on_actionZoom_alejorar_triggered()
{
    ui->textEdit->zoomOut(2);
}



void TextoRicoEditor::on_actionBuscar_Reemplazar_triggered()
{
    BuscarDialogo* dlg = new BuscarDialogo(this);
    connect(dlg, &BuscarDialogo::buscarDatoEviado, this, &TextoRicoEditor::BuscarRecibir);
    connect(dlg, &BuscarDialogo::reemplazarDataEviado, this, &TextoRicoEditor::ReemplazarRecibir);
    dlg->show();
}


//Usar los métodos de la clase "QFont" a manipular la fuente.
void TextoRicoEditor::on_actionNegrita_triggered()
{
    QFont fuente = ui->textEdit->currentFont();
    fuente.bold() ? fuente.setBold(false) : fuente.setBold(true);
    ui->textEdit->setCurrentFont(fuente);

    texto_cambiado = true;
}


void TextoRicoEditor::on_actionCursiva_triggered()
{
    QFont fuente = ui->textEdit->currentFont();
    fuente.italic() ? fuente.setItalic(false) : fuente.setItalic(true);
    ui->textEdit->setCurrentFont(fuente);

    texto_cambiado = true;

}


void TextoRicoEditor::on_actionSubrayar_triggered()
{
    QFont fuente = ui->textEdit->currentFont();
    fuente.underline() ?  fuente.setUnderline(false) : fuente.setUnderline(true);
    ui->textEdit->setCurrentFont(fuente);

    texto_cambiado = true;

}

//Usar los diálogos a modificar el color y el fuente.
void TextoRicoEditor::on_actionColor_triggered()
{
    QColor corriente = ui->textEdit->currentCharFormat().foreground().color();
    QColor colorElegido = QColorDialog::getColor(corriente, this, "Elegir un color");

    ui->textEdit->setTextColor(colorElegido);

    if(colorElegido == corriente){
        texto_cambiado = true;
    }
}


void TextoRicoEditor::on_actionfuente_triggered()
{
    bool esAceptado;
    QFont fuente = QFontDialog::getFont(&esAceptado, ui->textEdit->currentFont(), this , "Elegir un fuente");
    if(esAceptado) ui->textEdit->setCurrentFont(fuente);
    texto_cambiado = true;

}

//La aplicación va a abrir el enlace de "OrganizationDomain" con navegadora.
void TextoRicoEditor::on_actionAyuda_triggered()
{
    QDesktopServices::openUrl(QApplication::organizationDomain());
}


void TextoRicoEditor::on_actionSobre_nosotros_triggered()
{
    SobreNosotros* dlg = new SobreNosotros(this);
    dlg->show();
}


void TextoRicoEditor::on_textEdit_textChanged()
{
    texto_cambiado = true;
}

void TextoRicoEditor::nuevoArchivo()
{
    ui->textEdit->clear();
    ui->statusbar->showMessage("Nuveo Archivo");
    m_paso = "";
    texto_cambiado = false;

}

void TextoRicoEditor::abrirArchivo()
{

    QString paso = QFileDialog::getOpenFileName(this,"Abrir Archivo", QString(), "Todos Archivos(*.*)");
    //como es un editor del texto rico, no se limita el tipo del archivo.

    if(paso.isEmpty()) return;

    QFile archivo(paso);
    if(!archivo.open(QIODevice::ReadOnly)){
        QMessageBox::critical(this, "Error", archivo.errorString());
        return;
    }

    QTextStream esecuencia(&archivo);
    ui->textEdit->setHtml(esecuencia.readAll());

    archivo.close();

    m_paso = paso;
    ui->statusbar->showMessage(m_paso);
    texto_cambiado = false;

}

void TextoRicoEditor::guardar(QString paso)
{
    if(paso.isEmpty()){
        guardar_como();
        return;
    }

    QFile archivo(paso);
    if(!archivo.open(QIODevice::WriteOnly)){
        QMessageBox::critical(this, "Error", archivo.errorString());
        ui->statusbar->showMessage("ERROR, No se puede guardar!");
        guardar_como();
        return;
    }

    QTextStream esecuencia(&archivo);

    esecuencia << ui->textEdit->toHtml();
    archivo.close();

    m_paso = paso;
    ui->statusbar->showMessage(m_paso);
    texto_cambiado = false;

}

void TextoRicoEditor::guardar_como()
{
    QString paso = QFileDialog::getSaveFileName(this, "Guardar Archivo",  "Nuevo Archivo.html", "Todos Archivos(*.*)");
    if(paso.isEmpty()) return;
    guardar(paso);
}

void TextoRicoEditor::esGuardado()
{
    if(!texto_cambiado) return;
    //Si hay cambia que no es guardada, preguntar al usuario si quiere guardarla.
    QMessageBox::StandardButton valor = QMessageBox::question(this, "Caución", "¿Querría guardar las cambias nuevas?");

    if(valor != QMessageBox::StandardButton::Yes){
        return;
    }

    if(!m_paso.isEmpty()){
        guardar(m_paso);
    }
    else{
        guardar_como();
    }

}


void TextoRicoEditor::setDato(const TextoInfo &newDato)
{
    dato = newDato;
}

void TextoRicoEditor::cerrarEvento(QCloseEvent *evento)
{
    evento->accept();
}




