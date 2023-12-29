
#include <QCoreApplication>
#include <QDebug>

#include <QVariant>

/*
    La clase 'QVariant' en Qt es una parte basica de MOC system, es una clase que proporciona una forma "genérica y flexible" de almacenar valores de diferentes tipos de datos en un solo objeto.
    Permite representar y manipular datos de diferentes tipos de forma unificada, lo que facilita el intercambio de datos entre componentes y la gestión dinámica de tipos en aplicaciones Qt.


Algunos de los beneficios de usar QVariant incluyen:
    1.Flexibilidad en el manejo de diferentes tipos de datos en una sola variable.
    2.Capacidad de conversión y recuperación segura de valores almacenados.
    3.Facilidad para transferir datos entre componentes y en la comunicación entre diferentes partes de una aplicación.
    4.Soporte para serialización y deserialización de datos.

 */

void imprimir(QVariant val){//'QVariant' no es heredada de 'QObject', Entonces, se puede copiar un 'QVariant' objeto:
    int i = 0;
    bool esEntero = false;

    i = val.toInt(&esEntero); //El metodo'.toInt(...)' modifica su parametro que es un puntero a un 'bool' objeto si la convercion tenga exito.
    if(esEntero){
        qInfo()<<"Es un Int objeto: "<<i;
    }
    else{
        qInfo()<<"No es un Int, convercion falla";
    }

}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant valor1 = 5;

    QVariant valor2 = "kuan";


    imprimir(valor1);//QVariant clase puede deducir el tipo del dato que almacenado en el.
    imprimir(valor2);

    return a.exec();
}
