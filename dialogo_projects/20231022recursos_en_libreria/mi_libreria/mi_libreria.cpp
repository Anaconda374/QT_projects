
#include "mi_libreria.h"


Mi_libreria::Mi_libreria()
{

    //Cargar los recursos en el archivo "recursos.qrc".
    Q_INIT_RESOURCE(recursos);

 /*
    El macro “Q_INIT_RESOURCE” es una macro que se usa para inicializar los recursos que están embebidos en una biblioteca estática o dinámica. Esta macro asegura que los recursos sean registrados con el sistema de recursos de Qt y que puedan ser accedidos por la aplicación1.

    Esta macro se debe colocar al principio de la función main () o en el constructor de una clase que use los recursos2. También se debe usar el nombre del archivo .qrc sin la extensión como argumento de la macro1.
  */



}

QString Mi_libreria::mensaje()
{
    QString mensaje;

    QFile archivo(":/Textos/archivos/readme.txt");
    if(archivo.open(QIODeviceBase::ReadOnly)){
        QTextStream secuencia(&archivo);
        mensaje = secuencia.readAll();

        archivo.close();
    }
    return mensaje;
}

QString Mi_libreria::comprobar()
{
    QString mensaje = "Es una prueba.";
    return mensaje;
}

