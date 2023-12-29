
#include <QCoreApplication>
/*
Definir 2 clases 'dueno' y 'perro' para demostrar los tipos de conexion:
 */
#include "dueno.h"
#include "perro.h"

/*
EL proceso de la operacion 'connect' en Qt:
    1.Identificación de la señal y el slot: La operación connect() identifica la señal y el slot en función de sus firmas de función. Utiliza los metadatos producidos por el preprocesador proporcionados por la macro 'Q_OBJECT' para acceder a la información relevante.

    2.Relación de emisor-receptor: La operación connect() establece la relación de emisor-receptor entre los objetos involucrados. Configura la contabilidad interna necesaria para hacer un seguimiento de las conexiones.

    3.Extracción de la señal: La operación connect() extrae información sobre la señal, como los parámetros de la señal, los tipos de argumentos y el meta-objeto asociado.

    4.Validación del slot: La operación connect() valida el slot, asegurándose de que exista, sea accesible y sea compatible con los parámetros de la señal.

    5.Creación de la conexión: La operación connect() crea "un objeto de conexión" que representa la conexión entre la señal y el slot. Este objeto de conexión se agrega a la lista interna de conexiones del emisor.

    6.Invocación del slot: Cuando se emite la señal, el objeto de conexión activa la invocación del slot. El slot se llama con los argumentos apropiados pasados desde la señal.
 */

/*
El objeto de conexión principalmente contiene la siguiente información:

    1.Punteros al emisor y al receptor: El objeto de conexión almacena punteros al "objeto emisor" y al "objeto receptor". Estos punteros se utilizan para identificar los objetos involucrados en la conexión.

    2.Información de la señal: El objeto de conexión almacena información sobre la señal, como el meta-objeto de la señal, el índice de la señal dentro del meta-objeto y los argumentos (si los hay) asociados a la señal.

    3.Información del slot: De manera similar, el objeto de conexión guarda información sobre el slot, incluyendo el meta-objeto del slot, el índice del slot dentro del meta-objeto y los argumentos (si los hay) asociados al slot.

    4.Tipo de conexión: El objeto de conexión almacena el tipo de conexión, que determina cómo se invocará el slot cuando se emita la señal. El tipo de conexión puede ser directo(Qt::DirectConnection), único(Qt::UniqueConnection) o conbinado(Qt::ConnectionType),etc. Ofreciendo diferentes comportamientos para la comunicación entre objetos.

El objeto de conexión no contiene el código real para invocar el slot. En su lugar, sirve como una referencia a la información necesaria para realizar la conexión cuando se emite la señal. Cuando se emite una señal, el objeto de conexión activa el mecanismo adecuado para invocar al slot, pasando los argumentos de la señal al slot.
 */





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dueno kuan;
    Perro juan;

/*
    Usa el tipo 'AutoConnection' por defecto:
        Con 'AutoConnection', cada vez se conectan una 'señal' y un 'slot', la operación 'connect()' crea "un objeto de conexió". Por eso. Habra 'n' objects de conexios si conectan 'n' veces, y el slot se ejecutara 'n' veces por 'una emision de senal'.
*/
    QObject::connect(&kuan, &Dueno::alimentar, &juan, &Perro::comer);

    //el slot se ejecutara 10 veces
    for(int i= 0; i<10; ++i){
        QObject::connect(&kuan, &Dueno::alimentar, &juan, &Perro::comer);
    }

/*
Qt::UniqueConnection:
    Cuando define la conexión como ´Qt::UniqueConnection´, si la misma conexión ya existe, Función´connect´ no creará más object de la misma conexión. Y asi que, el slot no se ejecutará más vez.
*/
    for(int i= 0; i<10; ++i){
        QObject::connect(&kuan, &Dueno::alimentar, &juan, &Perro::comer, Qt::UniqueConnection);
    }


    kuan.darComida();

    return a.exec();
}
