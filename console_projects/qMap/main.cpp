
#include <QCoreApplication>
#include <QDebug>
#include "perro.h"



//QMap es un contenedor que contiene claves distintos, y tiene muchas operaciones como otras Qt clases.
typedef QMap<int, Perro*> perroLista;

//definir una funcion para crear una Lista de 'Perro' objetos de el numero dado:
perroLista crearPerros(int num){
    perroLista mapa;
    for(int i = 0; i < num; ++i){
        int id = i;
        Perro* nuevo = new Perro();
        nuevo->setEdad(i*5);
        nuevo->setNombre("perro"+ QString::number(i));
        mapa.insert(id, nuevo);
    }
    return mapa;
}

void imprimirMapa(perroLista mapa){
    foreach(int key, mapa.keys()){
        Perro* corr = mapa.value(key); //'.value(clave)' vuelve el volar que es atado al 'clave'
        qInfo()<<key <<" "<<corr->getNombre()<< " tiene edad "<< corr->getEdad();
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    perroLista mapa = crearPerros(8);
    qInfo()<< " counta: " << mapa.count();
    imprimirMapa(mapa);


    //Despues de ultilizando, recorda borrar los objetos:
    qDeleteAll(mapa.values());//borrar todos 'Perro' objetos.
    qInfo()<< " counta: " << mapa.count();//NOTA, el contenedor todavia existe en este momento.

    mapa.clear();//tenemos que borrar el contenedor 'mapa' tambien.
    qInfo()<< " counta: " << mapa.count();

    return a.exec();
}
