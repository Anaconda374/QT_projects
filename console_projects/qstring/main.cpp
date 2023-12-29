
#include <QCoreApplication>
#include <QDebug>
#include <QString>

/*
En el framework de desarrollo Qt, la clase QString es parte de la biblioteca 'QtCore' y se utiliza para representar y manipular cadenas de caracteres Unicode.
 */


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString cadena1 = "estoy en la bibiloteca";

    //operaciones de QString:(usa Ctrl+Alt+Down copiar corriente linea)
    qInfo()<< cadena1;
    //"mid(principio puesto, longitud)" imprimir el intervalo dado.
    qInfo()<< cadena1.mid(10, 8);
    qInfo()<< cadena1.insert(0, "Yo ");//insertar una cadena al puesto especificado.
    qInfo()<< cadena1.split(" ");//'.split' divide la cadena segun el espacio" ", y produce un 'QList'.

    qInfo()<< cadena1.indexOf("to", 0);//'.indexOf' producir primer puesto que la cadena dada se aparece en la cadena ambiente. Si no existe, vuela -1.

    return a.exec();
}
