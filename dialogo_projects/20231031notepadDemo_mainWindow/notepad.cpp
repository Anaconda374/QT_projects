
#include "notepad.h"
#include "ui_notepad.h"


Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Notepad)
{
    ui->setupUi(this);

    connect(ui->actionNuevo, &QAction::triggered, this, &Notepad::nuevo);
    connect(ui->actionAbrir, &QAction::triggered, this, &Notepad::abrir);
    connect(ui->actionGuardar, &QAction::triggered, this, &Notepad::guardar);
    connect(ui->actionGuardar_como, &QAction::triggered, this, &Notepad::guardar_como);
    connect(ui->actionBorrar, &QAction::triggered, this, &Notepad::borrarItem);
    connect(ui->actionCopiar, &QAction::triggered, ui->plainTextEdit, &QPlainTextEdit::copy);
    connect(ui->actionCortar, &QAction::triggered, ui->plainTextEdit, &QPlainTextEdit::cut);
    connect(ui->actionPegar, &QAction::triggered, ui->plainTextEdit, &QPlainTextEdit::paste);
    connect(ui->actionElegir_todo, &QAction::triggered, ui->plainTextEdit, &QPlainTextEdit::selectAll);
    connect(ui->actionElegir_nada, &QAction::triggered, this, &Notepad::elegir_nada);
    connect(ui->actionToolBarra_arriba, &QAction::triggered, this, &Notepad::toolBarra_arriba);
    connect(ui->actionToolBarra_abajo, &QAction::triggered, this, &Notepad::toolBarra_abajo);
    connect(ui->actionToolBarra_izquierda, &QAction::triggered, this, &Notepad::toolBarra_izquierda);
    connect(ui->actionToolBarra_derecha, &QAction::triggered, this, &Notepad::toolBarra_derecha);

    //agregar nuevos productos(textos) a la listaArtilugio:
    connect(ui->actionProductos , &QAction::triggered, this, &Notepad::productos_agrego);

    //hacer que el toolbar sea rígido y no flotable inicialmente.
    ui->toolBar->setMovable(false);
    ui->toolBar->setFloatable(false);

    //si la acción "actionToolBarra_flotable" se alterna una vez, el estado de "ui->toolBar->setFlotable(bool)" se cambia también.
    connect(ui->actionToolBarra_flotable, &QAction::toggled, ui->toolBar, &QToolBar::setFloatable);
    connect(ui->actionTool_Barra_movible, &QAction::toggled, ui->toolBar, &QToolBar::setMovable);

    iniciarBarraDeEstado();
    //hacer el "splitter" como el central artilugio, pues "la lista_Artilugio" y "el plano texto editor" se ponen al central especio.
    this->setCentralWidget(ui->splitter);

    iniciarListaArtilugio();

    nuevo();
    esGuardado = true;

}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::nuevo()
{
    ui->plainTextEdit->clear();
    archivo_nombre.clear();
    esGuardado = false;

}

void Notepad::abrir()
{
/*
"QFileDialog::getOpenFileName(..., ..., ..., ...)"para crear un diálogo de selección de archivos en Qt 6. El código usa la clase QFileDialog, que permite al usuario navegar por el sistema de archivos y seleccionar uno o varios archivos o un directorio. La función estática QFileDialog::getOpenFileName devuelve el nombre del archivo que el usuario ha elegido, o una cadena vacía si el usuario ha cancelado el diálogo.
 */
    QString temp = QFileDialog::getOpenFileName(this, "Abrir un archivo", QString(), "Texto files(*.txt);; All files(*.*)");
/*
Los parámetros de la función son los siguientes:

    this: El widget padre del diálogo. Si se pasa un valor nulo, el diálogo será una ventana independiente.
    "Open File": El título del diálogo. Puedes cambiarlo según tus necesidades.
    QString(): El directorio inicial que se muestra en el diálogo. Si se pasa una cadena vacía, se usará el directorio actual.
    "Text Files(*txt);; All Files(*,*)": El filtro de los tipos de archivos que se pueden seleccionar. El formato es "Nombre del tipo (*.extensión);; Otro tipo (*.otra)". Puedes usar varios filtros separados por ;;. El usuario podrá elegir el filtro que prefiera en el diálogo.
*/

    if(temp.isEmpty()) return;
    archivo_nombre = temp;
    QFile archivo(archivo_nombre);
    if(!archivo.open(QIODevice::ReadOnly)){
        nuevo();
        QMessageBox::critical(this, "error", archivo.errorString());
        return;
    }

    QTextStream secuencia(&archivo);
    ui->plainTextEdit->setPlainText(secuencia.readAll());
    archivo.close();

    esGuardado = true;//Ya que no se ha cambiado nada el archivo cuando se acaba de abrir.
    //ui->statusbar->showMessage(archivo_nombre);
    actualizarBarraDeEstado(archivo_nombre);//20231104modificación
}

void Notepad::guardar()
{
    if(archivo_nombre.isEmpty()){
        //si es un texto nuevo, guardarlo como un archivo.
        guardar_como();
        return;
    }

    QFile archivo(archivo_nombre);
    if(!archivo.open(QIODevice::WriteOnly)){
        QMessageBox::critical(this, "error", archivo.errorString());
        return;
    }

    QTextStream secuencia(&archivo);
    secuencia << ui->plainTextEdit->toPlainText();
    archivo.close();

    esGuardado = true;//Ya que no se ha cambiado nada el archivo cuando se acaba de abrir.
    //ui->statusbar->showMessage(archivo_nombre);
    actualizarBarraDeEstado(archivo_nombre);//20231104modificación

}

void Notepad::guardar_como()
{
    QString temp = QFileDialog::getSaveFileName(this, "Guardar el archivo", QString(),  "Texto files(*.txt);; All files(*.*)");
    if(temp.isEmpty()) return;
    archivo_nombre = temp;
    guardar();

}


//Definir una funcion lo que hace es no selecionar nada de el "plainTextEdit", y mover el cursor al principio del documento.
void Notepad::elegir_nada()
{
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    int pos = cursor.position();//guardar la posición corriente del cursor.
    cursor.clearSelection();//Liberar todas seleciones en "plainTextEdit".
    cursor.setPosition(pos, QTextCursor::MoveMode::KeepAnchor);
    /*
     usa el método setPosition del cursor para moverlo al principio del documento.
     */

    ui->plainTextEdit->setTextCursor(cursor);

}

void Notepad::toolBarra_arriba()
{
    addToolBar(Qt::ToolBarArea::TopToolBarArea, ui->toolBar);

}

void Notepad::toolBarra_abajo()
{
    addToolBar(Qt::ToolBarArea::BottomToolBarArea, ui->toolBar);

}

void Notepad::toolBarra_izquierda()
{
    addToolBar(Qt::ToolBarArea::LeftToolBarArea, ui->toolBar);

}

void Notepad::toolBarra_derecha()
{
    addToolBar(Qt::ToolBarArea::RightToolBarArea, ui->toolBar);
}


//20231103modificación
void Notepad::iniciarBarraDeEstado()
{
    QLabel* etiquetaIcono = new QLabel(this);
    etiquetaIcono->setPixmap(QPixmap(":/iconos/simbolos2/file.png"));
    ui->statusbar->addWidget(etiquetaIcono);//el método "addWidget" se puede añadir cualquier artilugio que es heredado de "QWidget".

    QLabel* etiquetaGuardado = new QLabel(this);
    etiquetaGuardado->setText("No Guardado");
    ui->statusbar->addWidget(etiquetaGuardado);

    QLabel* etiquetaPaso = new QLabel(this);
    etiquetaPaso->setText("Nuevo Texto");
    ui->statusbar->addWidget(etiquetaPaso);
}


void Notepad::actualizarBarraDeEstado(QString nombre){

//Para actualizar los estados de las etiquetas en la barra de estado, se necesita obtener las posiciones de cada etiqueta.
    foreach(QObject* obj, ui->statusbar->children()){
        qDebug() << obj;
    }
    /*
    Por imprimir los hijos de "ui->statusbar", lo que descubrimos es que se tiene 5 hijos
    0.QSizeGrip(...)
    1.QLabel(...) //lo añadimos en la funcion "iniciarBarraDeEstado".
    2.QLabel(...) //lo añadimos en la funcion "iniciarBarraDeEstado".
    3.QHBoxLayout(...)
    4.QLabel(...) //lo añadimos en la funcion "iniciarBarraDeEstado".
    */

    //recuperar las etiquetas adecuadas que queremos a actualizar.
    QLabel* etiquetaIcono = qobject_cast<QLabel*>(ui->statusbar->children().at(1));
    QLabel* etiquetaGuardado = qobject_cast<QLabel*>(ui->statusbar->children().at(2));
    QLabel* etiquetaPaso = qobject_cast<QLabel*>(ui->statusbar->children().at(4));


    //si el archivo es guardado.
    if(esGuardado){
        etiquetaIcono->setPixmap(QPixmap(":/iconos/simbolos2/disk.png")); //cambiar el icono.
        etiquetaGuardado->setText("Guardado"); //cambiar el guardar_estado.
    }
    else{
        etiquetaIcono->setPixmap(QPixmap(":/iconos/simbolos2/file.png"));
        etiquetaGuardado->setText("No Guardado");
    }

    etiquetaPaso->setText(nombre);
}

void Notepad::iniciarListaArtilugio()
{
    for(int i = 1; i <= 20 ; ++i){
        QString item = "ítem " + QString::number(i);
        ui->listWidget->addItem(item);
    }
}



void Notepad::on_plainTextEdit_textChanged()
{
    //si el usuario está escribiendo:
    esGuardado = false;
    if(archivo_nombre.isEmpty()){
        actualizarBarraDeEstado("Nuevo Texto");
    }
    else{
        actualizarBarraDeEstado(archivo_nombre);
    }

}


void Notepad::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->plainTextEdit->appendPlainText(item->text());
}


void Notepad::borrarItem()
{
    QList<QListWidgetItem*> itemsElegidos = ui->listWidget->selectedItems();
    foreach(QListWidgetItem* item, itemsElegidos){
        delete ui->listWidget->takeItem(ui->listWidget->row (item));
        // elimina el elemento de la lista y libera la memoria .
    }
}

void Notepad::productos_agrego(){
    QStringList productos;

    productos << "Leche de NewZealand" << "Mermelada" << "mantequilla";

    QScopedPointer<SubDialogo> ptr (new SubDialogo(this));
    // La diferencia entre usar "ptr.data()->iniciarComboCaja(productos)" y "ptr->iniciarComboCaja(productos)" es que el primero llama al método "data()" de la clase QScopedPointer, que devuelve el puntero al objeto al que apunta, y luego usa el operador -> para acceder al método iniciarComboCaja(productos) de ese objeto. El segundo usa directamente el operador -> de la clase QScopedPointer, que también proporciona acceso al método iniciarComboCaja(productos) del objeto al que apunta. En otras palabras, ambos hacen lo mismo, pero el primero es más explícito y el segundo es más conciso.
    ptr.data()->iniciarComboCaja(productos);
    ptr.data()->exec();

    ui->listWidget->addItem(ptr.data()->elegido());
}

