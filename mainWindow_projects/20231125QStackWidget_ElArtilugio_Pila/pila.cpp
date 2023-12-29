
#include "pila.h"
#include "ui_pila.h"


Pila::Pila(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pila)
{
    ui->setupUi(this);

    iniciar();
}

Pila::~Pila()
{
    delete ui;
}

void Pila::clicDetras()
{
    int indice = ui->stackedWidget->currentIndex();
    int min = 0;
    --indice;
    if(indice < min) indice = min;
    ui->stackedWidget->setCurrentIndex(indice);

    //recuerda llamar "comprobarBotones" después de cambiar la pestaña corriente.
    comprobarBotones();
}

void Pila::clicAdelante()
{
    int indice = ui->stackedWidget->currentIndex();
    int max = ui->stackedWidget->count() - 1;
    ++indice;
    if(indice >= max) indice = max;
    ui->stackedWidget->setCurrentIndex(indice);

    //recuerda llamar "comprobarBotones" después de cambiar la pestaña corriente.
    comprobarBotones();

}

void Pila::iniciar()
{
//Añadir 3 botones a la caja de botones:
    btnDetras = new QPushButton("Detrás", this);
    ui->buttonBox->addButton(btnDetras,QDialogButtonBox::ButtonRole::ActionRole);
    connect(btnDetras,&QPushButton::clicked,this, &Pila::clicDetras);

    btnAdelante = new QPushButton("Adelante", this);
    ui->buttonBox->addButton(btnAdelante,QDialogButtonBox::ButtonRole::ActionRole);
    connect(btnAdelante,&QPushButton::clicked,this, &Pila::clicAdelante);

    QPushButton* btnAceptar = new QPushButton("Aceptar", this);
    ui->buttonBox->addButton(btnAceptar,QDialogButtonBox::ButtonRole::ActionRole);
    connect(btnAceptar,&QPushButton::clicked,this, &QMainWindow::close);

//Crear una pestaña con código, y usar "QHBoxLayout" a añadirle 2 demos etiquetas:
    QWidget* pestanaNueva = new QWidget(ui->stackedWidget);
    QLabel* etiqueta1 = new QLabel("Demo texto 1", pestanaNueva);
    QLabel* etiqueta2 = new QLabel("Demo texto 2", pestanaNueva);
    QHBoxLayout* dispo = new QHBoxLayout(pestanaNueva);
    dispo->addWidget(etiqueta1);
    dispo->addWidget(etiqueta2);
    pestanaNueva->setLayout(dispo);

//Añadir esta nueva pestaña a la pila:
    ui->stackedWidget->addWidget(pestanaNueva);


//Determinar la pestaña de bienvenida:
    ui->stackedWidget->setCurrentIndex(0);


//Comprobar si la pestaña es la primera o la última, en ese caso, necesitamos modificar los botones:
    comprobarBotones();

}

void Pila::comprobarBotones(){

    btnDetras->setEnabled(true);
    btnAdelante->setEnabled(true);

    if(ui->stackedWidget->currentIndex() == 0){
        btnDetras->setEnabled(false);
        btnAdelante->setEnabled(true);
        return;
    }

    if(ui->stackedWidget->currentIndex() >= (ui->stackedWidget->count() - 1) ){
        btnDetras->setEnabled(true);
        btnAdelante->setEnabled(false);
        return;
    }

}


