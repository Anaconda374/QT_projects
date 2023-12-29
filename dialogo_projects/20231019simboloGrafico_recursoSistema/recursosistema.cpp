
#include "recursosistema.h"
#include "ui_recursosistema.h"


recursoSistema::recursoSistema(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recursoSistema)
{
    ui->setupUi(this);

//2 metodos para agregar un boton por codigo.

    QPushButton *btnAcceptar = new QPushButton(QIcon(":/simbolos/simbolos_graficos/accept.png"), "Acceptar", this);
    QPushButton *btnRechazar = new QPushButton("Rechazar", this);
    btnRechazar->setIcon(QIcon(":/simbolos/simbolos_graficos/cancel.png"));

    //agregar botones a la boton_caja:
    ui->btnCaja->addButton(btnAcceptar, QDialogButtonBox::ButtonRole::AcceptRole);
    ui->btnCaja->addButton(btnRechazar,QDialogButtonBox::ButtonRole::RejectRole);

    //conectar el señal a la ranura para se pueden funcionar los 2 botones:
    connect(btnAcceptar,&QPushButton::clicked, this, &recursoSistema::accept);
    connect(btnRechazar,&QPushButton::clicked, this, &recursoSistema::reject);

    cargar();
}

recursoSistema::~recursoSistema()
{
    delete ui;
}



void recursoSistema::on_btnNuevo_clicked()
{
    ui->textoEditor->clear();
}


void recursoSistema::on_btnAlmacenar_clicked()
{
    almacenar();
    QMessageBox::information(this,"almacenado", "La cambia del texto esta almacenado");

}


void recursoSistema::on_btnAbrir_clicked()
{
    cargar();
}

//Usar QFile objeto a almacenar el texto en "texto.txt" archivo:
void recursoSistema::almacenar()
{
    QFile textoArchivo("texto.txt");
    if(!textoArchivo.open(QIODeviceBase::WriteOnly)){
        QMessageBox::critical(this, "escribirError", textoArchivo.errorString());
        return;
    }
    QTextStream sequencia(&textoArchivo);
    sequencia << ui->textoEditor->toPlainText();
    textoArchivo.close();
    es_almacenado = true;
}


void recursoSistema::cargar()
{
    QFile textoArchivo("texto.txt");
    if(!textoArchivo.exists()){ return;}

    if(!textoArchivo.open(QIODeviceBase::ReadOnly)){
        QMessageBox::critical(this, "leerError", textoArchivo.errorString());
        return;
    }

    QTextStream sequencia(&textoArchivo);
    ui->textoEditor->setPlainText(sequencia.readAll());

    textoArchivo.close();

    es_almacenado = true;

}


//si el usuario no almacena el dato nuevo en texto_editor, cuando hace clic en el boton cerrar, preguntale si quiere almacenar el texto.
void recursoSistema::closeEvent(QCloseEvent *event)
{
    if(es_almacenado == false){
        QMessageBox::StandardButton btnElegido = QMessageBox::question(this, "Almacenar el archivo", "Quiere almacenar el texto nuevo?");
        if(btnElegido == QMessageBox::StandardButton::Yes){
            almacenar();
        }

    }
    accept();

}

//Cuando el texto se cambia, si el usuario quire almacenar el dato nuevo, debe presionar el almacenar_boton nuevamente.
void recursoSistema::on_plainTextEdit_textChanged()
{
    es_almacenado = false;
}

