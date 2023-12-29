
#include <QCoreApplication>
#include <QDebug>




//'QStringList' es una clase que heredada de la clase'QList' que es como una plantilla. 'QStringList' es similar con 'QList<QString>':
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString dato = "hola, bienvenidos a todos";

    QStringList lista = dato.split(" ");

    foreach(auto cadena, lista){ //Es similar con 'for_range' bucle en C++.
        qInfo()<<cadena;
    }

    //operaciones de 'QStringList':
    lista.sort(Qt::CaseSensitive);
    qInfo()<<lista;

    QString obj = "todos";
    if(lista.contains(obj)){
        int index = lista.indexOf(obj);
        qInfo()<< lista.value(index)<<" index es: "<<index;
    }
    else{
        qInfo()<<"No existe.";

    }

    return a.exec();
}


