
#include <QCoreApplication>
#include "coche.h"
#include "cochedecarreras.h"
#include "felino.h"

/*
Definir una clase base 'Coche' y una clase derivada 'CocheDeCarreras', y una clase distinta 'Felino' para demostrar la conversión de diferente tipos de cast operaciones.
 */


//Esta funcion tiene un parametro del tipo 'Coche*':
void probarMover(Coche* obj){
    obj->mover();
    obj->detener();
}

//Esta funcion tiene un parametro del tipo 'CoceDeCarreras*':
void probarCorrer(CocheDeCarreras* obj){
    obj->mover();
    obj->correrRapido();
    obj->detener();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    CocheDeCarreras* jugador1 = new CocheDeCarreras();
    probarMover(jugador1);//implicita conversion.


/*
Explicita conversion usando 'dynamic_cast':
     El operador dynamic_cast devuelve un puntero o una referencia al tipo de destino si la conversión es posible y segura. Si la conversión no es posible, dynamic_cast devuelve "un puntero nulo" (nullptr) en el caso de punteros, o lanza "una excepción de tipo std::bad_cast" en el caso de referencias.
*/
    Coche* obj = dynamic_cast<Coche*>(jugador1);
    if(obj){
        probarMover(obj); //Si la conversion tiene exito, pase 'obj' a la funcion 'probarMover()'.
    }
    else{
        qInfo()<< "conversion fallida";
    }
    qInfo()<<"\n";


    Felino* cat = new Felino();
    Coche* obj2 = dynamic_cast<Coche*>(cat);//no puede convertir un puntero a otra puntero que punta a un objeto de una clase que no es la clase base, usando 'dynamic_cast'.
    if(obj2){
        probarMover(obj2); //Si la conversion tiene exito, pase 'obj' a la funcion 'probarMover()'.
    }
    else{
        qInfo()<< "conversion fallida";
    }
    qInfo()<<"\n";

/*
'static_cast' cumple una no_polimorfico(or no_cambiada) conversion, permite un conversion de la clase base a un clase derivada:
 */
    Coche* obj3 = new Coche();
    qInfo()<<obj3;
    CocheDeCarreras* jugador2 = static_cast<CocheDeCarreras*>(obj3);
    if(jugador2){
        qInfo()<<"Correr test:";
        qInfo()<<jugador2; //Puntero'jugador2' es la misma de Puntero'obj3'
        probarCorrer(jugador2); //Si la conversion tiene exito, pase 'obj' a la funcion 'probarMover()'.
    }
    else{
        qInfo()<< "conversion fallida";
    }

/*
    "T qobject_cast<T>(QObject *object)" es una función proporcionada por el framework Qt que permite realizar conversiones dinámicas de punteros entre clases derivadas de QObject. Es similar al operador "dynamic_cast" de C++, pero está diseñado específicamente para trabajar con "los objetos de Qt que heredan de QObject".
     La función qobject_cast intenta realizar la conversión y devuelve un puntero al tipo T si la conversión es posible y segura. Si la conversión no es posible, devuelve un puntero nulo (nullptr).
*/
    Coche* obj4 = new Coche();
    CocheDeCarreras* jugador3 = qobject_cast<CocheDeCarreras*>(obj4);//Conversion fallida! Un clase base a la clase dirivada.
    qInfo()<<jugador3;

    Coche* obj5 = qobject_cast<Coche*>(jugador1);//Bueno.
    qInfo()<<obj5;




    return a.exec();


}
