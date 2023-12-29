
#include "pestanas.h"
#include "ui_pestanas.h"


Pestanas::Pestanas(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pestanas)
{
    ui->setupUi(this);

    iniciar();
}

Pestanas::~Pestanas()
{
    delete ui;
}

void Pestanas::iniciar()
{
    ui->tabWidget->setTabText(0, "perfil");//hacerle un nombre para la pestaña del índice 0.

//se puede añadir pestañas a un "QTabWidget" con código:
    QWidget* artilugioNotas = new QWidget(this);
    ui->tabWidget->addTab(artilugioNotas, "Notas");

    QWidget* artilugioMandar = new QWidget(this);
    ui->tabWidget->addTab(artilugioMandar, "Mandar");


//añadir un texto editor a la pestaña "Notas":
    QPlainTextEdit* editor = new QPlainTextEdit(artilugioNotas);
    editor->setPlainText("Este es el texto de la segunda pestaña");

    QVBoxLayout* dispNotas = new QVBoxLayout(artilugioNotas);
    dispNotas->addWidget(editor);
    artilugioNotas->setLayout(dispNotas);

//añadir pulsadores a la caja de botones:
    QPushButton* btnDetras = new QPushButton("Detrás", this);
    ui->buttonBox->addButton(btnDetras,QDialogButtonBox::ButtonRole::ActionRole);
    connect(btnDetras,&QPushButton::clicked,this, &Pestanas::detrasClic);

    QPushButton* btnAdelante = new QPushButton("Adelante", this);
    ui->buttonBox->addButton(btnAdelante,QDialogButtonBox::ButtonRole::ActionRole);
    connect(btnAdelante,&QPushButton::clicked,this, &Pestanas::adelanteClic);

    QPushButton* btnAceptar = new QPushButton("Aceptar", this);
    ui->buttonBox->addButton(btnAceptar,QDialogButtonBox::ButtonRole::ActionRole);
    connect(btnAceptar,&QPushButton::clicked,this, &QMainWindow::close);

//Añadir 2 pulsadores a la pestaña "Mandar" usando "QVboxLayout":

    //crear los 2 pulsadores:
    QPushButton* btnRH = new QPushButton("Mandar a recursos humanos", this);
    connect(btnRH,&QPushButton::clicked,this, &Pestanas::mandarRHClic);

    QPushButton* btnJefe = new QPushButton("Mandar al jefe", this);
    connect(btnJefe,&QPushButton::clicked,this, &Pestanas::mandarJefeClic);

    //EL objeto de la clase "QVBoxLayout" es usado para definir una disposición vertical que lo puede usar el objeto de "QWidget".
    QVBoxLayout* disposicion = new QVBoxLayout(artilugioMandar);
    disposicion->addWidget(btnRH);
    disposicion->addWidget(btnJefe);

    artilugioMandar->setLayout(disposicion);

}

void Pestanas::detrasClic()
{
    int indice = ui->tabWidget->currentIndex();
    int min = 0;
    --indice;
    if(indice < min) indice = min;
    ui->tabWidget->setCurrentIndex(indice);
}


void Pestanas::adelanteClic()
{
    int indice = ui->tabWidget->currentIndex();
    int max = ui->tabWidget->count() - 1;
    ++indice;
    if(indice > max) indice = max;
    ui->tabWidget->setCurrentIndex(indice);
}


void Pestanas::mandarRHClic()
{
    QMessageBox::information(this, "RH", "Tu información ha mandado a recursos humanos. ");
}

void Pestanas::mandarJefeClic()
{
    QMessageBox::information(this, "Jefe", "Tu información ha mandado al jefe. ");
}




