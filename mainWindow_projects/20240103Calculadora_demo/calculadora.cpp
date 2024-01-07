#include "calculadora.h"
#include "ui_calculadora.h"

Calculadora::Calculadora(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculadora)
{
    ui->setupUi(this);
    iniciar();

}

Calculadora::~Calculadora()
{
//Es necesario a borrar todos los punteros a las ecuaciones que creamos.
    qDeleteAll(m_lista);

    delete ui;
}

//Cuando el botón "Aceptat" hemos tecleado,se salta un ventana que demostrar el total de todos las ecuaciones.
void Calculadora::on_btnAceptar_clicked()
{
    double todo = 0;
    foreach (Ecuacion* ecua, m_lista) {
        bool ok;
        double valor = ecua->resultado().toDouble(&ok);
        if(!ok) continue;
        todo = todo + valor;
    }

    QMessageBox::information(this, "Todo", "La cantidad total es: " + QString::number(todo));

}

void Calculadora::limpiar()
{
    if(m_lista.count() == 0) return;
    qDeleteAll(m_lista);//borrar todos los punteros, y librar la memoria.
    m_lista.clear(); //Nota: "clear()" solo eliminar el objeto,  no va a librar la memoria.
    actualizar();
}


void Calculadora::actualizar()
{
    if(ui->listWidget->count() != m_lista.count()){ //si el sincronización no es exitosa, re_actualizarlo.
        ui->listWidget->clear();
        foreach(Ecuacion* ecua, m_lista){
            ui->listWidget->addItem(ecua->toString());
        }
        ui->listWidget->setCurrentRow(ui->listWidget->count() - 1); //mover el cursor a la última fila.
    }
    else{ //si es sincronizado, solo actualizar la nueva ecuación.
        ui->listWidget->setCurrentRow(ui->listWidget->count() - 1); //mover el cursor a la última fila.
        ui->listWidget->item(ui->listWidget->count())->setText(m_lista.last()->toString());
    }

}

//Inicializar el panel de números.
void Calculadora::iniciar()
{
    int fila = 0;
    int columna = 2;
    //insertar 9 números a "QGridLayout" como el número panel.
    for(int i = 9; i >= 0; i--){
        QPushButton* btn = new QPushButton(QString::number(i), this);
        connect(btn, &QPushButton::clicked, this, &Calculadora::numero);

        ui->numeroPanel->addWidget(btn, fila, columna);
        columna--;
        if(columna < 0){
            fila++;
            columna = 2;

            //Insertar el número "0" a la mitad del fondo.
            if(fila == 3) columna = 0;
        }
    }

    QPushButton* btnSumar = new QPushButton("+", this);
    QPushButton* btnSustraer = new QPushButton("-", this);
    QPushButton* btnMultiplicar = new QPushButton("*", this);
    QPushButton* btnDividir = new QPushButton("/", this);

    connect(btnSumar, &QPushButton::clicked, this, &Calculadora::sumar);
    connect(btnSustraer, &QPushButton::clicked, this, &Calculadora::sustraer);
    connect(btnMultiplicar, &QPushButton::clicked, this, &Calculadora::multiplicar);
    connect(btnDividir, &QPushButton::clicked, this, &Calculadora::dividir);

    ui->numeroPanel->addWidget(btnSumar, 0, 3);
    ui->numeroPanel->addWidget(btnSustraer, 1, 3);
    ui->numeroPanel->addWidget(btnMultiplicar, 2, 3);
    ui->numeroPanel->addWidget(btnDividir, 3, 3);


}

//Devolver el puntero a la última ecuación.
Ecuacion* Calculadora::recuperarUltima()
{
    if(m_lista.count() == 0){ //si la lista de ecuaciones es vacia, crear una ecuación nueva.
        m_lista.append(new Ecuacion(this));
    }
    return m_lista.last();
}


void Calculadora::actualizarValor(QString dato)
{
    //primero, recuperar la última ecuación.
    Ecuacion* ecua = recuperarUltima();
    if(!ecua) return; //si ocurre algún error, detener la función.

    QString valor;
    //si la acción no es fijada, actualizar el argumento a "m_valor1"
    if(ecua->accion() == Ecuacion::Accion::Nada){
        qDebug()<< "Nada";
        valor = ecua->valor1();
        valor.append(dato);
        ecua->setValor1(valor);
    }
    else{
        qDebug()<< "No Es Nada";
        valor = ecua->valor2();
        valor.append(dato);
        ecua->setValor2(valor);
    }

    ecua->calcular();
    actualizar();

    /*
     El método “update()” de la clase QDialog en Qt se utiliza para actualizar el contenido del diálogo cuando se cambia algún elemento del interfaz gráfica. Por ejemplo, si se modifica el texto de un QLineEdit o se cambia el estado de un botón. El método “update()” llama al método “repaint()” de la clase QWidget, que es la clase base de QDialog, para redibujar el diálogo con los cambios realizados.
     */
}

void Calculadora::actualizarAccion(Ecuacion::Accion accion)
{
    Ecuacion* ecua = recuperarUltima();
    if(!ecua) return;

    ecua->setAccion(accion);
    ecua->calcular();
    actualizar();

}


void Calculadora::sumar()
{
    actualizarAccion(Ecuacion::Accion::Sumar);
}

void Calculadora::sustraer()
{
    actualizarAccion(Ecuacion::Accion::Sustraer);

}

void Calculadora::multiplicar()
{
    actualizarAccion(Ecuacion::Accion::Multiplicar);

}

void Calculadora::dividir()
{
    actualizarAccion(Ecuacion::Accion::Dividir);

}

void Calculadora::numero()
{
    //recuperar el número del botón que hemos tecleado.
    QPushButton* btn = static_cast<QPushButton*>(sender());
    //usa el método "sender()" de la clase QObject para obtener el objeto que envió la señal.
    if(!btn) return;

    bool ok;
    double numero = btn->text().toDouble(&ok); //extraer el número del botón.
    Q_UNUSED(numero);
    //Desde que no vamos usar el objeto "numero", usa la macro Q_UNUSED para indicar que el valor de numero no se usa en el resto del código. Esto es útil para evitar advertencias del compilador sobre variables no utilizadas.

    if(!ok){
        QMessageBox::critical(this, "ERROR", "No es un número botón!");
        return;
    }
    actualizarValor(btn->text());


}



void Calculadora::anadirEcuacion()
{
    m_lista.append(new Ecuacion(this));
    actualizar();
}







void Calculadora::on_btnLimpiar_clicked()
{
    limpiar();

}


void Calculadora::on_btnNueva_clicked()
{
    anadirEcuacion();
}

