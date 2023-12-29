
#include <QCoreApplication>
#include <QDebug>
#include <QThread>

/*
 QInt tipo:
 Los tipos de datos enteros con signo'int' en Qt están disponibles en diferentes subclases, como 'qint8', 'qint16', 'qint32' y 'qint64'. Cada subclase representa un tamaño específico de los datos enteros con signo:

    'qint8': Representa un entero con signo de 8 bits. Puede almacenar valores en el rango de -128 a 127.
    'qint16': Representa un entero con signo de 16 bits. Puede almacenar valores en el rango de -32,768 a 32,767.
    'qint32': Representa un entero con signo de 32 bits. Puede almacenar valores en el rango de -2,147,483,648 a 2,147,483,647.
    'qint64': Representa un entero con signo de 64 bits. Puede almacenar valores en el rango de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807.
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qint8 value8 = 0;
    qint16 value16 = 0;
    qint32 value32 = 0;
    qint64 value64 = 0;


    qintptr valueptr = NULL;
/*
    El tipo 'qintptr' se utiliza en Qt para representar 'punteros' como 'enteros con signo'. Puedes usar 'qintptr' en situaciones en las que necesitas almacenar o manipular punteros como valores enteros.
    El tamaño exacto de 'qintptr' puede variar dependiendo de la arquitectura y la compilación de Qt. En la mayoría de las plataformas modernas de 32 bits, 'qintptr' será de 32 bits, mientras que en plataformas de 64 bits, 'qintptr' será de 64 bits.
    En resumen, 'qintptr' es una forma portátil y segura de representar punteros como enteros en aplicaciones de Qt.
*/



    //cada tipo de qint* tiene un tamano diferente:
    qInfo()<< "un qint8 objeto tiene un tamano de "<< sizeof(value8) <<" byte.";
    qInfo()<< "un qint16 objeto tiene un tamano de "<< sizeof(value16) <<" bytes.";
    qInfo()<< "un qint32 objeto tiene un tamano de "<< sizeof(value32) <<" bytes.";
    qInfo()<< "un qint64 objeto tiene un tamano de "<< sizeof(value64) <<" bytes.";

    qInfo()<< "un qintptr objeto tiene un tamano de "<< sizeof(valueptr) <<" bytes.";



/*
    La clase 'qintptr' en Qt es un tipo de dato utilizado para representar un puntero o un identificador de un recurso en el sistema operativo subyacente. Puede ser un tipo de datos integral o un puntero, dependiendo de la plataforma y la arquitectura del sistema.
*/

    // Crear un puntero qintptr
    qintptr ptr = 12345;

    // Imprimir el valor del qintptr
    qDebug() << "Valor de qintptr:" << ptr;


    return a.exec();
}
