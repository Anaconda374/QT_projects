
#include <QCoreApplication>
#include <QDebug>
/*
Ya que los objetos de 'QObject' no pueden copiar, sino que pasar por punteros. Entonces no puedemos pasar un 'QObject' objeto(o heredada de QObject) directamente a un parametro que es del tipo definido por 'template'. Pero pasar un puntero a el 'QObject' objeto esta bien.

Y otras clases, como 'QString', 'QList', etc que no son heredada de 'QObject', se pueden pasar a un tipo definido por 'template'.
 */

template<class T>

void demostrarTest(T value){
    qInfo()<<value;
}


int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    demostrarTest(QString("kuan"));//bien

    QObject obj;
    demostrarTest(&obj);

    return a.exec();
}
