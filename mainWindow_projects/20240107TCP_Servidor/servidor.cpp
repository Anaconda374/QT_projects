#include "servidor.h"

Servidor::Servidor(QObject *parent)
    : QTcpServer{parent}
{}

int Servidor::contar()
{
    return m_lista.count();
}

void Servidor::cerrar()
{
    //Al cerrar el servido, tener que cerrar todos los enchufes, y liberar los punteros.
    foreach(QTcpSocket* enchufe, m_lista){
        enchufe->close();
    }
    qDeleteAll(m_lista);
    m_lista.clear();

    emit cambiado();

    QTcpServer::close();//Usar el método "close()" de "QTcpServer".
}


void Servidor::desconectar()
{
    QTcpSocket* enchufe = qobject_cast<QTcpSocket*>(sender());
    if(!enchufe) return;

    m_lista.removeAll(enchufe);

    //Desconetar este enchufe de las ranuras de este servido.
    disconnect(enchufe, &QTcpSocket::disconnected, this, &Servidor::desconectar);
    disconnect(enchufe, &QTcpSocket::readyRead, this, &Servidor::listo_Leer);
    /*
El método “readyRead” de la clase “QTcpSocket” en Qt es un método que se invoca cuando hay nuevos datos disponibles para leer en el socket. Es un método que emite una señal llamada “readyRead” cuando se cumple esta condición. Esta señal puede ser capturada por una función de señales y objetos (Q_OBJECT) que se ha registrado como receptor de la señal1. La función receptor puede procesar los datos leídos y realizar las acciones deseadas.

El método “readyRead” es útil para implementar la comunicación TCP/IP entre un cliente y un servidor, ya que permite leer los datos enviados por el servidor y enviar los datos solicitados por el cliente. También permite controlar el flujo de datos y evitar bloqueos o pérdidas de información.
     */


    enchufe->deleteLater();
    /*
    El método “deletelater” es una función de la clase base “QObject”.
    Es una función que programa la eliminación del objeto cuando el control regresa al bucle de eventos. Esto significa que el objeto no se borrará inmediatamente, sino que se esperará a que no haya ningún evento pendiente para el objeto en la cola de eventos. Esto puede evitar problemas de acceso a objetos inválidos o borrados dos veces.
     */
    emit cambiado();

}

void Servidor::listo_Leer()
{
    //recuperar el cliente que mandó el mensaje.
    QTcpSocket* enchufe = qobject_cast<QTcpSocket*>(sender());
    if(!enchufe) return;

    //Almacenar el mensaje mandado a "dato".
    QByteArray dato = enchufe->readAll();

    //copiar este mensaje a todos los clientes.
    foreach(QTcpSocket* e, m_lista){
        e->write(dato);
    }

}

//establecer un conexión nueva.
void Servidor::incomingConnection(qintptr handle)
{
    //crear un nuevo enchufe para esta conexion.
    QTcpSocket* enchufe = new QTcpSocket();
    enchufe->setSocketDescriptor(handle);
    //"handle" es un "int" recibido de el sistema operativo??

    //esparar vincular el conexion, si no hacer exito, devolver.
    if(!enchufe->waitForConnected(3000)){
        delete enchufe;
        return;
    }
    //si hacer exito, añadir este enchufe a la lista.
    m_lista.append(enchufe);
    connect(enchufe, &QTcpSocket::readyRead, this, &Servidor::listo_Leer);
    connect(enchufe, &QTcpSocket::disconnected, this, &Servidor::desconectar);

    emit cambiado();
    enchufe->write(mensaje.toLatin1());
}



QString Servidor::getMensaje() const
{
    return mensaje;
}

void Servidor::setMensaje(const QString &newMensaje)
{
    mensaje = newMensaje;
}



