
#include <QCoreApplication>
#include <QDebug>


void imprimir(QList<int> enteroLista){
    foreach(auto entero, enteroLista){
        qInfo()<<entero;
    }
}

//En Qt 6, 'QVector' es solo un alias de 'QList', y ellos hacen exactamente mismas cosas.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//QList:
    //Difiniciones:
    QList<int> edades ({20, 23, 05, 30});

    QList<QString> nombres = {"kuan", "anacs", "juan", "gabriel"};

    //Operaciones
    edades.remove(2);//eliminar el elemento en la posicion'2'.
    edades.append(88);

    imprimir(edades);

    QVector<int> numeros = {1, 2, 3};
    imprimir(numeros);

    return a.exec();
}
